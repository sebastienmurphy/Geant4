# Install script for directory: /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/src/modules

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/CapacitiveTransfer/cmake_install.cmake")
  include("/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/CorryvreckanWriter/cmake_install.cmake")
  include("/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/DefaultDigitizer/cmake_install.cmake")
  include("/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/DepositionGeant4/cmake_install.cmake")
  include("/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/DetectorHistogrammer/cmake_install.cmake")
  include("/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/Dummy/cmake_install.cmake")
  include("/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/ElectricFieldReader/cmake_install.cmake")
  include("/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/GenericPropagation/cmake_install.cmake")
  include("/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/GeometryBuilderGeant4/cmake_install.cmake")
  include("/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/LCIOWriter/cmake_install.cmake")
  include("/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/MagneticFieldReader/cmake_install.cmake")
  include("/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/ProjectionPropagation/cmake_install.cmake")
  include("/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/RCEWriter/cmake_install.cmake")
  include("/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/ROOTObjectReader/cmake_install.cmake")
  include("/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/ROOTObjectWriter/cmake_install.cmake")
  include("/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/SimpleTransfer/cmake_install.cmake")
  include("/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/TextWriter/cmake_install.cmake")
  include("/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/VisualizationGeant4/cmake_install.cmake")

endif()

