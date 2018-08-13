# CMake generated Testfile for 
# Source directory: /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/examples
# Build directory: /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/examples
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(example "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "test_example" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/examples/example.conf -o number_of_events=10")
add_test(manual "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "test_manual" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/manual.conf")
add_test(examples/capacitive_coupling "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/capacitive_coupling" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/examples/capacitive_coupling/capacitive_coupling.conf -o number_of_events=10 ")
set_tests_properties(examples/capacitive_coupling PROPERTIES  DEPENDS "" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build")
add_test(examples/fast_simulation "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/fast_simulation" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/examples/fast_simulation/fast_simulation.conf -o number_of_events=10  -o random_seed_core=1")
set_tests_properties(examples/fast_simulation PROPERTIES  DEPENDS "" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build")
add_test(examples/magnetic_field "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/magnetic_field" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/examples/magnetic_field/magnetic_field.conf -o number_of_events=10  -o random_seed_core=1")
set_tests_properties(examples/magnetic_field PROPERTIES  DEPENDS "" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build")
add_test(examples/precise_dut "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/precise_dut" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/examples/precise_dut/precise_dut.conf -o number_of_events=10  -o random_seed_core=1")
set_tests_properties(examples/precise_dut PROPERTIES  DEPENDS "" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build")
add_test(examples/replay_simulation "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/replay_simulation" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/examples/replay_simulation/replay_simulation.conf -o number_of_events=10  -o random_seed_core=1 -o ROOTObjectReader.file_name=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/output/fast_simulation/output/output_fast_simulation.root -o random_seed_core=1")
set_tests_properties(examples/replay_simulation PROPERTIES  DEPENDS "examples/fast_simulation" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build")
add_test(examples/source_measurement "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/source_measurement" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/examples/source_measurement/source_measurement.conf -o number_of_events=10  -o random_seed_core=1 -o ROOTObjectReader.file_name=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/output/fast_simulation/output/output_fast_simulation.root -o random_seed_core=1")
set_tests_properties(examples/source_measurement PROPERTIES  DEPENDS "examples/fast_simulation" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build")
add_test(examples/tcad_field_simulation "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/tcad_field_simulation" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/examples/tcad_field_simulation/tcad_field_simulation.conf -o number_of_events=10  -o random_seed_core=1 -o ROOTObjectReader.file_name=/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/output/fast_simulation/output/output_fast_simulation.root -o random_seed_core=1")
set_tests_properties(examples/tcad_field_simulation PROPERTIES  DEPENDS "examples/fast_simulation" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build")
