# Install script for directory: /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/tools/tcad_dfise_converter

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

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "tools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/tools/tcad_dfise_converter/mesh_converter")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mesh_converter" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mesh_converter")
    execute_process(COMMAND /opt/local/bin/install_name_tool
      -add_rpath "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mesh_converter")
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "tools" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/tools/tcad_dfise_converter/mesh_plotter")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mesh_plotter" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mesh_plotter")
    execute_process(COMMAND /opt/local/bin/install_name_tool
      -add_rpath "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mesh_plotter")
  endif()
endif()

