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
include src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/depend.make

# Include the progress variables for this target.
include src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/progress.make

# Include the compile flags for this target's objects.
include src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/flags.make

src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/__/__/core/module/dynamic_module_impl.cpp.o: src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/flags.make
src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/__/__/core/module/dynamic_module_impl.cpp.o: ../src/core/module/dynamic_module_impl.cpp
src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/__/__/core/module/dynamic_module_impl.cpp.o: ../src/modules/DefaultDigitizer/DefaultDigitizerModule.hpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/__/__/core/module/dynamic_module_impl.cpp.o"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/DefaultDigitizer && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AllpixModuleDefaultDigitizer.dir/__/__/core/module/dynamic_module_impl.cpp.o -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/src/core/module/dynamic_module_impl.cpp

src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/__/__/core/module/dynamic_module_impl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AllpixModuleDefaultDigitizer.dir/__/__/core/module/dynamic_module_impl.cpp.i"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/DefaultDigitizer && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/src/core/module/dynamic_module_impl.cpp > CMakeFiles/AllpixModuleDefaultDigitizer.dir/__/__/core/module/dynamic_module_impl.cpp.i

src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/__/__/core/module/dynamic_module_impl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AllpixModuleDefaultDigitizer.dir/__/__/core/module/dynamic_module_impl.cpp.s"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/DefaultDigitizer && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/src/core/module/dynamic_module_impl.cpp -o CMakeFiles/AllpixModuleDefaultDigitizer.dir/__/__/core/module/dynamic_module_impl.cpp.s

src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/__/__/core/module/dynamic_module_impl.cpp.o.requires:

.PHONY : src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/__/__/core/module/dynamic_module_impl.cpp.o.requires

src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/__/__/core/module/dynamic_module_impl.cpp.o.provides: src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/__/__/core/module/dynamic_module_impl.cpp.o.requires
	$(MAKE) -f src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/build.make src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/__/__/core/module/dynamic_module_impl.cpp.o.provides.build
.PHONY : src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/__/__/core/module/dynamic_module_impl.cpp.o.provides

src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/__/__/core/module/dynamic_module_impl.cpp.o.provides.build: src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/__/__/core/module/dynamic_module_impl.cpp.o


src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/DefaultDigitizerModule.cpp.o: src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/flags.make
src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/DefaultDigitizerModule.cpp.o: ../src/modules/DefaultDigitizer/DefaultDigitizerModule.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/DefaultDigitizerModule.cpp.o"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/DefaultDigitizer && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AllpixModuleDefaultDigitizer.dir/DefaultDigitizerModule.cpp.o -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/src/modules/DefaultDigitizer/DefaultDigitizerModule.cpp

src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/DefaultDigitizerModule.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AllpixModuleDefaultDigitizer.dir/DefaultDigitizerModule.cpp.i"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/DefaultDigitizer && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/src/modules/DefaultDigitizer/DefaultDigitizerModule.cpp > CMakeFiles/AllpixModuleDefaultDigitizer.dir/DefaultDigitizerModule.cpp.i

src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/DefaultDigitizerModule.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AllpixModuleDefaultDigitizer.dir/DefaultDigitizerModule.cpp.s"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/DefaultDigitizer && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/src/modules/DefaultDigitizer/DefaultDigitizerModule.cpp -o CMakeFiles/AllpixModuleDefaultDigitizer.dir/DefaultDigitizerModule.cpp.s

src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/DefaultDigitizerModule.cpp.o.requires:

.PHONY : src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/DefaultDigitizerModule.cpp.o.requires

src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/DefaultDigitizerModule.cpp.o.provides: src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/DefaultDigitizerModule.cpp.o.requires
	$(MAKE) -f src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/build.make src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/DefaultDigitizerModule.cpp.o.provides.build
.PHONY : src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/DefaultDigitizerModule.cpp.o.provides

src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/DefaultDigitizerModule.cpp.o.provides.build: src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/DefaultDigitizerModule.cpp.o


# Object files for target AllpixModuleDefaultDigitizer
AllpixModuleDefaultDigitizer_OBJECTS = \
"CMakeFiles/AllpixModuleDefaultDigitizer.dir/__/__/core/module/dynamic_module_impl.cpp.o" \
"CMakeFiles/AllpixModuleDefaultDigitizer.dir/DefaultDigitizerModule.cpp.o"

# External object files for target AllpixModuleDefaultDigitizer
AllpixModuleDefaultDigitizer_EXTERNAL_OBJECTS =

src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/__/__/core/module/dynamic_module_impl.cpp.o
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/DefaultDigitizerModule.cpp.o
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/build.make
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: src/core/libAllpixCore.dylib
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libCore.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libImt.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libRIO.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libNet.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libHist.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libGraf.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libGraf3d.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libGpad.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libTree.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libTreePlayer.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libRint.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libPostscript.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libMatrix.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libPhysics.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libMathCore.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libThread.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libMultiProc.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libGeom.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libGenVector.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: src/objects/libAllpixObjects.dylib
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libCore.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libImt.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libRIO.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libNet.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libHist.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libGraf.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libGraf3d.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libGpad.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libTree.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libTreePlayer.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libRint.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libPostscript.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libMatrix.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libPhysics.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libMathCore.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libThread.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libMultiProc.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libGeom.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: /Applications/root_v6.10.08/lib/libGenVector.so
src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib: src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library libAllpixModuleDefaultDigitizer.dylib"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/DefaultDigitizer && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AllpixModuleDefaultDigitizer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/build: src/modules/DefaultDigitizer/libAllpixModuleDefaultDigitizer.dylib

.PHONY : src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/build

src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/requires: src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/__/__/core/module/dynamic_module_impl.cpp.o.requires
src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/requires: src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/DefaultDigitizerModule.cpp.o.requires

.PHONY : src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/requires

src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/clean:
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/DefaultDigitizer && $(CMAKE_COMMAND) -P CMakeFiles/AllpixModuleDefaultDigitizer.dir/cmake_clean.cmake
.PHONY : src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/clean

src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/depend:
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/src/modules/DefaultDigitizer /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/DefaultDigitizer /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/modules/DefaultDigitizer/CMakeFiles/AllpixModuleDefaultDigitizer.dir/depend
