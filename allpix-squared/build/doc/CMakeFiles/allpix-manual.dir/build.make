# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/local/bin/cmake

# The command to remove a file.
RM = /opt/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build

# Utility rule file for allpix-manual.

# Include the progress variables for this target.
include doc/CMakeFiles/allpix-manual.dir/progress.make

doc/CMakeFiles/allpix-manual:


allpix-manual: doc/CMakeFiles/allpix-manual
allpix-manual: doc/CMakeFiles/allpix-manual.dir/build.make

.PHONY : allpix-manual

# Rule to build all files generated by this target.
doc/CMakeFiles/allpix-manual.dir/build: allpix-manual

.PHONY : doc/CMakeFiles/allpix-manual.dir/build

doc/CMakeFiles/allpix-manual.dir/clean:
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && $(CMAKE_COMMAND) -P CMakeFiles/allpix-manual.dir/cmake_clean.cmake
.PHONY : doc/CMakeFiles/allpix-manual.dir/clean

doc/CMakeFiles/allpix-manual.dir/depend:
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/doc /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc/CMakeFiles/allpix-manual.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : doc/CMakeFiles/allpix-manual.dir/depend
