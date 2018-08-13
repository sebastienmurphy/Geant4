# Install script for directory: /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared

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
  include("/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc/cmake_install.cmake")
  include("/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/models/cmake_install.cmake")
  include("/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/objects/cmake_install.cmake")
  include("/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/core/cmake_install.cmake")
  include("/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/cmake_install.cmake")
  include("/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/exec/cmake_install.cmake")
  include("/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/tools/cmake_install.cmake")
  include("/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/examples/cmake_install.cmake")
  include("/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/etc/unittests/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
