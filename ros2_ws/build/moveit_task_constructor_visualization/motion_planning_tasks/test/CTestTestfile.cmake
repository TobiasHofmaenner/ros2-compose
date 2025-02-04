# CMake generated Testfile for 
# Source directory: /root/ros2_ws/src/moveit_task_constructor/visualization/motion_planning_tasks/test
# Build directory: /root/ros2_ws/build/moveit_task_constructor_visualization/motion_planning_tasks/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(moveit_task_constructor_visualization-test-merge-models "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/root/ros2_ws/build/moveit_task_constructor_visualization/test_results/moveit_task_constructor_visualization/moveit_task_constructor_visualization-test-merge-models.gtest.xml" "--package-name" "moveit_task_constructor_visualization" "--output-file" "/root/ros2_ws/build/moveit_task_constructor_visualization/ament_cmake_gtest/moveit_task_constructor_visualization-test-merge-models.txt" "--command" "/root/ros2_ws/build/moveit_task_constructor_visualization/motion_planning_tasks/test/moveit_task_constructor_visualization-test-merge-models" "--gtest_output=xml:/root/ros2_ws/build/moveit_task_constructor_visualization/test_results/moveit_task_constructor_visualization/moveit_task_constructor_visualization-test-merge-models.gtest.xml")
set_tests_properties(moveit_task_constructor_visualization-test-merge-models PROPERTIES  LABELS "gtest" REQUIRED_FILES "/root/ros2_ws/build/moveit_task_constructor_visualization/motion_planning_tasks/test/moveit_task_constructor_visualization-test-merge-models" TIMEOUT "60" WORKING_DIRECTORY "/root/ros2_ws/build/moveit_task_constructor_visualization/motion_planning_tasks/test" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;95;ament_add_test;/opt/ros/jazzy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/root/ros2_ws/src/moveit_task_constructor/visualization/motion_planning_tasks/test/CMakeLists.txt;11;ament_add_gtest;/root/ros2_ws/src/moveit_task_constructor/visualization/motion_planning_tasks/test/CMakeLists.txt;0;")
add_test(moveit_task_constructor_visualization-test-solution-models "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/root/ros2_ws/build/moveit_task_constructor_visualization/test_results/moveit_task_constructor_visualization/moveit_task_constructor_visualization-test-solution-models.gtest.xml" "--package-name" "moveit_task_constructor_visualization" "--output-file" "/root/ros2_ws/build/moveit_task_constructor_visualization/ament_cmake_gmock/moveit_task_constructor_visualization-test-solution-models.txt" "--command" "/root/ros2_ws/build/moveit_task_constructor_visualization/motion_planning_tasks/test/moveit_task_constructor_visualization-test-solution-models" "--gtest_output=xml:/root/ros2_ws/build/moveit_task_constructor_visualization/test_results/moveit_task_constructor_visualization/moveit_task_constructor_visualization-test-solution-models.gtest.xml")
set_tests_properties(moveit_task_constructor_visualization-test-solution-models PROPERTIES  LABELS "gmock" REQUIRED_FILES "/root/ros2_ws/build/moveit_task_constructor_visualization/motion_planning_tasks/test/moveit_task_constructor_visualization-test-solution-models" TIMEOUT "60" WORKING_DIRECTORY "/root/ros2_ws/build/moveit_task_constructor_visualization/motion_planning_tasks/test" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_gmock/cmake/ament_add_gmock_test.cmake;98;ament_add_test;/opt/ros/jazzy/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;90;ament_add_gmock_test;/root/ros2_ws/src/moveit_task_constructor/visualization/motion_planning_tasks/test/CMakeLists.txt;15;ament_add_gmock;/root/ros2_ws/src/moveit_task_constructor/visualization/motion_planning_tasks/test/CMakeLists.txt;0;")
add_test(motion_planning_tasks_test_test.launch.py "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/root/ros2_ws/build/moveit_task_constructor_visualization/test_results/moveit_task_constructor_visualization/motion_planning_tasks_test_test.launch.py.xunit.xml" "--package-name" "moveit_task_constructor_visualization" "--output-file" "/root/ros2_ws/build/moveit_task_constructor_visualization/launch_test/motion_planning_tasks_test_test.launch.py.txt" "--command" "/usr/bin/python3" "-m" "launch_testing.launch_test" "/root/ros2_ws/src/moveit_task_constructor/visualization/motion_planning_tasks/test/test.launch.py" "test_binary:=/root/ros2_ws/build/moveit_task_constructor_visualization/motion_planning_tasks/test/moveit_task_constructor_visualization-test-task_model" "--junit-xml=/root/ros2_ws/build/moveit_task_constructor_visualization/test_results/moveit_task_constructor_visualization/motion_planning_tasks_test_test.launch.py.xunit.xml" "--package-name=moveit_task_constructor_visualization")
set_tests_properties(motion_planning_tasks_test_test.launch.py PROPERTIES  LABELS "launch_test" TIMEOUT "60" WORKING_DIRECTORY "/root/ros2_ws/build/moveit_task_constructor_visualization/motion_planning_tasks/test" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/launch_testing_ament_cmake/cmake/add_launch_test.cmake;131;ament_add_test;/root/ros2_ws/src/moveit_task_constructor/visualization/motion_planning_tasks/test/CMakeLists.txt;22;add_launch_test;/root/ros2_ws/src/moveit_task_constructor/visualization/motion_planning_tasks/test/CMakeLists.txt;0;")
subdirs("../../gtest")
subdirs("../../gmock")
