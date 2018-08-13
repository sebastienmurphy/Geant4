/**
 * @file
 * @brief Definition of deposited charge object
 * @copyright Copyright (c) 2017 CERN and the Allpix Squared authors.
 * This software is distributed under the terms of the MIT License, copied verbatim in the file "LICENSE.md".
 * In applying this license, CERN does not waive the privileges and immunities granted to it by virtue of its status as an
 * Intergovernmental Organization or submit itself to any jurisdiction.
 */

#ifndef ALLPIX_DEPOSITED_CHARGE_H
#define ALLPIX_DEPOSITED_CHARGE_H

#include <TRef.h>

#include "MCParticle.hpp"
#include "SensorCharge.hpp"

namespace allpix {
    /**
     * @ingroup Objects
     * @brief Charge deposit in sensor of detector
     */
    class DepositedCharge : public SensorCharge {
    public:
        /**
         * @brief Construct a charge deposit
         * @param local_position Local position of the deposit in the sensor
         * @param global_position Global position of the propagated set of charges in the sensor
         * @param type Type of the carrier
         * @param charge Total charge of the deposit
         * @param event_time Time of deposition after event start
         * @param mc_particle Optional pointer to related MC particle
         */
        DepositedCharge(ROOT::Math::XYZPoint local_position,
                        ROOT::Math::XYZPoint global_position,
                        CarrierType type,
                        unsigned int charge,
                        double event_time,
                        const MCParticle* mc_particle = nullptr);

        /**
         * @brief Get related Monte-Carlo particle
         * @return Pointer to possible Monte-Carlo particle
         */
        const MCParticle* getMCParticle() const;

        /**
         * @brief Set the Monte-Carlo particle
         * @param mc_particle The Monte-Carlo particle
         * @warning Special method because MCParticle is only known after deposit creation, should not be replaced later.
         */
        void setMCParticle(const MCParticle* mc_particle);

        /**
         * @brief ROOT class definition
         */
        ClassDefOverride(DepositedCharge, 2);
        /**
         * @brief Default constructor for ROOT I/O
         */
        DepositedCharge() = default;

    private:
        TRef mc_particle_;
    };

    /**
     * @brief Typedef for message carrying deposits
     */
    using DepositedChargeMessage = Message<DepositedCharge>;
} // namespace allpix

#endif
