#!/bin/sh

for (( i=1; i<30; i++ ))
do
    echo "Looping ... number $i"
    energy=$(( 10*i ))
    echo $energy
    XRayInt InputG4Mac/PhotoOnly/photo-${energy}keV.mac
done
