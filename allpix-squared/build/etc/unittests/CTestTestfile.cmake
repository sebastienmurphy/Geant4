# CMake generated Testfile for 
# Source directory: /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests
# Build directory: /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/build/etc/unittests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_modules/test_01_geobuilder.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_modules/test_01_geobuilder.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_modules/test_01_geobuilder.conf ")
set_tests_properties(test_modules/test_01_geobuilder.conf PROPERTIES  PASS_REGULAR_EXPRESSION "Wrapper dimensions of model: \\(4.6mm,4mm,1.53mm\\)" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_modules/test_02-1_electricfield_linear.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_modules/test_02-1_electricfield_linear.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_modules/test_02-1_electricfield_linear.conf ")
set_tests_properties(test_modules/test_02-1_electricfield_linear.conf PROPERTIES  PASS_REGULAR_EXPRESSION "Effective thickness of the electric field: 326.599um" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_modules/test_02-2_electricfield_init.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_modules/test_02-2_electricfield_init.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_modules/test_02-2_electricfield_init.conf ")
set_tests_properties(test_modules/test_02-2_electricfield_init.conf PROPERTIES  PASS_REGULAR_EXPRESSION "Set electric field with 25x17x92 cells" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_modules/test_02-3_electricfield_linear_depth.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_modules/test_02-3_electricfield_linear_depth.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_modules/test_02-3_electricfield_linear_depth.conf ")
set_tests_properties(test_modules/test_02-3_electricfield_linear_depth.conf PROPERTIES  PASS_REGULAR_EXPRESSION "Effective thickness of the electric field: 100um" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_modules/test_02-4_magneticfield_constant.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_modules/test_02-4_magneticfield_constant.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_modules/test_02-4_magneticfield_constant.conf ")
set_tests_properties(test_modules/test_02-4_magneticfield_constant.conf PROPERTIES  PASS_REGULAR_EXPRESSION "Set constant magnetic field: \\(500mT,2T,0\\)" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_modules/test_03-1_deposition.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_modules/test_03-1_deposition.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_modules/test_03-1_deposition.conf ")
set_tests_properties(test_modules/test_03-1_deposition.conf PROPERTIES  PASS_REGULAR_EXPRESSION "Deposited 61828 charges in sensor of detector mydetector" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_modules/test_03-2_deposition_mc.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_modules/test_03-2_deposition_mc.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_modules/test_03-2_deposition_mc.conf ")
set_tests_properties(test_modules/test_03-2_deposition_mc.conf PROPERTIES  PASS_REGULAR_EXPRESSION "Found MC particle -11 crossing detector mydetector from \\(440um,880um,-200um\\) to \\(419.57um,862.241um,200um\\) \\(local coordinates\\)" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_modules/test_03-3_deposition_track.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_modules/test_03-3_deposition_track.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_modules/test_03-3_deposition_track.conf ")
set_tests_properties(test_modules/test_03-3_deposition_track.conf PROPERTIES  PASS_REGULAR_EXPRESSION "MCTrack originates at: \\(0.002um,-0.001um,145.123um\\) and terminates at: \\(12.462um,-29.495um,148.438um\\)" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_modules/test_03-4_deposition_source_point.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_modules/test_03-4_deposition_source_point.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_modules/test_03-4_deposition_source_point.conf ")
set_tests_properties(test_modules/test_03-4_deposition_source_point.conf PROPERTIES  PASS_REGULAR_EXPRESSION "Deposited 151204 charges in sensor of detector mydetector" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_modules/test_03-5_deposition_source_square.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_modules/test_03-5_deposition_source_square.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_modules/test_03-5_deposition_source_square.conf ")
set_tests_properties(test_modules/test_03-5_deposition_source_square.conf PROPERTIES  PASS_REGULAR_EXPRESSION "Deposited 61984 charges in sensor of detector mydetector" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_modules/test_03-6_deposition_source_sphere.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_modules/test_03-6_deposition_source_sphere.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_modules/test_03-6_deposition_source_sphere.conf ")
set_tests_properties(test_modules/test_03-6_deposition_source_sphere.conf PROPERTIES  PASS_REGULAR_EXPRESSION "Deposited 128982 charges in sensor of detector mydetector" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_modules/test_03-7_deposition_source_macro.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_modules/test_03-7_deposition_source_macro.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_modules/test_03-7_deposition_source_macro.conf ")
set_tests_properties(test_modules/test_03-7_deposition_source_macro.conf PROPERTIES  PASS_REGULAR_EXPRESSION "Deposited 159418 charges in sensor of detector mydetector" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_modules/test_04-1_propagation_project.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_modules/test_04-1_propagation_project.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_modules/test_04-1_propagation_project.conf ")
set_tests_properties(test_modules/test_04-1_propagation_project.conf PROPERTIES  PASS_REGULAR_EXPRESSION "Total count of propagated charge carriers: 2725" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_modules/test_04-2_propagation_generic.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_modules/test_04-2_propagation_generic.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_modules/test_04-2_propagation_generic.conf ")
set_tests_properties(test_modules/test_04-2_propagation_generic.conf PROPERTIES  PASS_REGULAR_EXPRESSION "\\[F:GenericPropagation:mydetector\\] Propagated total of 30914 charges in 3277 steps in average time of 13.6379ns" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_modules/test_04-3_propagation_generic-magnetic.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_modules/test_04-3_propagation_generic-magnetic.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_modules/test_04-3_propagation_generic-magnetic.conf ")
set_tests_properties(test_modules/test_04-3_propagation_generic-magnetic.conf PROPERTIES  PASS_REGULAR_EXPRESSION "Propagated 31863 charges in 3370 steps in average time of 13.3527ns" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_modules/test_05-1_transfer_simple.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_modules/test_05-1_transfer_simple.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_modules/test_05-1_transfer_simple.conf ")
set_tests_properties(test_modules/test_05-1_transfer_simple.conf PROPERTIES  PASS_REGULAR_EXPRESSION "\\[R:SimpleTransfer:mydetector\\] Set of 21732 charges combined at \\(2,2\\)" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_modules/test_05-2_transfer_simple_implant.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_modules/test_05-2_transfer_simple_implant.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_modules/test_05-2_transfer_simple_implant.conf ")
set_tests_properties(test_modules/test_05-2_transfer_simple_implant.conf PROPERTIES  PASS_REGULAR_EXPRESSION "\\[R:SimpleTransfer:mydetector\\] Skipping set of 18 propagated charges at \\(425.986um,874.349um,-199.42um\\) because their local position is not in implant range" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_modules/test_06-1_digitization_charge.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_modules/test_06-1_digitization_charge.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_modules/test_06-1_digitization_charge.conf ")
set_tests_properties(test_modules/test_06-1_digitization_charge.conf PROPERTIES  PASS_REGULAR_EXPRESSION "\\[R:DefaultDigitizer:mydetector\\] Passed threshold: 21948.5e > 595.75e" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_modules/test_06-2_digitization_adc.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_modules/test_06-2_digitization_adc.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_modules/test_06-2_digitization_adc.conf ")
set_tests_properties(test_modules/test_06-2_digitization_adc.conf PROPERTIES  PASS_REGULAR_EXPRESSION "Charge converted to ADC units: 7" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_modules/test_06-3_digitization_gain.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_modules/test_06-3_digitization_gain.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_modules/test_06-3_digitization_gain.conf ")
set_tests_properties(test_modules/test_06-3_digitization_gain.conf PROPERTIES  PASS_REGULAR_EXPRESSION "\\[R:DefaultDigitizer:mydetector\\] Charge after amplifier \\(gain\\): 51139.9e" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_modules/test_07_histogramming.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_modules/test_07_histogramming.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_modules/test_07_histogramming.conf ")
set_tests_properties(test_modules/test_07_histogramming.conf PROPERTIES  PASS_REGULAR_EXPRESSION "Plotted 1 hits in total, mean position is \\(2,2\\)" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_modules/test_08-1_writer_root.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_modules/test_08-1_writer_root.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_modules/test_08-1_writer_root.conf ")
set_tests_properties(test_modules/test_08-1_writer_root.conf PROPERTIES  PASS_REGULAR_EXPRESSION "Wrote 1320 objects to 5 branches in file:" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_modules/test_08-2_writer_rce.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_modules/test_08-2_writer_rce.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_modules/test_08-2_writer_rce.conf ")
set_tests_properties(test_modules/test_08-2_writer_rce.conf PROPERTIES  PASS_REGULAR_EXPRESSION "\\[F:RCEWriter\\] Wrote data to file" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_modules/test_08-3_writer_lcio.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_modules/test_08-3_writer_lcio.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_modules/test_08-3_writer_lcio.conf ")
set_tests_properties(test_modules/test_08-3_writer_lcio.conf PROPERTIES  PASS_REGULAR_EXPRESSION "\\[R:LCIOWriter\\] X: 2, Y:2, Signal: 21948.5" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_modules/test_08-4_writer_corryvreckan.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_modules/test_08-4_writer_corryvreckan.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_modules/test_08-4_writer_corryvreckan.conf ")
set_tests_properties(test_modules/test_08-4_writer_corryvreckan.conf PROPERTIES  PASS_REGULAR_EXPRESSION "\\[R:CorryvreckanWriter\\] Pixel \\(2,2\\) written to device mydetector" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_modules/test_08-5_writer_corryvreckan_mc.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_modules/test_08-5_writer_corryvreckan_mc.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_modules/test_08-5_writer_corryvreckan_mc.conf ")
set_tests_properties(test_modules/test_08-5_writer_corryvreckan_mc.conf PROPERTIES  PASS_REGULAR_EXPRESSION "\\[R:CorryvreckanWriter\\] MC particle started locally at \\(0.44,0.88\\) and ended at 0.41957,0.862241\\)" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_modules/test_08-6_writer_text.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_modules/test_08-6_writer_text.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_modules/test_08-6_writer_text.conf ")
set_tests_properties(test_modules/test_08-6_writer_text.conf PROPERTIES  PASS_REGULAR_EXPRESSION "\\[F:TextWriter\\] Wrote 1321 objects from 6 messages to file:" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_modules/test_08-7_writer_lcio_detector_assignment.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_modules/test_08-7_writer_lcio_detector_assignment.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_modules/test_08-7_writer_lcio_detector_assignment.conf ")
set_tests_properties(test_modules/test_08-7_writer_lcio_detector_assignment.conf PROPERTIES  PASS_REGULAR_EXPRESSION "\\[C:LCIOWriter\\] mydetector has ID 123" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_modules/test_08-8_writer_lcio_no_mc_truth.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_modules/test_08-8_writer_lcio_no_mc_truth.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_modules/test_08-8_writer_lcio_no_mc_truth.conf ")
set_tests_properties(test_modules/test_08-8_writer_lcio_no_mc_truth.conf PROPERTIES  PASS_REGULAR_EXPRESSION "\\[R:LCIOWriter\\] X: 2, Y:2, Signal: 21948.5" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_modules/test_09-1_reader_root.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_modules/test_09-1_reader_root.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_modules/test_09-1_reader_root.conf ")
set_tests_properties(test_modules/test_09-1_reader_root.conf PROPERTIES  DEPENDS "test_modules/test_08-1_writer_root.conf" PASS_REGULAR_EXPRESSION "Read 1320 objects from 5 branches" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_modules/test_09-2_reader_root_seed.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_modules/test_09-2_reader_root_seed.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_modules/test_09-2_reader_root_seed.conf ")
set_tests_properties(test_modules/test_09-2_reader_root_seed.conf PROPERTIES  DEPENDS "test_modules/test_08-1_writer_root.conf" PASS_REGULAR_EXPRESSION "Value 3 of key 'random_seed_core' in global section is not valid: mismatch between core random seed in configuration file and input data - this might lead to unexpected behavior. Set to value configured in the input data file: 1" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_performance/test_01_deposition.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_performance/test_01_deposition.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_performance/test_01_deposition.conf ")
set_tests_properties(test_performance/test_01_deposition.conf PROPERTIES  TIMEOUT "85" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_performance/test_02-1_propagation_generic.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_performance/test_02-1_propagation_generic.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_performance/test_02-1_propagation_generic.conf ")
set_tests_properties(test_performance/test_02-1_propagation_generic.conf PROPERTIES  TIMEOUT "250" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_performance/test_02-2_propagation_project.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_performance/test_02-2_propagation_project.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_performance/test_02-2_propagation_project.conf ")
set_tests_properties(test_performance/test_02-2_propagation_project.conf PROPERTIES  TIMEOUT "310" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_performance/test_02-3_propagation_generic_multithread.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_performance/test_02-3_propagation_generic_multithread.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_performance/test_02-3_propagation_generic_multithread.conf ")
set_tests_properties(test_performance/test_02-3_propagation_generic_multithread.conf PROPERTIES  TIMEOUT "130" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_core/test_01-1_globalconfig_detectors.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_core/test_01-1_globalconfig_detectors.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_core/test_01-1_globalconfig_detectors.conf ")
set_tests_properties(test_core/test_01-1_globalconfig_detectors.conf PROPERTIES  PASS_REGULAR_EXPRESSION "Value \"nonexistent.conf\" of key 'detectors_file' in global section is not valid" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_core/test_01-2_globalconfig_modelpaths.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_core/test_01-2_globalconfig_modelpaths.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_core/test_01-2_globalconfig_modelpaths.conf ")
set_tests_properties(test_core/test_01-2_globalconfig_modelpaths.conf PROPERTIES  PASS_REGULAR_EXPRESSION "Registering new model special_model" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_core/test_01-3_globalconfig_log_format.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_core/test_01-3_globalconfig_log_format.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_core/test_01-3_globalconfig_log_format.conf ")
set_tests_properties(test_core/test_01-3_globalconfig_log_format.conf PROPERTIES  PASS_REGULAR_EXPRESSION "\\(STATUS\\) <Allpix.cpp/load:L119> Initialized PRNG with configured seed 0" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_core/test_01-4_globalconfig_log_level.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_core/test_01-4_globalconfig_log_level.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_core/test_01-4_globalconfig_log_level.conf ")
set_tests_properties(test_core/test_01-4_globalconfig_log_level.conf PROPERTIES  PASS_REGULAR_EXPRESSION "\\(TRACE\\) Global log level is set to TRACE" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_core/test_01-5_globalconfig_log_file.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_core/test_01-5_globalconfig_log_file.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_core/test_01-5_globalconfig_log_file.conf ")
set_tests_properties(test_core/test_01-5_globalconfig_log_file.conf PROPERTIES  PASS_REGULAR_EXPRESSION "\\(TRACE\\) Added log stream to file" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_core/test_01-6_globalconfig_missing_model.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_core/test_01-6_globalconfig_missing_model.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_core/test_01-6_globalconfig_missing_model.conf ")
set_tests_properties(test_core/test_01-6_globalconfig_missing_model.conf PROPERTIES  PASS_REGULAR_EXPRESSION "Could not find a detector model of type 'missing_model'" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_core/test_01-7_globalconfig_random_seed.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_core/test_01-7_globalconfig_random_seed.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_core/test_01-7_globalconfig_random_seed.conf ")
set_tests_properties(test_core/test_01-7_globalconfig_random_seed.conf PROPERTIES  PASS_REGULAR_EXPRESSION "\\(STATUS\\) Initialized PRNG with configured seed 123456" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_core/test_01-8_globalconfig_random_seed_core.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_core/test_01-8_globalconfig_random_seed_core.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_core/test_01-8_globalconfig_random_seed_core.conf ")
set_tests_properties(test_core/test_01-8_globalconfig_random_seed_core.conf PROPERTIES  PASS_REGULAR_EXPRESSION "\\(STATUS\\) Initialized core PRNG with configured seed 654321" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_core/test_02-1_specialization_unique_name.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_core/test_02-1_specialization_unique_name.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_core/test_02-1_specialization_unique_name.conf ")
set_tests_properties(test_core/test_02-1_specialization_unique_name.conf PROPERTIES  PASS_REGULAR_EXPRESSION "Value \"dut\" of key 'name' in section 'DepositionGeant4' is not valid: unique modules cannot be specialized using the \"name\" keyword." WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_core/test_02-2_specialization_unique_type.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_core/test_02-2_specialization_unique_type.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_core/test_02-2_specialization_unique_type.conf ")
set_tests_properties(test_core/test_02-2_specialization_unique_type.conf PROPERTIES  PASS_REGULAR_EXPRESSION "Value \"test\" of key 'type' in section 'DepositionGeant4' is not valid: unique modules cannot be specialized using the \"type\" keyword." WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_core/test_03-1_geometry_g4_coordinate_system.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_core/test_03-1_geometry_g4_coordinate_system.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_core/test_03-1_geometry_g4_coordinate_system.conf ")
set_tests_properties(test_core/test_03-1_geometry_g4_coordinate_system.conf PROPERTIES  FAIL_REGULAR_EXPRESSION "Difference G4 to internal" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_core/test_03-2_geometry_rotations.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_core/test_03-2_geometry_rotations.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_core/test_03-2_geometry_rotations.conf ")
set_tests_properties(test_core/test_03-2_geometry_rotations.conf PROPERTIES  PASS_REGULAR_EXPRESSION "Orientation: \\(9.00002deg,171deg,178.55deg\\)" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_core/test_03-3_geometry_misaligned.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_core/test_03-3_geometry_misaligned.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_core/test_03-3_geometry_misaligned.conf ")
set_tests_properties(test_core/test_03-3_geometry_misaligned.conf PROPERTIES  PASS_REGULAR_EXPRESSION "\\(DEBUG\\)  misaligned: \\(9.04007deg,170.886deg,178.731deg\\)" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_core/test_03-4_geometry_overwrite.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_core/test_03-4_geometry_overwrite.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_core/test_03-4_geometry_overwrite.conf ")
set_tests_properties(test_core/test_03-4_geometry_overwrite.conf PROPERTIES  PASS_REGULAR_EXPRESSION "\\(TRACE\\) \\[I:GeometryBuilderGeant4\\]  Sensor dimensions: \\(1.3,2.4,0.7\\)" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_core/test_04-1_configuration_cli_change.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_core/test_04-1_configuration_cli_change.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_core/test_04-1_configuration_cli_change.conf  -o ElectricFieldReader:mydetector2.bias_voltage=111V")
set_tests_properties(test_core/test_04-1_configuration_cli_change.conf PROPERTIES  PASS_REGULAR_EXPRESSION "\\[I:ElectricFieldReader:mydetector2\\] Setting linear electric field from 111V bias voltage and 150V depletion voltage" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_core/test_04-2_configuration_cli_nochange.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_core/test_04-2_configuration_cli_nochange.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_core/test_04-2_configuration_cli_nochange.conf  -o ElectricFieldReader:mydetector2.bias_voltage=111V")
set_tests_properties(test_core/test_04-2_configuration_cli_nochange.conf PROPERTIES  PASS_REGULAR_EXPRESSION "\\[I:ElectricFieldReader:mydetector\\] Setting linear electric field from 100V bias voltage and 150V depletion voltage" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_core/test_05-1_overwrite_same_denied.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_core/test_05-1_overwrite_same_denied.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_core/test_05-1_overwrite_same_denied.conf ")
set_tests_properties(test_core/test_05-1_overwrite_same_denied.conf PROPERTIES  PASS_REGULAR_EXPRESSION "Overwriting of existing file" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
add_test(test_core/test_05-2_overwrite_module_allowed.conf "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/run_directory.sh" "output/test_core/test_05-2_overwrite_module_allowed.conf" "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/bin/allpix -c /Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests/test_core/test_05-2_overwrite_module_allowed.conf ")
set_tests_properties(test_core/test_05-2_overwrite_module_allowed.conf PROPERTIES  PASS_REGULAR_EXPRESSION "\\(WARNING\\) \\[I:TextWriter:test\\] File" WORKING_DIRECTORY "/Users/sebastienmurphy/Geant4/G-Ray/Dev/allpix-squared/etc/unittests")
