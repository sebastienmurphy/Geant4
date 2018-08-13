/**
 * @file
 * @brief Implementation of option parser
 * @copyright Copyright (c) 2017 CERN and the Allpix Squared authors.
 * This software is distributed under the terms of the MIT License, copied verbatim in the file "LICENSE.md".
 * In applying this license, CERN does not waive the privileges and immunities granted to it by virtue of its status as an
 * Intergovernmental Organization or submit itself to any jurisdiction.
 */

#include "OptionParser.hpp"

#include "ConfigReader.hpp"

using namespace allpix;

/**
 * Option is split in a key / value pair, an error is thrown if that is not possible. When the key contains at least one dot
 * it is interpreted as a relative configuration with the module identified by the first dot. In that case the option is
 * applied during module loading when either the unique or the configuration name match. Otherwise the key is interpreted as
 * global key and is added to the global header.
 */
void OptionParser::parseOption(std::string line) {
    line = allpix::trim(line);
    auto key_value = ConfigReader::parseKeyValue(line);
    auto key = key_value.first;
    auto value = key_value.second;

    auto dot_pos = key.find('.');
    if(dot_pos == std::string::npos) {
        // Global option, add to the global options list
        global_options_.push_back(std::make_pair(key, value));
    } else {
        // Other identifier bound option is passed
        auto identifier = key.substr(0, dot_pos);
        key = key.substr(dot_pos + 1);
        identifier_options_[identifier].push_back(std::make_pair(key, value));
    }
}

bool OptionParser::applyGlobalOptions(Configuration& config) {
    for(auto& key_value : global_options_) {
        config.setText(key_value.first, key_value.second);
    }
    return !global_options_.empty();
}

bool OptionParser::applyOptions(const std::string& identifier, Configuration& config) {
    if(identifier_options_.find(identifier) == identifier_options_.end()) {
        return false;
    }

    for(auto& key_value : identifier_options_[identifier]) {
        config.setText(key_value.first, key_value.second);
    }
    return true;
}
