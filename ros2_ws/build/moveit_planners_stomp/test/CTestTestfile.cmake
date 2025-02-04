# CMake generated Testfile for 
# Source directory: /root/ros2_ws/src/moveit2/moveit_planners/stomp/test
# Build directory: /root/ros2_ws/build/moveit_planners_stomp/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[test_noise_generator]=] "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/root/ros2_ws/build/moveit_planners_stomp/test_results/moveit_planners_stomp/test_noise_generator.gtest.xml" "--package-name" "moveit_planners_stomp" "--output-file" "/root/ros2_ws/build/moveit_planners_stomp/ament_cmake_gtest/test_noise_generator.txt" "--command" "/root/ros2_ws/build/moveit_planners_stomp/test/test_noise_generator" "--gtest_output=xml:/root/ros2_ws/build/moveit_planners_stomp/test_results/moveit_planners_stomp/test_noise_generator.gtest.xml")
set_tests_properties([=[test_noise_generator]=] PROPERTIES  LABELS "gtest" REQUIRED_FILES "/root/ros2_ws/build/moveit_planners_stomp/test/test_noise_generator" TIMEOUT "60" WORKING_DIRECTORY "/root/ros2_ws/build/moveit_planners_stomp/test" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;95;ament_add_test;/opt/ros/jazzy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/root/ros2_ws/src/moveit2/moveit_planners/stomp/test/CMakeLists.txt;2;ament_add_gtest;/root/ros2_ws/src/moveit2/moveit_planners/stomp/test/CMakeLists.txt;0;")
add_test([=[test_cost_functions]=] "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/root/ros2_ws/build/moveit_planners_stomp/test_results/moveit_planners_stomp/test_cost_functions.gtest.xml" "--package-name" "moveit_planners_stomp" "--output-file" "/root/ros2_ws/build/moveit_planners_stomp/ament_cmake_gtest/test_cost_functions.txt" "--command" "/root/ros2_ws/build/moveit_planners_stomp/test/test_cost_functions" "--gtest_output=xml:/root/ros2_ws/build/moveit_planners_stomp/test_results/moveit_planners_stomp/test_cost_functions.gtest.xml")
set_tests_properties([=[test_cost_functions]=] PROPERTIES  LABELS "gtest" REQUIRED_FILES "/root/ros2_ws/build/moveit_planners_stomp/test/test_cost_functions" TIMEOUT "60" WORKING_DIRECTORY "/root/ros2_ws/build/moveit_planners_stomp/test" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;95;ament_add_test;/opt/ros/jazzy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/root/ros2_ws/src/moveit2/moveit_planners/stomp/test/CMakeLists.txt;6;ament_add_gtest;/root/ros2_ws/src/moveit2/moveit_planners/stomp/test/CMakeLists.txt;0;")
subdirs("../gtest")
