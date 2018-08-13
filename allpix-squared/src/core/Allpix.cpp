/** @file
 *  @brief Implementation of interface to the core framework
 *  @copyright Copyright (c) 2017 CERN and the Allpix Squared authors.
 * This software is distributed under the terms of the MIT License, copied verbatim in the file "LICENSE.md".
 * In applying this license, CERN does not waive the privileges and immunities granted to it by virtue of its status as an
 * Intergovernmental Organization or submit itself to any jurisdiction.
 */

#include "Allpix.hpp"

#include <chrono>
#include <climits>
#include <fstream>
#include <memory>
#include <stdexcept>
#include <thread>
#include <utility>

#include <TROOT.h>
#include <TRandom.h>
#include <TStyle.h>
#include <TSystem.h>

#include "core/config/exceptions.h"
#include "core/utils/file.h"
#include "core/utils/log.h"
#include "core/utils/unit.h"

using namespace allpix;

/**
 * This class will own the managers for the lifetime of the simulation. Will do early initialization:
 * - Configure the special header sections.
 * - Set the log level and log format as requested.
 * - Load the detector configuration and parse it
 */
Allpix::Allpix(std::string config_file_name, const std::vector<std::string>& options)
    : terminate_(false), has_run_(false), msg_(std::make_unique<Messenger>()), mod_mgr_(std::make_unique<ModuleManager>()),
      geo_mgr_(std::make_unique<GeometryManager>()) {
    // Load the global configuration
    conf_mgr_ = std::make_unique<ConfigManager>(std::move(config_file_name),
                                                std::initializer_list<std::string>({"Allpix", ""}),
                                                std::initializer_list<std::string>({"Ignore"}));

    // Load and apply the provided options
    conf_mgr_->loadOptions(options);

    // Fetch the global configuration
    Configuration& global_config = conf_mgr_->getGlobalConfiguration();

    // Set the log level from config if not specified earlier
    std::string log_level_string;
    if(Log::getReportingLevel() == LogLevel::NONE) {
        log_level_string = global_config.get<std::string>("log_level", "INFO");
        std::transform(log_level_string.begin(), log_level_string.end(), log_level_string.begin(), ::toupper);
        try {
            LogLevel log_level = Log::getLevelFromString(log_level_string);
            Log::setReportingLevel(log_level);
        } catch(std::invalid_argument& e) {
            LOG(ERROR) << "Log level \"" << log_level_string
                       << "\" specified in the configuration is invalid, defaulting to INFO instead";
            Log::setReportingLevel(LogLevel::INFO);
        }
    } else {
        log_level_string = Log::getStringFromLevel(Log::getReportingLevel());
    }

    // Set the log format from config
    std::string log_format_string = global_config.get<std::string>("log_format", "DEFAULT");
    std::transform(log_format_string.begin(), log_format_string.end(), log_format_string.begin(), ::toupper);
    try {
        LogFormat log_format = Log::getFormatFromString(log_format_string);
        Log::setFormat(log_format);
    } catch(std::invalid_argument& e) {
        LOG(ERROR) << "Log format \"" << log_format_string
                   << "\" specified in the configuration is invalid, using DEFAULT instead";
        Log::setFormat(LogFormat::DEFAULT);
    }

    // Open log file to write output to
    if(global_config.has("log_file")) {
        // NOTE: this stream should be available for the duration of the logging
        log_file_.open(global_config.getPath("log_file"), std::ios_base::out | std::ios_base::trunc);
        LOG(TRACE) << "Added log stream to file " << global_config.getPath("log_file");
        Log::addStream(log_file_);
    }

    // Wait for the first detailed messages until level and format are properly set
    LOG(TRACE) << "Global log level is set to " << log_level_string;
    LOG(TRACE) << "Global log format is set to " << log_format_string;
}

/**
 * Performs the initialization, including:
 * - Initialize the random seeder
 * - Determine and create the output directory
 * - Include all the defined units
 * - Load the modules from the configuration
 */
void Allpix::load() {
    LOG(TRACE) << "Loading Allpix";

    // Fetch the global configuration
    Configuration& global_config = conf_mgr_->getGlobalConfiguration();

    // Put welcome message and set version
    LOG(STATUS) << "Welcome to Allpix^2 " << ALLPIX_PROJECT_VERSION;
    global_config.set<std::string>("version", ALLPIX_PROJECT_VERSION);

    // Initialize the random seeders, one for modules, one for core components
    std::mt19937_64 seeder_modules;
    std::mt19937_64 seeder_core;

    uint64_t seed = 0;
    if(global_config.has("random_seed")) {
        // Use provided random seed
        seed = global_config.get<uint64_t>("random_seed");
        seeder_modules.seed(seed);
        LOG(STATUS) << "Initialized PRNG with configured seed " << seed;
    } else {
        // Compute random entropy seed
        // Use the clock
        auto clock_seed = static_cast<uint64_t>(std::chrono::high_resolution_clock::now().time_since_epoch().count());
        // Use memory location local variable
        auto mem_seed = reinterpret_cast<uint64_t>(&seed); // NOLINT
        // Use thread id
        std::hash<std::thread::id> thrd_hasher;
        auto thread_seed = thrd_hasher(std::this_thread::get_id());
        seed = (clock_seed ^ mem_seed ^ thread_seed);
        seeder_modules.seed(seed);
        LOG(STATUS) << "Initialized PRNG with system entropy seed " << seed;
        global_config.set<uint64_t>("random_seed", seed);
    }

    if(global_config.has("random_seed_core")) {
        // Use provided random seed
        seed = global_config.get<uint64_t>("random_seed_core");
        seeder_core.seed(seed);
        LOG(STATUS) << "Initialized core PRNG with configured seed " << seed;
    } else {
        // Use module seeder + 1
        seeder_core.seed(seed + 1);
        global_config.set<uint64_t>("random_seed_core", seed + 1);
    }

    // Initialize ROOT random generator
    gRandom->SetSeed(seeder_modules());

    // Get output directory
    std::string directory = gSystem->pwd();
    directory += "/output";
    if(global_config.has("output_directory")) {
        // Use config specified one if available
        directory = global_config.getPath("output_directory");
    }

    // Use existing output directory if it exists
    bool create_output_dir = true;
    if(allpix::path_is_directory(directory)) {
        if(global_config.get<bool>("purge_output_directory", false)) {
            LOG(DEBUG) << "Deleting previous output directory " << directory;
            allpix::remove_path(directory);
        } else {
            LOG(DEBUG) << "Output directory " << directory << " already exists";
            create_output_dir = false;
        }
    }
    // Create the output directory
    try {
        if(create_output_dir) {
            LOG(DEBUG) << "Creating output directory " << directory;
            allpix::create_directories(directory);
        }
        // Change to the new/existing output directory
        gSystem->ChangeDirectory(directory.c_str());
    } catch(std::invalid_argument& e) {
        LOG(ERROR) << "Cannot create output directory " << directory << ": " << e.what()
                   << ". Using current directory instead.";
    }

    // Enable relevant multithreading if needed (disabled by default)
    if(global_config.get<bool>("experimental_multithreading", false)) {
        // Enable thread safety for ROOT
        ROOT::EnableThreadSafety();
    }

    // Set the default units to use
    add_units();

    // Set the ROOT style
    set_style();

    // Load the geometry
    geo_mgr_->load(conf_mgr_.get(), seeder_core);

    // Load the modules from the configuration
    if(!terminate_) {
        mod_mgr_->load(msg_.get(), conf_mgr_.get(), geo_mgr_.get(), seeder_modules);
    } else {
        LOG(INFO) << "Skip loading modules because termination is requested";
    }
}

/**
 * Runs the Module::init() method linearly for every module
 */
void Allpix::init() {
    if(!terminate_) {
        LOG(TRACE) << "Initializing Allpix";
        mod_mgr_->init();
    } else {
        LOG(INFO) << "Skip initializing modules because termination is requested";
    }
}
/**
 * Runs every modules Module::run() method linearly for the number of events
 */
void Allpix::run() {
    if(!terminate_) {
        LOG(TRACE) << "Running Allpix";
        mod_mgr_->run();

        // Set that we have run and want to finalize as well
        has_run_ = true;
    } else {
        LOG(INFO) << "Skip running modules because termination is requested";
    }
}
/**
 * Runs all modules Module::finalize() method linearly for every module
 */
void Allpix::finalize() {
    if(has_run_) {
        LOG(TRACE) << "Finalizing Allpix";
        mod_mgr_->finalize();
    } else {
        LOG(INFO) << "Skip finalizing modules because no module did run";
    }
}

/*
 * This function can be called safely from any signal handler. Time between the request to terminate
 * and the actual termination is not always negigible.
 */
void Allpix::terminate() {
    terminate_ = true;
    mod_mgr_->terminate();
}

void Allpix::add_units() {
    LOG(TRACE) << "Adding physical units";

    // LENGTH
    Units::add("nm", 1e-6);
    Units::add("um", 1e-3);
    Units::add("mm", 1);
    Units::add("cm", 1e1);
    Units::add("dm", 1e2);
    Units::add("m", 1e3);
    Units::add("km", 1e6);

    // TIME
    Units::add("ps", 1e-3);
    Units::add("ns", 1);
    Units::add("us", 1e3);
    Units::add("ms", 1e6);
    Units::add("s", 1e9);

    // TEMPERATURE
    Units::add("K", 1);

    // ENERGY
    Units::add("eV", 1e-6);
    Units::add("keV", 1e-3);
    Units::add("MeV", 1);
    Units::add("GeV", 1e3);

    // CHARGE
    Units::add("e", 1);
    Units::add("ke", 1e3);
    Units::add("C", 1.6021766208e-19);

    // VOLTAGE
    // NOTE: fixed by above
    Units::add("V", 1e-6);
    Units::add("kV", 1e-3);

    // MAGNETIC FIELD
    Units::add("T", 1e-3);
    Units::add("mT", 1e-6);

    // ANGLES
    // NOTE: these are fake units
    Units::add("deg", 0.01745329252);
    Units::add("rad", 1);
    Units::add("mrad", 1e-3);
}

/**
 * This style is inspired by the CLICdp plot style
 */
void Allpix::set_style() {
    LOG(TRACE) << "Setting ROOT plotting style";

    // use plain style as base
    gROOT->SetStyle("Plain");
    TStyle* style = gROOT->GetStyle("Plain");

    // Prefer OpenGL if available
    style->SetCanvasPreferGL(kTRUE);

    // Set backgrounds
    style->SetCanvasColor(kWhite);
    style->SetFrameFillColor(kWhite);
    style->SetStatColor(kWhite);
    style->SetPadColor(kWhite);
    style->SetFillColor(10);
    style->SetTitleFillColor(kWhite);

    // SetPaperSize wants width & height in cm: A4 is 20,26
    style->SetPaperSize(20, 26);
    // No yellow border around histogram
    style->SetDrawBorder(0);
    // Remove border of canvas*
    style->SetCanvasBorderMode(0);
    // Remove border of pads
    style->SetPadBorderMode(0);
    style->SetFrameBorderMode(0);
    style->SetLegendBorderSize(0);

    // Default text size
    style->SetTextSize(0.04f);
    style->SetTitleSize(0.04f, "xyz");
    style->SetLabelSize(0.03f, "xyz");

    // Title offset: distance between given text and axis
    style->SetLabelOffset(0.01f, "xyz");
    style->SetTitleOffset(1.6f, "yz");
    style->SetTitleOffset(1.4f, "x");

    // Set font settings
    short font = 42; // Use a clear font
    style->SetTitleFont(font);
    style->SetTitleFontSize(0.06f);
    style->SetStatFont(font);
    style->SetStatFontSize(0.07f);
    style->SetTextFont(font);
    style->SetLabelFont(font, "xyz");
    style->SetTitleFont(font, "xyz");
    style->SetTitleBorderSize(0);
    style->SetStatBorderSize(1);

    // Set style for markers
    style->SetMarkerStyle(1);
    style->SetLineWidth(2);
    style->SetMarkerSize(1.2f);

    // Set palette in 2d histogram to nice and colorful one
    style->SetPalette(1, nullptr);

    // Disable title by default for histograms
    style->SetOptTitle(0);

    // Set statistics
    style->SetOptStat(0);
    style->SetOptFit(0);

    // Number of decimals used for errors
    style->SetEndErrorSize(5);

    // Set line width to 2 by default so that histograms are visible when printed small
    // Idea: emphasize the data, not the frame around
    style->SetHistLineWidth(2);
    style->SetFrameLineWidth(2);
    style->SetFuncWidth(2);
    style->SetHistLineColor(kBlack);
    style->SetFuncColor(kRed);
    style->SetLabelColor(kBlack, "xyz");

    // Set the margins
    style->SetPadBottomMargin(0.18f);
    style->SetPadTopMargin(0.08f);
    style->SetPadRightMargin(0.18f);
    style->SetPadLeftMargin(0.17f);

    // Set the default number of divisions to show
    style->SetNdivisions(506, "xy");

    // Turn off xy grids
    style->SetPadGridX(false);
    style->SetPadGridY(false);

    // Set the tick mark style
    style->SetPadTickX(1);
    style->SetPadTickY(1);
    style->SetCanvasDefW(800);
    style->SetCanvasDefH(700);

    // Force the style
    gROOT->ForceStyle();
}
