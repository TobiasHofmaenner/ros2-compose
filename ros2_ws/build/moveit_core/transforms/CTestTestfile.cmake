# CMake generated Testfile for 
# Source directory: /root/ros2_ws/src/moveit2/moveit_core/transforms
# Build directory: /root/ros2_ws/build/moveit_core/transforms
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[test_transforms]=] "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/root/ros2_ws/build/moveit_core/test_results/moveit_core/test_transforms.gtest.xml" "--package-name" "moveit_core" "--output-file" "/root/ros2_ws/build/moveit_core/ament_cmake_gtest/test_transforms.txt" "--command" "/root/ros2_ws/build/moveit_core/transforms/test_transforms" "--gtest_output=xml:/root/ros2_ws/build/moveit_core/test_results/moveit_core/test_transforms.gtest.xml")
set_tests_properties([=[test_transforms]=] PROPERTIES  LABELS "gtest" REQUIRED_FILES "/root/ros2_ws/build/moveit_core/transforms/test_transforms" TIMEOUT "60" WORKING_DIRECTORY "/root/ros2_ws/build/moveit_core/transforms" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;95;ament_add_test;/opt/ros/jazzy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/root/ros2_ws/src/moveit2/moveit_core/transforms/CMakeLists.txt;24;ament_add_gtest;/root/ros2_ws/src/moveit2/moveit_core/transforms/CMakeLists.txt;0;")
