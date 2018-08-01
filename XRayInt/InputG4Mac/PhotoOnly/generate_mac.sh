#!/bin/sh

for (( i=1; i<30; i++ ))
do
    echo "Looping ... number $i"
    energy=$(( 10*i ))
    echo $energy
    cp photo-1keV.mac photo-${energy}keV.mac
    sed -i '' "s/1 keV/$energy keV/g" photo-${energy}keV.mac
    sed -i '' "s/photo-1keV/photo-${energy}keV/g" photo-${energy}keV.mac
done
