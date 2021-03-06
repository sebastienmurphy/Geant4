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

# Include any dependencies generated for this target.
include src/exec/CMakeFiles/allpix.dir/depend.make

# Include the progress variables for this target.
include src/exec/CMakeFiles/allpix.dir/progress.make

# Include the compile flags for this target's objects.
include src/exec/CMakeFiles/allpix.dir/flags.make

src/exec/CMakeFiles/allpix.dir/allpix.cpp.o: src/exec/CMakeFiles/allpix.dir/flags.make
src/exec/CMakeFiles/allpix.dir/allpix.cpp.o: ../src/exec/allpix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/exec/CMakeFiles/allpix.dir/allpix.cpp.o"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/exec && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/allpix.dir/allpix.cpp.o -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/src/exec/allpix.cpp

src/exec/CMakeFiles/allpix.dir/allpix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/allpix.dir/allpix.cpp.i"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/exec && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/src/exec/allpix.cpp > CMakeFiles/allpix.dir/allpix.cpp.i

src/exec/CMakeFiles/allpix.dir/allpix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/allpix.dir/allpix.cpp.s"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/exec && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/src/exec/allpix.cpp -o CMakeFiles/allpix.dir/allpix.cpp.s

src/exec/CMakeFiles/allpix.dir/allpix.cpp.o.requires:

.PHONY : src/exec/CMakeFiles/allpix.dir/allpix.cpp.o.requires

src/exec/CMakeFiles/allpix.dir/allpix.cpp.o.provides: src/exec/CMakeFiles/allpix.dir/allpix.cpp.o.requires
	$(MAKE) -f src/exec/CMakeFiles/allpix.dir/build.make src/exec/CMakeFiles/allpix.dir/allpix.cpp.o.provides.build
.PHONY : src/exec/CMakeFiles/allpix.dir/allpix.cpp.o.provides

src/exec/CMakeFiles/allpix.dir/allpix.cpp.o.provides.build: src/exec/CMakeFiles/allpix.dir/allpix.cpp.o


# Object files for target allpix
allpix_OBJECTS = \
"CMakeFiles/allpix.dir/allpix.cpp.o"

# External object files for target allpix
allpix_EXTERNAL_OBJECTS =

src/exec/allpix: src/exec/CMakeFiles/allpix.dir/allpix.cpp.o
src/exec/allpix: src/exec/CMakeFiles/allpix.dir/build.make
src/exec/allpix: src/modules/CapacitiveTransfer/libAllpixModuleCapacitiveTransfer.dylib
src/exec/allpix: src/modules/CorryvreckanWriter/libAllpixModuleCorryvreckanWriter.dylib
src/exec/allpix: src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib
src/exec/allpix: src/modules/DepositionGeant4/libAllpixModuleDepositionGeant4.dylib
src/exec/allpix: src/modules/DetectorHistogrammer/libAllpixModuleDetectorHistogrammer.dylib
src/exec/allpix: src/modules/Dummy/libAllpixModuleDummy.dylib
src/exec/allpix: src/modules/ElectricFieldReader/libAllpixModuleElectricFieldReader.dylib
src/exec/allpix: src/modules/GenericPropagation/libAllpixModuleGenericPropagation.dylib
src/exec/allpix: src/modules/GeometryBuilderGeant4/libAllpixModuleGeometryBuilderGeant4.dylib
src/exec/allpix: src/modules/MagneticFieldReader/libAllpixModuleMagneticFieldReader.dylib
src/exec/allpix: src/modules/ProjectionPropagation/libAllpixModuleProjectionPropagation.dylib
src/exec/allpix: src/modules/RCEWriter/libAllpixModuleRCEWriter.dylib
src/exec/allpix: src/modules/ROOTObjectReader/libAllpixModuleROOTObjectReader.dylib
src/exec/allpix: src/modules/ROOTObjectWriter/libAllpixModuleROOTObjectWriter.dylib
src/exec/allpix: src/modules/SimpleTransfer/libAllpixModuleSimpleTransfer.dylib
src/exec/allpix: src/modules/TextWriter/libAllpixModuleTextWriter.dylib
src/exec/allpix: src/modules/VisualizationGeant4/libAllpixModuleVisualizationGeant4.dylib
src/exec/allpix: src/modules/CorryvreckanWriter/libCorryvreckanObjects.dylib
src/exec/allpix: src/core/libAllpixCore.dylib
src/exec/allpix: src/objects/libAllpixObjects.dylib
src/exec/allpix: /Applications/root_v6.10.08/lib/libCore.so
src/exec/allpix: /Applications/root_v6.10.08/lib/libImt.so
src/exec/allpix: /Applications/root_v6.10.08/lib/libRIO.so
src/exec/allpix: /Applications/root_v6.10.08/lib/libNet.so
src/exec/allpix: /Applications/root_v6.10.08/lib/libHist.so
src/exec/allpix: /Applications/root_v6.10.08/lib/libGraf.so
src/exec/allpix: /Applications/root_v6.10.08/lib/libGraf3d.so
src/exec/allpix: /Applications/root_v6.10.08/lib/libGpad.so
src/exec/allpix: /Applications/root_v6.10.08/lib/libTree.so
src/exec/allpix: /Applications/root_v6.10.08/lib/libTreePlayer.so
src/exec/allpix: /Applications/root_v6.10.08/lib/libRint.so
src/exec/allpix: /Applications/root_v6.10.08/lib/libPostscript.so
src/exec/allpix: /Applications/root_v6.10.08/lib/libMatrix.so
src/exec/allpix: /Applications/root_v6.10.08/lib/libPhysics.so
src/exec/allpix: /Applications/root_v6.10.08/lib/libMathCore.so
src/exec/allpix: /Applications/root_v6.10.08/lib/libThread.so
src/exec/allpix: /Applications/root_v6.10.08/lib/libMultiProc.so
src/exec/allpix: /Applications/root_v6.10.08/lib/libGeom.so
src/exec/allpix: /Applications/root_v6.10.08/lib/libGenVector.so
src/exec/allpix: /Users/sebastienmurphy/Geant4/geant4.10.04-install/lib/libG4Tree.dylib
src/exec/allpix: /Users/sebastienmurphy/Geant4/geant4.10.04-install/lib/libG4GMocren.dylib
src/exec/allpix: /Users/sebastienmurphy/Geant4/geant4.10.04-install/lib/libG4FR.dylib
src/exec/allpix: /Users/sebastienmurphy/Geant4/geant4.10.04-install/lib/libG4visHepRep.dylib
src/exec/allpix: /Users/sebastienmurphy/Geant4/geant4.10.04-install/lib/libG4RayTracer.dylib
src/exec/allpix: /Users/sebastienmurphy/Geant4/geant4.10.04-install/lib/libG4VRML.dylib
src/exec/allpix: /Users/sebastienmurphy/Geant4/geant4.10.04-install/lib/libG4persistency.dylib
src/exec/allpix: /Users/sebastienmurphy/Geant4/geant4.10.04-install/lib/libG4error_propagation.dylib
src/exec/allpix: /Users/sebastienmurphy/Geant4/geant4.10.04-install/lib/libG4readout.dylib
src/exec/allpix: /Users/sebastienmurphy/Geant4/geant4.10.04-install/lib/libG4physicslists.dylib
src/exec/allpix: /Users/sebastienmurphy/Geant4/geant4.10.04-install/lib/libG4parmodels.dylib
src/exec/allpix: /Users/sebastienmurphy/Geant4/geant4.10.04-install/lib/libG4OpenGL.dylib
src/exec/allpix: /Users/sebastienmurphy/Geant4/geant4.10.04-install/lib/libG4vis_management.dylib
src/exec/allpix: /Users/sebastienmurphy/Geant4/geant4.10.04-install/lib/libG4modeling.dylib
src/exec/allpix: /Users/sebastienmurphy/Geant4/geant4.10.04-install/lib/libG4interfaces.dylib
src/exec/allpix: /Users/sebastienmurphy/Geant4/geant4.10.04-install/lib/libG4run.dylib
src/exec/allpix: /Users/sebastienmurphy/Geant4/geant4.10.04-install/lib/libG4event.dylib
src/exec/allpix: /Users/sebastienmurphy/Geant4/geant4.10.04-install/lib/libG4tracking.dylib
src/exec/allpix: /Users/sebastienmurphy/Geant4/geant4.10.04-install/lib/libG4processes.dylib
src/exec/allpix: /Users/sebastienmurphy/Geant4/geant4.10.04-install/lib/libG4analysis.dylib
src/exec/allpix: /usr/lib/libexpat.dylib
src/exec/allpix: /Users/sebastienmurphy/Geant4/geant4.10.04-install/lib/libG4digits_hits.dylib
src/exec/allpix: /Users/sebastienmurphy/Geant4/geant4.10.04-install/lib/libG4track.dylib
src/exec/allpix: /Users/sebastienmurphy/Geant4/geant4.10.04-install/lib/libG4particles.dylib
src/exec/allpix: /Users/sebastienmurphy/Geant4/geant4.10.04-install/lib/libG4geometry.dylib
src/exec/allpix: /Users/sebastienmurphy/Geant4/geant4.10.04-install/lib/libG4materials.dylib
src/exec/allpix: /Users/sebastienmurphy/Geant4/geant4.10.04-install/lib/libG4graphics_reps.dylib
src/exec/allpix: /Users/sebastienmurphy/Geant4/geant4.10.04-install/lib/libG4intercoms.dylib
src/exec/allpix: /Users/sebastienmurphy/Geant4/geant4.10.04-install/lib/libG4global.dylib
src/exec/allpix: /Users/sebastienmurphy/Geant4/geant4.10.04-install/lib/libG4clhep.dylib
src/exec/allpix: /opt/local/lib/libQtOpenGL.dylib
src/exec/allpix: /opt/local/lib/libQtGui.dylib
src/exec/allpix: /opt/local/lib/libQtCore.dylib
src/exec/allpix: /Users/sebastienmurphy/Geant4/geant4.10.04-install/lib/libG4gl2ps.dylib
src/exec/allpix: /Users/sebastienmurphy/Geant4/geant4.10.04-install/lib/libG4zlib.dylib
src/exec/allpix: src/exec/CMakeFiles/allpix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable allpix"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/exec && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/allpix.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/exec/CMakeFiles/allpix.dir/build: src/exec/allpix

.PHONY : src/exec/CMakeFiles/allpix.dir/build

src/exec/CMakeFiles/allpix.dir/requires: src/exec/CMakeFiles/allpix.dir/allpix.cpp.o.requires

.PHONY : src/exec/CMakeFiles/allpix.dir/requires

src/exec/CMakeFiles/allpix.dir/clean:
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/exec && $(CMAKE_COMMAND) -P CMakeFiles/allpix.dir/cmake_clean.cmake
.PHONY : src/exec/CMakeFiles/allpix.dir/clean

src/exec/CMakeFiles/allpix.dir/depend:
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/src/exec /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/exec /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/exec/CMakeFiles/allpix.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/exec/CMakeFiles/allpix.dir/depend

