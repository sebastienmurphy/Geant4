/**
 * @file
 * @brief Base for the module implementation
 * @copyright Copyright (c) 2017 CERN and the Allpix Squared authors.
 * This software is distributed under the terms of the MIT License, copied verbatim in the file "LICENSE.md".
 * In applying this license, CERN does not waive the privileges and immunities granted to it by virtue of its status as an
 * Intergovernmental Organization or submit itself to any jurisdiction.
 */

#ifndef ALLPIX_MODULE_H
#define ALLPIX_MODULE_H

#include <memory>
#include <random>
#include <string>
#include <vector>

#include <TDirectory.h>

#include "ModuleIdentifier.hpp"
#include "ThreadPool.hpp"
#include "core/config/ConfigManager.hpp"
#include "core/config/Configuration.hpp"
#include "core/geometry/Detector.hpp"
#include "core/messenger/delegates.h"
#include "exceptions.h"

namespace allpix {
    class Messenger;
    /**
     * @defgroup Modules Modules
     * @brief Collection of modules included in the framework
     */
    /**
     * @brief Base class for all modules
     *
     * The module base is the core of the modular framework. All modules should be descendants of this class. The base class
     * defines the methods the children can implement:
     * - Module::init(): for initializing the module at the start
     * - Module::run(unsigned int): for doing the job of every module for every event
     * - Module::finalize(): for finalizing the module at the end
     *
     * The module class also provides a few utility methods and stores internal data of instantations. The internal data is
     * used by the ModuleManager and the Messenger to work.
     */
    class Module {
        friend class ModuleManager;
        friend class Messenger;

    public:
        /**
         * @brief Base constructor for unique modules
         * @param config Configuration for this module
         */
        explicit Module(Configuration& config);
        /**
         * @brief Base constructor for detector modules
         * @param config Configuration for this module
         * @param detector Detector bound to this module
         * @warning Detector modules should not forget to forward their detector to the base constructor. An
         *          \ref InvalidModuleStateException will be raised if the module failed to so.
         */
        explicit Module(Configuration& config, std::shared_ptr<Detector> detector);
        /**
         * @brief Essential virtual destructor.
         *
         * Also removes all delegates linked to this module
         */
        virtual ~Module();

        /// @{
        /**
         * @brief Copying a module is not allowed
         */
        Module(const Module&) = delete;
        Module& operator=(const Module&) = delete;
        /// @}

        /// @{
        /**
         * @brief Disallow move behaviour (not possible with references)
         */
        Module(Module&&) noexcept = delete;
        Module& operator=(Module&&) noexcept = delete;
        /// @}

        /**
         * @brief Get the detector linked to this module
         * @return Linked detector or a null pointer if this is an unique module
         */
        std::shared_ptr<Detector> getDetector() const;

        /**
         * @brief Get the unique name of this module
         * @return Unique name
         * @note Can be used to interact with ROOT objects that require an unique name
         */
        std::string getUniqueName() const;

        /**
         * @brief Create and return an absolute path to be used for output from a relative path
         * @param path Relative path to add after the main output directory
         * @param global True if the global output directory should be used instead of the module-specific version
         * @return Canonical path to an output file
         */
        std::string createOutputFile(const std::string& path, bool global = false);

        /**
         * @brief Get seed to initialize random generators
         * @warning This should be the only method used by modules to seed random numbers to allow reproducing results
         */
        uint64_t getRandomSeed();

        /**
         * @brief Get thread pool to submit asynchronous tasks to
         */
        ThreadPool& getThreadPool();

        /**
         * @brief Get ROOT directory which should be used to output histograms et cetera
         * @return ROOT directory for storage
         */
        TDirectory* getROOTDirectory() const;

        /**
         * @brief Get the config manager object to allow to read the global and other module configurations
         * @return Pointer to the config manager
         */
        ConfigManager* getConfigManager();

        /**
         * @brief Returns if parallelization of this module is enabled
         * @return True if parallelization is enabled, false otherwise (the default)
         */
        bool canParallelize();

        /**
         * @brief Initialize the module before the event sequence
         *
         * Does nothing if not overloaded.
         */
        virtual void init() {}

        /**
         * @brief Execute the function of the module for every event
         * @param event_num Number of the event in the event sequence (starts at 1)
         *
         * Does nothing if not overloaded.
         */
        // TODO [doc] Start the sequence at 0 instead of 1?
        virtual void run(unsigned int event_num) { (void)event_num; }
        //
        /**
         * @brief Finalize the module after the event sequence
         * @note Useful to have before destruction to allow for raising exceptions
         *
         * Does nothing if not overloaded.
         */
        virtual void finalize() {}

    protected:
        /**
         * @brief Enable parallelization for this module
         */
        void enable_parallelization();

        /**
         * @brief Get the module configuration for internal use
         * @return Configuration of the module
         */
        Configuration& get_configuration();
        Configuration& config_;

    private:
        /**
         * @brief Set the module identifier for internal use
         * @param identifier Identifier of the instantiation
         */
        void set_identifier(ModuleIdentifier identifier);
        /**
         * @brief Get the module identifier for internal use
         * @return Identifier of the instantiation
         */
        ModuleIdentifier get_identifier() const;
        ModuleIdentifier identifier_;

        /**
         * @brief Set the thread pool for parallel execution
         * @return Thread pool (or null pointer to disable it)
         */
        void set_thread_pool(std::shared_ptr<ThreadPool> thread_pool);
        std::shared_ptr<ThreadPool> thread_pool_;

        /**
         * @brief Set the output ROOT directory for this module
         * @param directory ROOT directory for storage
         */
        void set_ROOT_directory(TDirectory* directory);
        TDirectory* directory_{nullptr};

        /**
         * @brief Set the link to the config manager
         * @param conf_manager ConfigManager holding all relevant configurations
         */
        void set_config_manager(ConfigManager* config);
        ConfigManager* conf_manager_{nullptr};

        /**
         * @brief Add a messenger delegate to this instantiation
         * @param messenger Pointer to the messenger responsible for the delegate
         * @param delegate Delegate object
         */
        void add_delegate(Messenger* messenger, BaseDelegate* delegate);
        /**
         * @brief Resets messenger delegates after every event
         */
        void reset_delegates();
        /**
         * @brief Check if all delegates are satisfied
         */
        bool check_delegates();
        std::vector<std::pair<Messenger*, BaseDelegate*>> delegates_;

        bool initialized_random_generator_{false};
        std::mt19937_64 random_generator_;

        std::shared_ptr<Detector> detector_;

        bool parallelize_{false};
    };

} // namespace allpix

#endif /* ALLPIX_MODULE_H */
