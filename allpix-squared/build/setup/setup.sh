AllpixSquared_version="v1.2+74^gb68d17a3"

# Dependencies
source /Applications/root_v6.10.08/bin/thisroot.sh
source /Users/sebastienmurphy/Geant4/geant4.10.04-install/bin/geant4.sh


THIS_BASH=$BASH
if [[ $THIS_BASH == "" ]]; then
    THIS_HERE=$(dirname $0)
else
    THIS_HERE=$(dirname ${BASH_SOURCE[0]})
fi

CLIC_AllpixSquared_home=$THIS_HERE

# Export path for executable, library path and data path for detector models
export PATH=${CLIC_AllpixSquared_home}/bin:${PATH}
export LD_LIBRARY_PATH=${CLIC_AllpixSquared_home}/lib:${LD_LIBRARY_PATH}
export XDG_DATA_DIRS=${CLIC_AllpixSquared_home}/share:${XDG_DATA_DIRS}
