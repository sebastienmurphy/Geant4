# DefaultDigitizer
**Maintainer**: Simon Spannagel (<simon.spannagel@cern.ch>)  
**Status**: Functional  
**Input**: PixelCharge  
**Output**: PixelHit  

### Description
Very simple digitization module which translates the collected charges into a digitized signal proportional to the input charge. It simulates noise contributions from the readout electronics as Gaussian noise and allows for a configurable threshold. Furthermore, the linear response of an ADC with configurable resolution can be simulated.

In detail, the following steps are performed for every pixel charge:

* A Gaussian noise is added to the input charge value in order to simulate input noise to the preamplifier circuit.
* The preamplifier is simulated by multiplying the input charge with a defined gain factor. The actually applied gain is smeared with a Gaussian distribution on an event-by-event basis.
* A charge threshold is applied. Only if the threshold is surpassed, the pixel is accounted for - for all values below the threshold, the pixel charge is discarded. The actually applied threshold is smeared with a Gaussian distribution on an event-by-event basis allowing for simulating fluctuations of the threshold level.
* An ADC with configurable resolution, given in bit, can be simulated. For this, first an inaccuracy of the ADC is simulated using an additional Gaussian smearing which allows to take ADC noise into account. Then, the charge is converted into ADC units using the `adc_slope` and `adc_offset` parameters provided. Finally, the calculated value is clamped to be contained within the ADC resolution, over- and underflows are treated as saturation.

The ADC implementation also allows to simulate ToT (time-over-threshold) devices by setting the `adc_offset` parameter to the negative `threshold`. Then, the ADC only converts charge above threshold.

With the `output_plots` parameter activated, the module produces histograms of the charge distribution at the different stages of the simulation, i.e. before processing, with electronics noise, after threshold selection, and with ADC smearing applied.
A 2D-histogram of the actual pixel charge in electrons and the converted charge in ADC units is provided if ADC simulation is enabled by setting `adc_resolution` to a value different from zero.
In addition, the distribution of the actually applied threshold is provided as histogram.


### Parameters
* `electronics_noise` : Standard deviation of the Gaussian noise in the electronics (before amplification and application of the threshold). Defaults to 110 electrons.
* `gain` : Gain factor the input charge is multiplied with, defaults to 1.0 (no gain).
* `gain_smearing` : Standard deviation of the Gaussian uncertainty in the gain factor. Defaults to 0.
* `threshold` : Threshold for considering the collected charge as a hit. Defaults to 600 electrons.
* `threshold_smearing` : Standard deviation of the Gaussian uncertainty in the threshold charge value. Defaults to 30 electrons.
* `adc_resolution` : Resolution of the ADC in units of bits. Thus, a value of 8 would translate to an ADC range of 0 -- 255. A value of 0bit switches off the ADC simulation and returns the actual charge in electrons. Defaults to 0.
* `adc_smearing` : Standard deviation of the Gaussian noise in the ADC conversion (after applying the threshold). Defaults to 300 electrons.
* `adc_slope` : Slope of the ADC calibration in electrons per ADC unit (unit: "e"). Defaults to 10e.
* `adc_offset` : Offset of the ADC calibration in electrons. In order to simulate a ToT (time-over-threshold) device, this offset should be configured to the negative value of the threshold. Defaults to 0.
* `output_plots` : Enables output histograms to be be generated from the data in every step (slows down simulation considerably). Disabled by default.
* `output_plots_scale` : Set the x-axis scale of the output plot, defaults to 30ke.
* `output_plots_bins` : Set the number of bins for the output plot histograms, defaults to 100.


### Usage
The default configuration is equal to the following:

```ini
[DefaultDigitizer]
electronics_noise = 110e
threshold = 600e
threshold_smearing = 30e
adc_smearing = 300e
```
