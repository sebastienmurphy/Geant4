# Scripts

## make_module.sh

Short script to prepare the source code and CMake files for a new allpix<sup>2</sup> module. 
The tool will ask for all necessary information, such as the module name ("Module" will be appended automatically) and the type.
Both unique and detector-specific modules are supported.

A README.md file is automatically created, containing the author and contact information of the creator. The information is retrieved using the `git config user.name` and `git config user.email` commands if available, or `whoami` and `hostname` as fallback.
Please make sure, the information is correct.

Usage:

```
etc/scripts/make_module.sh
```

Example output:

```
$ ../etc/make_module.sh 

Preparing code basis for a new module:

Name of the module? MyNewPropagator
Type of the module?
1) unique
2) detector
#? 1
Creating directory and files...

Name:   MyNewPropagator
Author: John Doe (john.doe AT cern.ch)
Path:   ../src/modules/MyNewPropagator

Re-run CMake in order to build your new module.

```


## print_module_parameters.sh

Simple tool which parses the source code of a module and prints a list of all available configuration parameters together with their type. It takes the source code directory of the respective module as command line argument.

Example usage:

```
etc/scripts/print_module_parameters.sh src/modules/DefaultDigitizer/
```

Example output:

```
Parameters for module "DefaultDigitizer":

NAME                TYPE
---------------     ------------------

output_plots        bool
electronics_noise   double
output_plots        bool
threshold           double
threshold_smearing  unsigned int
adc_smearing        double
```

Parameters found in the source code are not de-duplicated, thus some might appear several times.

For the explanation of the parameters, please refer to the documentation of the respective module.


## setup_lxplus.sh

Script to facilitate the compilation of allpix<sup>2</sup> on the CERN LXPLUS Linux cluster. Sourcing the script via

```
source etc/scripts/setup_lxplus.sh
```

will setup all required build dependencies.

