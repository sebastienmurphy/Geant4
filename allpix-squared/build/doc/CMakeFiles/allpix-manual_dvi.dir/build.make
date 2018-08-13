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

# Utility rule file for allpix-manual_dvi.

# Include the progress variables for this target.
include doc/CMakeFiles/allpix-manual_dvi.dir/progress.make

doc/CMakeFiles/allpix-manual_dvi: usermanual/allpix-manual.dvi


usermanual/allpix-manual.dvi: usermanual/logo.eps
usermanual/allpix-manual.dvi: usermanual/cc-by.eps
usermanual/allpix-manual.dvi: usermanual/usermanual/figures/telescope.eps
usermanual/allpix-manual.dvi: usermanual/usermanual/figures/ci.eps
usermanual/allpix-manual.dvi: usermanual/usermanual/allpix-manual.tex
usermanual/allpix-manual.dvi: usermanual/usermanual/chapters/introduction.tex
usermanual/allpix-manual.dvi: usermanual/usermanual/chapters/quick_start.tex
usermanual/allpix-manual.dvi: usermanual/usermanual/chapters/installation.tex
usermanual/allpix-manual.dvi: usermanual/usermanual/chapters/testing.tex
usermanual/allpix-manual.dvi: usermanual/usermanual/chapters/framework.tex
usermanual/allpix-manual.dvi: usermanual/usermanual/chapters/getting_started.tex
usermanual/allpix-manual.dvi: usermanual/usermanual/chapters/objects.tex
usermanual/allpix-manual.dvi: usermanual/usermanual/chapters/modules.tex
usermanual/allpix-manual.dvi: usermanual/usermanual/chapters/examples.tex
usermanual/allpix-manual.dvi: usermanual/usermanual/chapters/development.tex
usermanual/allpix-manual.dvi: usermanual/usermanual/chapters/faq.tex
usermanual/allpix-manual.dvi: usermanual/usermanual/chapters/additional.tex
usermanual/allpix-manual.dvi: usermanual/usermanual/chapters/acknowledgements.tex
usermanual/allpix-manual.dvi: usermanual/usermanual/appendices/example_output.tex
usermanual/allpix-manual.dvi: usermanual/usermanual/config.tex
usermanual/allpix-manual.dvi: usermanual/usermanual/html/allpix.cfg
usermanual/allpix-manual.dvi: usermanual/usermanual/html/tools.sty
usermanual/allpix-manual.dvi: usermanual/usermanual/html/js/fw.js
usermanual/allpix-manual.dvi: usermanual/usermanual/html/js/sidebar.js
usermanual/allpix-manual.dvi: usermanual/usermanual/html/css/custom.css
usermanual/allpix-manual.dvi: usermanual/usermanual/references.bib
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ../usermanual/allpix-manual.dvi"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && /opt/local/bin/cmake -E chdir /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/usermanual /usr/local/texlive/2012/bin/x86_64-darwin/latex -shell-escape -interaction nonstopmode -halt-on-error -file-line-error usermanual/allpix-manual.tex
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && /opt/local/bin/cmake -E chdir /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/usermanual /usr/local/texlive/2012/bin/x86_64-darwin/biber allpix-manual
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && /opt/local/bin/cmake -E chdir /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/usermanual /usr/local/texlive/2012/bin/x86_64-darwin/latex -shell-escape -interaction nonstopmode -halt-on-error -file-line-error usermanual/allpix-manual.tex
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && /opt/local/bin/cmake -E chdir /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/usermanual /usr/local/texlive/2012/bin/x86_64-darwin/latex -shell-escape -interaction nonstopmode -halt-on-error -file-line-error usermanual/allpix-manual.tex
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && /opt/local/bin/cmake -E chdir /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/usermanual /usr/local/texlive/2012/bin/x86_64-darwin/latex -shell-escape -interaction nonstopmode -halt-on-error -file-line-error usermanual/allpix-manual.tex
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && /opt/local/bin/cmake -E chdir /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/usermanual /opt/local/bin/cmake -D LATEX_BUILD_COMMAND=check_important_warnings -D LATEX_TARGET=allpix-manual -P /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/cmake/LATEX.cmake

usermanual/logo.eps: ../doc/logo.png
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ../usermanual/logo.eps"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && /usr/local/bin/convert /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/doc/logo.png /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/usermanual/logo.eps

usermanual/cc-by.eps: ../doc/cc-by.png
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating ../usermanual/cc-by.eps"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && /usr/local/bin/convert /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/doc/cc-by.png /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/usermanual/cc-by.eps

usermanual/usermanual/figures/telescope.eps: ../doc/usermanual/figures/telescope.png
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating ../usermanual/usermanual/figures/telescope.eps"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && /usr/local/bin/convert /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/doc/usermanual/figures/telescope.png /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/usermanual/usermanual/figures/telescope.eps

usermanual/usermanual/figures/ci.eps: ../doc/usermanual/figures/ci.png
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Generating ../usermanual/usermanual/figures/ci.eps"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && /usr/local/bin/convert /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/doc/usermanual/figures/ci.png /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/usermanual/usermanual/figures/ci.eps

usermanual/usermanual/allpix-manual.tex: ../doc/usermanual/allpix-manual.tex
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Generating ../usermanual/usermanual/allpix-manual.tex"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && /opt/local/bin/cmake -E copy /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/doc/usermanual/allpix-manual.tex /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/usermanual/usermanual/allpix-manual.tex

usermanual/usermanual/chapters/introduction.tex: ../doc/usermanual/chapters/introduction.tex
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Generating ../usermanual/usermanual/chapters/introduction.tex"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && /opt/local/bin/cmake -E copy /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/doc/usermanual/chapters/introduction.tex /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/usermanual/usermanual/chapters/introduction.tex

usermanual/usermanual/chapters/quick_start.tex: ../doc/usermanual/chapters/quick_start.tex
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Generating ../usermanual/usermanual/chapters/quick_start.tex"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && /opt/local/bin/cmake -E copy /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/doc/usermanual/chapters/quick_start.tex /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/usermanual/usermanual/chapters/quick_start.tex

usermanual/usermanual/chapters/installation.tex: ../doc/usermanual/chapters/installation.tex
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Generating ../usermanual/usermanual/chapters/installation.tex"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && /opt/local/bin/cmake -E copy /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/doc/usermanual/chapters/installation.tex /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/usermanual/usermanual/chapters/installation.tex

usermanual/usermanual/chapters/testing.tex: ../doc/usermanual/chapters/testing.tex
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Generating ../usermanual/usermanual/chapters/testing.tex"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && /opt/local/bin/cmake -E copy /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/doc/usermanual/chapters/testing.tex /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/usermanual/usermanual/chapters/testing.tex

usermanual/usermanual/chapters/framework.tex: ../doc/usermanual/chapters/framework.tex
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Generating ../usermanual/usermanual/chapters/framework.tex"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && /opt/local/bin/cmake -E copy /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/doc/usermanual/chapters/framework.tex /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/usermanual/usermanual/chapters/framework.tex

usermanual/usermanual/chapters/getting_started.tex: ../doc/usermanual/chapters/getting_started.tex
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Generating ../usermanual/usermanual/chapters/getting_started.tex"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && /opt/local/bin/cmake -E copy /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/doc/usermanual/chapters/getting_started.tex /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/usermanual/usermanual/chapters/getting_started.tex

usermanual/usermanual/chapters/objects.tex: ../doc/usermanual/chapters/objects.tex
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Generating ../usermanual/usermanual/chapters/objects.tex"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && /opt/local/bin/cmake -E copy /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/doc/usermanual/chapters/objects.tex /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/usermanual/usermanual/chapters/objects.tex

usermanual/usermanual/chapters/modules.tex: ../doc/usermanual/chapters/modules.tex
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Generating ../usermanual/usermanual/chapters/modules.tex"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && /opt/local/bin/cmake -E copy /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/doc/usermanual/chapters/modules.tex /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/usermanual/usermanual/chapters/modules.tex

usermanual/usermanual/chapters/examples.tex: ../doc/usermanual/chapters/examples.tex
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Generating ../usermanual/usermanual/chapters/examples.tex"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && /opt/local/bin/cmake -E copy /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/doc/usermanual/chapters/examples.tex /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/usermanual/usermanual/chapters/examples.tex

usermanual/usermanual/chapters/development.tex: ../doc/usermanual/chapters/development.tex
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Generating ../usermanual/usermanual/chapters/development.tex"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && /opt/local/bin/cmake -E copy /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/doc/usermanual/chapters/development.tex /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/usermanual/usermanual/chapters/development.tex

usermanual/usermanual/chapters/faq.tex: ../doc/usermanual/chapters/faq.tex
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Generating ../usermanual/usermanual/chapters/faq.tex"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && /opt/local/bin/cmake -E copy /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/doc/usermanual/chapters/faq.tex /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/usermanual/usermanual/chapters/faq.tex

usermanual/usermanual/chapters/additional.tex: ../doc/usermanual/chapters/additional.tex
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Generating ../usermanual/usermanual/chapters/additional.tex"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && /opt/local/bin/cmake -E copy /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/doc/usermanual/chapters/additional.tex /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/usermanual/usermanual/chapters/additional.tex

usermanual/usermanual/chapters/acknowledgements.tex: ../doc/usermanual/chapters/acknowledgements.tex
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Generating ../usermanual/usermanual/chapters/acknowledgements.tex"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && /opt/local/bin/cmake -E copy /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/doc/usermanual/chapters/acknowledgements.tex /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/usermanual/usermanual/chapters/acknowledgements.tex

usermanual/usermanual/appendices/example_output.tex: ../doc/usermanual/appendices/example_output.tex
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Generating ../usermanual/usermanual/appendices/example_output.tex"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && /opt/local/bin/cmake -E copy /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/doc/usermanual/appendices/example_output.tex /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/usermanual/usermanual/appendices/example_output.tex

usermanual/usermanual/config.tex: ../doc/usermanual/config.tex
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_21) "Generating ../usermanual/usermanual/config.tex"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && /opt/local/bin/cmake /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build

usermanual/usermanual/html/allpix.cfg: ../doc/usermanual/html/allpix.cfg
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_22) "Generating ../usermanual/usermanual/html/allpix.cfg"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && /opt/local/bin/cmake -E copy /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/doc/usermanual/html/allpix.cfg /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/usermanual/usermanual/html/allpix.cfg

usermanual/usermanual/html/tools.sty: ../doc/usermanual/html/tools.sty
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_23) "Generating ../usermanual/usermanual/html/tools.sty"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && /opt/local/bin/cmake -E copy /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/doc/usermanual/html/tools.sty /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/usermanual/usermanual/html/tools.sty

usermanual/usermanual/html/js/fw.js: ../doc/usermanual/html/js/fw.js
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_24) "Generating ../usermanual/usermanual/html/js/fw.js"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && /opt/local/bin/cmake -E copy /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/doc/usermanual/html/js/fw.js /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/usermanual/usermanual/html/js/fw.js

usermanual/usermanual/html/js/sidebar.js: ../doc/usermanual/html/js/sidebar.js
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_25) "Generating ../usermanual/usermanual/html/js/sidebar.js"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && /opt/local/bin/cmake -E copy /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/doc/usermanual/html/js/sidebar.js /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/usermanual/usermanual/html/js/sidebar.js

usermanual/usermanual/html/css/custom.css: ../doc/usermanual/html/css/custom.css
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_26) "Generating ../usermanual/usermanual/html/css/custom.css"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && /opt/local/bin/cmake -E copy /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/doc/usermanual/html/css/custom.css /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/usermanual/usermanual/html/css/custom.css

usermanual/usermanual/references.bib: ../doc/usermanual/references.bib
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_27) "Generating ../usermanual/usermanual/references.bib"
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && /opt/local/bin/cmake -E copy /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/doc/usermanual/references.bib /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/usermanual/usermanual/references.bib

allpix-manual_dvi: doc/CMakeFiles/allpix-manual_dvi
allpix-manual_dvi: usermanual/allpix-manual.dvi
allpix-manual_dvi: usermanual/logo.eps
allpix-manual_dvi: usermanual/cc-by.eps
allpix-manual_dvi: usermanual/usermanual/figures/telescope.eps
allpix-manual_dvi: usermanual/usermanual/figures/ci.eps
allpix-manual_dvi: usermanual/usermanual/allpix-manual.tex
allpix-manual_dvi: usermanual/usermanual/chapters/introduction.tex
allpix-manual_dvi: usermanual/usermanual/chapters/quick_start.tex
allpix-manual_dvi: usermanual/usermanual/chapters/installation.tex
allpix-manual_dvi: usermanual/usermanual/chapters/testing.tex
allpix-manual_dvi: usermanual/usermanual/chapters/framework.tex
allpix-manual_dvi: usermanual/usermanual/chapters/getting_started.tex
allpix-manual_dvi: usermanual/usermanual/chapters/objects.tex
allpix-manual_dvi: usermanual/usermanual/chapters/modules.tex
allpix-manual_dvi: usermanual/usermanual/chapters/examples.tex
allpix-manual_dvi: usermanual/usermanual/chapters/development.tex
allpix-manual_dvi: usermanual/usermanual/chapters/faq.tex
allpix-manual_dvi: usermanual/usermanual/chapters/additional.tex
allpix-manual_dvi: usermanual/usermanual/chapters/acknowledgements.tex
allpix-manual_dvi: usermanual/usermanual/appendices/example_output.tex
allpix-manual_dvi: usermanual/usermanual/config.tex
allpix-manual_dvi: usermanual/usermanual/html/allpix.cfg
allpix-manual_dvi: usermanual/usermanual/html/tools.sty
allpix-manual_dvi: usermanual/usermanual/html/js/fw.js
allpix-manual_dvi: usermanual/usermanual/html/js/sidebar.js
allpix-manual_dvi: usermanual/usermanual/html/css/custom.css
allpix-manual_dvi: usermanual/usermanual/references.bib
allpix-manual_dvi: doc/CMakeFiles/allpix-manual_dvi.dir/build.make

.PHONY : allpix-manual_dvi

# Rule to build all files generated by this target.
doc/CMakeFiles/allpix-manual_dvi.dir/build: allpix-manual_dvi

.PHONY : doc/CMakeFiles/allpix-manual_dvi.dir/build

doc/CMakeFiles/allpix-manual_dvi.dir/clean:
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc && $(CMAKE_COMMAND) -P CMakeFiles/allpix-manual_dvi.dir/cmake_clean.cmake
.PHONY : doc/CMakeFiles/allpix-manual_dvi.dir/clean

doc/CMakeFiles/allpix-manual_dvi.dir/depend:
	cd /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/doc /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/doc/CMakeFiles/allpix-manual_dvi.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : doc/CMakeFiles/allpix-manual_dvi.dir/depend

