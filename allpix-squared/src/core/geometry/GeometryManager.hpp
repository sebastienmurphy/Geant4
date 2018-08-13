/**
 * @file
 * @brief Keeping track of the global geometry of independent detectors
 * @copyright Copyright (c) 2017 CERN and the Allpix Squared authors.
 * This software is distributed under the terms of the MIT License, copied verbatim in the file "LICENSE.md".
 * In applying this license, CERN does not waive the privileges and immunities granted to it by virtue of its status as an
 * Intergovernmental Organization or submit itself to any jurisdiction.
 */

#ifndef ALLPIX_GEOMETRY_MANAGER_H
#define ALLPIX_GEOMETRY_MANAGER_H

#include <memory>
#include <random>
#include <set>
#include <string>
#include <vector>

#include <Math/Vector3D.h>

#include "Detector.hpp"
#include "DetectorModel.hpp"
#include "core/config/ConfigManager.hpp"
#include "core/config/ConfigReader.hpp"

namespace allpix {

    /**
     * @brief Type of the magnetic field
     */
    enum class MagneticFieldType {
        NONE = 0, ///< No magnetic field is simulated
        CONSTANT, ///< Constant magnetic field (mostly for testing)
        CUSTOM,   ///< Custom magnetic field function
    };

    using MagneticFieldFunction = std::function<ROOT::Math::XYZVector(const ROOT::Math::XYZPoint&)>;

    /**
     * @ingroup Managers
     * @brief Manager responsible for the global geometry
     *
     * The framework defines the geometry as a set of independent instances of a \ref Detector "detector". Each independent
     * detector has a \ref DetectorModel "detector model". Detector and models can be added before the manager closes. The
     * manager closes as soon as \ref GeometryManager::getDetectors() or a similar method is called. Afterwards the geometry
     * is constant and cannot be changed anymore.
     */
    class GeometryManager {
    public:
        /**
         * @brief Construct the geometry manager
         */
        GeometryManager();
        /**
         * @brief Use default destructor
         */
        ~GeometryManager() = default;

        /// @{
        /**
         * @brief Copying the manager is not allowed
         */
        GeometryManager(const GeometryManager&) = delete;
        GeometryManager& operator=(const GeometryManager&) = delete;
        /// @}

        /// @{
        /**
         * @brief Disallow move because of atomic boolean
         */
        GeometryManager(GeometryManager&&) = delete;
        GeometryManager& operator=(GeometryManager&&) = delete;
        /// @}

        /**
         * @brief Loads the geometry from the global configuration
         * @param global_config Configuration manager of the framework
         * @param seeder PRNG to use for generating random misalignments
         * @warning Has to be the first function called after the constructor
         */
        void load(ConfigManager* conf_manager, std::mt19937_64& seeder);

        /**
         * @brief Returns the list of standard paths where models should be searched in
         * @return List of absolute paths to file or directories that contain models
         */
        std::vector<std::string> getModelsPath();

        /**
         * @brief Return the minimum coordinate of all detectors in the geometry
         * @return Minimum coordinate in global frame
         * @note Closes the geometry if it has not been closed yet
         */
        ROOT::Math::XYZPoint getMinimumCoordinate();
        /**
         * @brief Return the maximum coordinate of all detectors in the geometry
         * @return Maximum coordinate in global frame
         * @note Closes the geometry if it has not been closed yet
         */
        ROOT::Math::XYZPoint getMaximumCoordinate();

        /**
         * @brief Add a point to the geometry (used for the \ref GeometryManager::getMinimumCoordinate "minimum"
         *        and \ref GeometryManager::getMaximumCoordinate "maximum" coordinate)
         * @param point Point that should be included in the geometry
         * @warning Can only be used as long as the geometry is still open
         */
        // TODO: Add more details to the point and interaction with external geometry
        void addPoint(ROOT::Math::XYZPoint point);

        /**
         * @brief Return if the model is currently in the list of required models
         * @param name Type of the model to search for
         * @return True if at least one model still needs this type, false otherwise
         */
        bool needsModel(const std::string& name) const;

        /**
         * @brief Add a detector model and apply it to the registered detectors
         * @param model Pointer to the detector model
         * @warning Can only be used as long as the geometry is still open
         */
        void addModel(std::shared_ptr<DetectorModel> model);

        /**
         * @brief Check if a detector model exists
         * @param name Model type to search for
         * @return True if the model is part of the geometry, false otherwise
         */
        bool hasModel(const std::string& name) const;

        /**
         * @brief Get all added detector models
         * @returns List of all models
         * @warning The models returned might not be used in the geometry
         */
        std::vector<std::shared_ptr<DetectorModel>> getModels() const;

        /**
         * @brief Get a detector model by its name
         * @param name Name of the model to search for
         * @returns Return the model if it exists (an error is raised if it does not)
         * @warning The method \ref GeometryManager::hasModel should be used to check for existence
         */
        std::shared_ptr<DetectorModel> getModel(const std::string& name) const;

        /**
         * @brief Add a detector to the global geometry
         * @param detector Pointer to the detector to add to the geometry
         * @warning Can only be used as long as the geometry is still open
         */
        void addDetector(std::shared_ptr<Detector> detector);

        /**
         * @brief Check if a detector exists
         * @param name Model type to search for
         * @return True if the detector is part of the geometry, false otherwise
         */
        bool hasDetector(const std::string& name) const;

        /**
         * @brief Get all detectors in the geometry
         * @returns List of all detectors
         * @note Closes the geometry if it not has been closed yet
         */
        std::vector<std::shared_ptr<Detector>> getDetectors();

        /**
         * @brief Get a detector by its name
         * @param name Name of the detector to search for
         * @returns Return the detector if it exists (an error is raised if it does not)
         * @warning The method \ref GeometryManager::hasDetector should be used to check for existence
         * @note Closes the geometry if it has not been closed yet
         */
        std::shared_ptr<Detector> getDetector(const std::string& name);

        /**
         * @brief Get all detectors in the geometry of a particular model type
         * @param type Type of the detector model to search for
         * @returns List of all detectors of a particular type (an error is raised if none exist)
         * @warning This method should not be used to check if an instantiation of a model exists
         * @note Closes the geometry if it has not been closed yet
         */
        std::vector<std::shared_ptr<Detector>> getDetectorsByType(const std::string& type);

        /**
         * @brief Set the magnetic field in the volume
         * @param function Function used to retrieve the magnetic field
         * @param type Type of the magnetic field function used
         */
        void setMagneticFieldFunction(MagneticFieldFunction function, MagneticFieldType type = MagneticFieldType::CUSTOM);

        /**
         * @brief Returns if a magnetic field is present
         * @return True if the a magnetic field is present in the volume, false otherwise
         */
        bool hasMagneticField() const;
        /**
         * @brief Get the magnetic field at a global position
         * @param pos Position in the global frame
         * @return Vector of the field at the queried point
         */
        ROOT::Math::XYZVector getMagneticField(const ROOT::Math::XYZPoint& position) const;

        MagneticFieldType getMagneticFieldType() const;

    private:
        /**
         * @brief Load all standard framework models (automatically done when the geometry is closed)
         */
        void load_models();

        /**
         * @brief Parse a configuration object and instantiate the corresponding model
         * @param name Name of the model
         * @param reader Reader with the configuration for this model
         * @return Detector model instantiated from the configuration
         */
        std::shared_ptr<DetectorModel> parse_config(const std::string& name, const ConfigReader&);

        /**
         * @brief Close the geometry after which changes to the detector geometry cannot be made anymore
         */
        void close_geometry();
        std::atomic_bool closed_;

        std::vector<ROOT::Math::XYZPoint> points_;

        std::vector<std::string> model_paths_;
        std::vector<std::shared_ptr<DetectorModel>> models_;
        std::set<std::string> model_names_;

        std::map<std::string, std::vector<std::pair<Configuration, Detector*>>> nonresolved_models_;
        std::vector<std::shared_ptr<Detector>> detectors_;
        std::set<std::string> detector_names_;

        MagneticFieldType magnetic_field_type_{MagneticFieldType::NONE};
        MagneticFieldFunction magnetic_field_function_;
    };
} // namespace allpix

#endif /* ALLPIX_GEOMETRY_MANAGER_H */
