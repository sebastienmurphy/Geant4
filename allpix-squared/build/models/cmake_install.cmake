# Install script for directory: /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/models

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

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "models" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/models/test.conf;/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/models/timepix.conf;/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/models/medipix3.conf;/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/models/mimosa23.conf;/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/models/mimosa26.conf;/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/models/fei3.conf;/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/models/ibl_planar.conf;/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/models/cmsp1.conf;/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/models/clicpix.conf;/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/models/clicpix2.conf")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/models" TYPE FILE FILES
    "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/models/test.conf"
    "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/models/timepix.conf"
    "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/models/medipix3.conf"
    "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/models/mimosa23.conf"
    "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/models/mimosa26.conf"
    "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/models/fei3.conf"
    "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/models/ibl_planar.conf"
    "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/models/cmsp1.conf"
    "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/models/clicpix.conf"
    "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/models/clicpix2.conf"
    )
endif()

