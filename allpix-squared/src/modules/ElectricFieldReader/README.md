# ElectricFieldReader
**Maintainer**: Koen Wolters (<koen.wolters@cern.ch>)   
**Status**: Functional

### Description
Adds an electric field to the detector from one of the supported sources. By default, detectors do not have an electric field applied.

The reader provides the following models for electric fields:

* For *constant* electric fields it add a constant electric field in the z-direction towards the pixel implants. This is not very physical but might aid in developing and testing new charge propagation algorithms.
* For *linear* electric fields, the field has a constant slope determined by the bias voltage and the depletion voltage. The sensor is always depleted from the implant side, the direction of the electric field depends on the sign of the bias voltage (with negative bias voltage the electric field vector points towards the backplane and vice versa). The electric field is calculated using the formula $`E(z) = \frac{U_{bias} - U_{depl}}{d} + 2 \frac{U_{depl}}{d}\left( 1- \frac{z}{d} \right)`$, where d is the thickness of the sensor, and $`U_{depl}`$, $`U_{bias}`$ are the depletion and bias voltages, respectively.
* For electric fields in the *INIT* format it parses a file containing an electric field map in the INIT format also used by the PixelAV software [@pixelav]. An example of a electric field in this format can be found in *etc/example_electric_field.init* in the repository. An explanation of the format is available in the source code of this module, a converter tool for electric fields from adaptive TCAD meshes is provided with the framework.

The `depletion_depth` parameter can be used to control the thickness of the depleted region inside the sensor.
This can be useful for devices such as HV-CMOS sensors, where the typical depletion depth but not necessarily the full depletion voltage are know.
It should be noted that `depletion_voltage` and `depletion_depth` are mutually exclusive parameters and only one at a time can be specified.

Furthermore the module can produce a plot the electric field profile on an projection axis normal to the x,y or z-axis at a particular plane in the sensor.

### Parameters
* `model` : Type of the electric field model, either **linear**, **constant** or **init**.
* `bias_voltage` : Voltage over the whole sensor thickness. Used to calculate the electric field if the *model* parameter is equal to **constant** or **linear**.
* `depletion_voltage` : Indicates the voltage at which the sensor is fully depleted. Used to calculate the electric field if the *model* parameter is equal to **linear**.
* `depletion_depth` : Thickness of the depleted region. Used for all electric fields. When using the depletion depth in **linear** mode, no depletion voltage can be specified.
* `file_name` : Location of file containing the electric field in the INIT format. Only used if the *model* parameter has the value **init**.
* `output_plots` : Determines if output plots should be generated. Disabled by default.
* `output_plots_steps` : Number of bins in both x- and y-direction in the 2D histogram used to plot the electric field in the detectors. Only used if `output_plots` is enabled.
* `output_plots_project` : Axis to project the 3D electric field on to create the 2D histogram. Either **x**, **y** or **z**. Only used if `output_plots` is enabled.
* `output_plots_projection_percentage` : Percentage on the projection axis to plot the electric field profile. For example if *output_plots_project* is **x** and this parameter is set to 0.5, the profile is plotted in the Y,Z-plane at the X-coordinate in the middle of the sensor. Default is 0.5.
* `output_plots_single_pixel`: Determines if the whole sensor has to be plotted or only a single pixel. Defaults to true (plotting a single pixel).

### Usage
An example to add a linear field with a bias voltage of -150 V and a full depletion voltage of -50 V to all the detectors, apart from the detector named 'dut' where a specific INIT field is added, is given below

```ini
[ElectricFieldReader]
model = "linear"
bias_voltage = -150V
depletion_voltage = -50V

[ElectricFieldReader]
name = "dut"
model = "init"
# Should point to the example electric field in the repositories etc directory
file_name = "example_electric_field.init"
```

[@pixelav]: https://cds.cern.ch/record/687440
