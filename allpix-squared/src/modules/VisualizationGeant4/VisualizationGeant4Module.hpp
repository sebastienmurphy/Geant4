/**
 * @file
 * @brief Definition of Geant4 geometry visualization module
 * @copyright Copyright (c) 2017 CERN and the Allpix Squared authors.
 * This software is distributed under the terms of the MIT License, copied verbatim in the file "LICENSE.md".
 * In applying this license, CERN does not waive the privileges and immunities granted to it by virtue of its status as an
 * Intergovernmental Organization or submit itself to any jurisdiction.
 */

#ifndef ALLPIX_TEST_VISUALIZATION_MODULE_H
#define ALLPIX_TEST_VISUALIZATION_MODULE_H

#include <memory>
#include <string>

#include "core/config/Configuration.hpp"
#include "core/geometry/GeometryManager.hpp"
#include "core/messenger/Messenger.hpp"
#include "core/module/Module.hpp"

class G4UIsession;
class G4VisManager;

namespace allpix {
    /**
     * @ingroup Modules
     * @brief Module that shows visualization of constructed Geant4 geometry
     *
     * Displays the geometry constructed in \ref GeometryBuilderGeant4Module. Allows passing a variety of options to
     * configure both the visualization viewer as well as the display of the various detector components and the beam.
     */
    class VisualizationGeant4Module : public Module {
    public:
        /**
         * @brief Constructor for this unique module
         * @param config Configuration object for this module as retrieved from the steering file
         * @param messenger Pointer to the messenger object to allow binding to messages on the bus
         * @param geo_manager Pointer to the geometry manager, containing the detectors
         */
        VisualizationGeant4Module(Configuration& config, Messenger* messenger, GeometryManager* geo_manager);
        /**
         * @brief Destructor applies a workaround for some visualizaton drivers to prevent display during exception handling
         */
        ~VisualizationGeant4Module() override;

        /**
         * @brief Initializes visualization and apply configuration parameters
         */
        void init() override;

        /**
         * @brief Show visualization updates if not accumulating data
         */
        void run(unsigned int) override;

        /**
         * @brief Possibly start GUI or terminal and display the visualization
         */
        void finalize() override;

    private:
        GeometryManager* geo_manager_;

        /**
         * @brief Set the visualization settings from the configuration
         */
        void set_visualization_settings();
        /**
         * @brief Set the default visualization attributes of the different components
         */
        void set_visualization_attributes();
        /**
         * @brief Add visualization volumes, added at the end to prevent cluttering the geometry during deposition
         */
        void add_visualization_volumes();

        // Check if we did run succesfully, used to apply workaround in destructor if needed
        bool has_run_;

        // Own the Geant4 visualization manager
        std::unique_ptr<G4VisManager> vis_manager_g4_;

        // Hold information about the session
        std::string session_param_;
        char* session_param_ptr_;
        std::unique_ptr<G4UIsession> gui_session_;
    };
} // namespace allpix

#endif /* ALLPIX_TEST_VISUALIZATION_MODULE_H */
