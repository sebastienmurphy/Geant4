# Install script for directory: /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/src/core

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/core/libAllpixCore.dylib")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libAllpixCore.dylib" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libAllpixCore.dylib")
    execute_process(COMMAND /opt/local/bin/install_name_tool
      -delete_rpath "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/objects"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libAllpixCore.dylib")
    execute_process(COMMAND /opt/local/bin/install_name_tool
      -add_rpath "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libAllpixCore.dylib")
  endif()
endif()

