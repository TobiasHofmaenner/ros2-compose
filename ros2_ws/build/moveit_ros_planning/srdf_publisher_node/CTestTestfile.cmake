# CMake generated Testfile for 
# Source directory: /root/ros2_ws/src/moveit2/moveit_ros/planning/srdf_publisher_node
# Build directory: /root/ros2_ws/build/moveit_ros_planning/srdf_publisher_node
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[test-srdf_publisher]=] "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/root/ros2_ws/build/moveit_ros_planning/test_results/moveit_ros_planning/test-srdf_publisher.xunit.xml" "--package-name" "moveit_ros_planning" "--output-file" "/root/ros2_ws/build/moveit_ros_planning/launch_test/test-srdf_publisher.txt" "--command" "/usr/bin/python3" "-m" "launch_testing.launch_test" "/root/ros2_ws/src/moveit2/moveit_ros/planning/srdf_publisher_node/test/srdf_publisher_test.py" "--junit-xml=/root/ros2_ws/build/moveit_ros_planning/test_results/moveit_ros_planning/test-srdf_publisher.xunit.xml" "--package-name=moveit_ros_planning")
set_tests_properties([=[test-srdf_publisher]=] PROPERTIES  LABELS "launch_test" TIMEOUT "60" WORKING_DIRECTORY "/root/ros2_ws/build/moveit_ros_planning/srdf_publisher_node" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/launch_testing_ament_cmake/cmake/add_launch_test.cmake;131;ament_add_test;/root/ros2_ws/src/moveit2/moveit_ros/planning/srdf_publisher_node/CMakeLists.txt;8;add_launch_test;/root/ros2_ws/src/moveit2/moveit_ros/planning/srdf_publisher_node/CMakeLists.txt;0;")
