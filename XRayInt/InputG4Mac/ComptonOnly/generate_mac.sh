#!/bin/sh

for (( i=1; i<30; i++ ))
do
    echo "Looping ... number $i"
    energy=$(( 10*i ))
    echo $energy
    cp compton-1keV.mac compton-${energy}keV.mac
    sed -i '' "s/1 keV/$energy keV/g" compton-${energy}keV.mac
    sed -i '' "s/compton-1keV/compton-${energy}keV/g" compton-${energy}keV.mac
done
