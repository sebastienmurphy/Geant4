# Install script for directory: /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/src/exec

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

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "application" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/exec/allpix")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/allpix" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/allpix")
    execute_process(COMMAND /opt/local/bin/install_name_tool
      -delete_rpath "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/CapacitiveTransfer"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/allpix")
    execute_process(COMMAND /opt/local/bin/install_name_tool
      -delete_rpath "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/CorryvreckanWriter"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/allpix")
    execute_process(COMMAND /opt/local/bin/install_name_tool
      -delete_rpath "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/DefaultDigitizer"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/allpix")
    execute_process(COMMAND /opt/local/bin/install_name_tool
      -delete_rpath "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/DepositionGeant4"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/allpix")
    execute_process(COMMAND /opt/local/bin/install_name_tool
      -delete_rpath "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/DetectorHistogrammer"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/allpix")
    execute_process(COMMAND /opt/local/bin/install_name_tool
      -delete_rpath "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/Dummy"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/allpix")
    execute_process(COMMAND /opt/local/bin/install_name_tool
      -delete_rpath "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/ElectricFieldReader"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/allpix")
    execute_process(COMMAND /opt/local/bin/install_name_tool
      -delete_rpath "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/GenericPropagation"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/allpix")
    execute_process(COMMAND /opt/local/bin/install_name_tool
      -delete_rpath "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/GeometryBuilderGeant4"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/allpix")
    execute_process(COMMAND /opt/local/bin/install_name_tool
      -delete_rpath "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/MagneticFieldReader"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/allpix")
    execute_process(COMMAND /opt/local/bin/install_name_tool
      -delete_rpath "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/ProjectionPropagation"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/allpix")
    execute_process(COMMAND /opt/local/bin/install_name_tool
      -delete_rpath "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/RCEWriter"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/allpix")
    execute_process(COMMAND /opt/local/bin/install_name_tool
      -delete_rpath "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/ROOTObjectReader"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/allpix")
    execute_process(COMMAND /opt/local/bin/install_name_tool
      -delete_rpath "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/ROOTObjectWriter"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/allpix")
    execute_process(COMMAND /opt/local/bin/install_name_tool
      -delete_rpath "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/SimpleTransfer"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/allpix")
    execute_process(COMMAND /opt/local/bin/install_name_tool
      -delete_rpath "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/TextWriter"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/allpix")
    execute_process(COMMAND /opt/local/bin/install_name_tool
      -delete_rpath "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/VisualizationGeant4"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/allpix")
    execute_process(COMMAND /opt/local/bin/install_name_tool
      -delete_rpath "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/core"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/allpix")
    execute_process(COMMAND /opt/local/bin/install_name_tool
      -delete_rpath "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/objects"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/allpix")
    execute_process(COMMAND /opt/local/bin/install_name_tool
      -delete_rpath "/Users/sebastienmurphy/Geant4/geant4.10.04-install/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/allpix")
    execute_process(COMMAND /opt/local/bin/install_name_tool
      -add_rpath "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/allpix")
    execute_process(COMMAND /opt/local/bin/install_name_tool
      -add_rpath "/Users/sebastienmurphy/Geant4/geant4.10.04-install/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/allpix")
  endif()
endif()

