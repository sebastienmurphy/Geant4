# RCEWriter
**Author**: Salman Maqbool (<salman.maqbool@cern.ch>)   
**Maintainer**: Moritz Kiehn (<msmk@cern.ch>)   
**Status**: Functional   
**Input**: PixelHit

### Description
Reads in the PixelHit messages and saves track data in the RCE format, appropriate for the Proteus telescope reconstruction software [@proteus]. An event tree and a sensor tree and their branches are initialized in the module's `init()` method. The event tree is initialized with the appropriate branches, while a sensor tree is created for each detector and the branches initialized from a struct storing the tree and branch information for every sensor. Initially, the program loops over all PixelHit messages and then over all the hits within the message, and writes data to the tree branches in the RCE format. If there are no hits, the event is saved with nHits = 0, with the other fields empty.

### Parameters
* `file_name` : Name of the data file to create, relative to the output directory of the framework. The file extension `.root` will be appended if not present. The default filename is *rce-data.root*
* `geometry_file` : Name of the output geometry file in the [Proteus][@proteus] toml format.  The file extension `.toml` will be appended if not present. Defaults to `rce-geo.toml`

### Usage
To create the default file (with the name *rce_data.root*) an instantiation without arguments can be placed at the end of the main configuration:

```ini
[RCEWriter]
```

[@proteus]: https://gitlab.cern.ch/unige-fei4tel/proteus/
