#!/bin/sh

for (( i=1; i<30; i++ ))
do
    echo "Looping ... number $i"
    energy=$(( 10*i ))
    echo $energy
    cp compton-photo-1keV.mac compton-photo-${energy}keV.mac
    sed -i '' "s/1 keV/$energy keV/g" compton-photo-${energy}keV.mac
    sed -i '' "s/compton-photo-1keV/compton-photo-${energy}keV/g" compton-photo-${energy}keV.mac
done
