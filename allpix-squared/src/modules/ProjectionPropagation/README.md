# ProjectionPropagation
**Maintainer**: Simon Spannagel (<simon.spannagel@cern.ch>), Paul Schuetze (<paul.schuetze@desy.de>)  
**Status**: Functional   
**Input**: DepositedCharge   
**Output**: PropagatedCharge   

### Description
The module projects the deposited electrons (holes are ignored) to the sensor surface and applies a randomized diffusion. It can be used as a replacement for a charge propagation (e.g. the GenericPropagation module) for saving computing time at the cost of precision.

The diffusion of the charge carriers is realized by placing sets of a configurable number of electrons in positions drawn as a random number from a two-dimensional gaussian distribution around the projected position at the sensor surface. The diffusion width is based on an approximation of the drift time, using an analytical approximation for the integral of the mobility in a linear electric field. The integral is calculated as follows, with $` \mu_0 = V_m/E_c `$:

$` t = \int\frac 1v ds = \int \frac{1}{\mu(s)E(s)} ds = \int \frac{\left(1+\left(\frac{E(S)}{E_c}\right)^\beta\right)^{1/\beta}}{\mu_0E(s)} ds `$

Here, $` \beta `$ is set to 1, inducing systematic errors less than 10%, depending on the sensor temperature configured. With the linear approximation to the electric field as $`E(s) = ks+E_0`$ it is

$` t = \frac {1}{\mu_0}\int\left( \frac{1}{E(s)} + \frac{1}{E_c} \right) ds = \frac {1}{\mu_0}\int\left( \frac{1}{ks+E_0} + \frac{1}{E_c} \right) ds = \frac {1}{\mu_0}\left[ \frac{\ln(ks+E_0)}{k} + \frac{s}{E_c} \right]^b _a = \frac{1}{\mu_0} \left[ \frac{\ln(E(s))}{k} + \frac{s}{E_c} \right]^b _a`$.

Since the approximation of the drift time assumes a linear electric field, this module cannot be used with any other electric field configuration.

Lorentz drift in a magnetic field is not supported. Hence, in order to use this module with a magnetic field present, the parameter `ignore_magnetic_field` can be set.

### Parameters
* `temperature`: Temperature in the sensitive device, used to estimate the diffusion constant and therefore the width of the diffusion distribution.
* `charge_per_step`: Maximum number of electrons placed for which the randomized diffusion is calculated together, i.e. they are placed at the same position. Defaults to 10.
* `propagate_holes`: If set to *true*, holes are propagated instead of electrons. Defaults to *false*. Only one carrier type can be selected since all charges are propagated towards the implants.
* `ignore_magnetic_field`: Enables the usage of this module with a magnetic field present, resulting in an unphysical propagation w/o Lorentz drift. Defaults to false.
* `output_plots`: Determines if plots should be generated.


### Usage
```
[ProjectionPropagation]
temperature = 293K
charge_per_step = 10
output_plots = 1
```
