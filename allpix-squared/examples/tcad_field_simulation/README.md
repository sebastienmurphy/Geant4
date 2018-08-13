# TCAD Field Simulation Example

This example follows the "fast simulation" example but now replaces the simplified linear electric field with an actual TCAD-simulated electric field. For this reason, the `ProjectionPropagation` module is replaced by `GenericPropagation` as the former only allows for linear fields owing to the simplifications made in the drift calculations.

The setup is unchanged compared to the "fast simulation example" and consists of six Timepix-type detectors with a sensor thickness of 300um arranged in a telescope-like structure, inclined planes for charge sharing, and a defined alignment precision. The charge deposition is also performed by Geant4 with a stepping length of 10um.

Because the charge carrier propagation using the `GenericPropagation` module contributes the lion's share of the total simulation time, the simulation can profit from multi-threading, i.e. running the propagation for different detectors in parallel on different threads. An exemplary run on an Intel i7 machine with four cores sees a speedup of a factor two. It should be noted that currently multi-threading is still considered experimental.

Again, `DepositedCharge` and `PropagatedCharge` objects are not written to the output file as information about these objects cannot be accessed in data and thus are rarely used in the final analysis.
