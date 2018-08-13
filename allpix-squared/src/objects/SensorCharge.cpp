/**
 * @file
 * @brief Definition of object for charges in sensor
 * @copyright Copyright (c) 2017 CERN and the Allpix Squared authors.
 * This software is distributed under the terms of the MIT License, copied verbatim in the file "LICENSE.md".
 * In applying this license, CERN does not waive the privileges and immunities granted to it by virtue of its status as an
 * Intergovernmental Organization or submit itself to any jurisdiction.
 */

#include "SensorCharge.hpp"

using namespace allpix;

SensorCharge::SensorCharge(ROOT::Math::XYZPoint local_position,
                           ROOT::Math::XYZPoint global_position,
                           CarrierType type,
                           unsigned int charge,
                           double event_time)
    : local_position_(std::move(local_position)), global_position_(std::move(global_position)), type_(type), charge_(charge),
      event_time_(event_time) {}

ROOT::Math::XYZPoint SensorCharge::getLocalPosition() const {
    return local_position_;
}

CarrierType SensorCharge::getType() const {
    return type_;
}

unsigned int SensorCharge::getCharge() const {
    return charge_;
}

double SensorCharge::getEventTime() const {
    return event_time_;
}
