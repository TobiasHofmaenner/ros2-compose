# CMake generated Testfile for 
# Source directory: /root/ros2_ws/src/moveit2/moveit_py
# Build directory: /root/ros2_ws/build/moveit_py
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[test_robot_model]=] "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/root/ros2_ws/build/moveit_py/test_results/moveit_py/test_robot_model.xunit.xml" "--package-name" "moveit_py" "--output-file" "/root/ros2_ws/build/moveit_py/ament_cmake_pytest/test_robot_model.txt" "--append-env" "AMENT_PREFIX_INDEX=" "PYTHONPATH=/root/ros2_ws/build/moveit_py" "--command" "/usr/bin/python3" "-u" "-m" "pytest" "/root/ros2_ws/src/moveit2/moveit_py/test/unit/test_robot_model.py" "-o" "cache_dir=/root/ros2_ws/build/moveit_py/ament_cmake_pytest/test_robot_model/.cache" "--junit-xml=/root/ros2_ws/build/moveit_py/test_results/moveit_py/test_robot_model.xunit.xml" "--junit-prefix=moveit_py")
set_tests_properties([=[test_robot_model]=] PROPERTIES  LABELS "pytest" TIMEOUT "60" WORKING_DIRECTORY "/root/ros2_ws/src/moveit2/moveit_py" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_pytest/cmake/ament_add_pytest_test.cmake;177;ament_add_test;/root/ros2_ws/src/moveit2/moveit_py/CMakeLists.txt;90;ament_add_pytest_test;/root/ros2_ws/src/moveit2/moveit_py/CMakeLists.txt;0;")
add_test([=[test_robot_state]=] "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/root/ros2_ws/build/moveit_py/test_results/moveit_py/test_robot_state.xunit.xml" "--package-name" "moveit_py" "--output-file" "/root/ros2_ws/build/moveit_py/ament_cmake_pytest/test_robot_state.txt" "--append-env" "AMENT_PREFIX_INDEX=" "PYTHONPATH=/root/ros2_ws/build/moveit_py" "--command" "/usr/bin/python3" "-u" "-m" "pytest" "/root/ros2_ws/src/moveit2/moveit_py/test/unit/test_robot_state.py" "-o" "cache_dir=/root/ros2_ws/build/moveit_py/ament_cmake_pytest/test_robot_state/.cache" "--junit-xml=/root/ros2_ws/build/moveit_py/test_results/moveit_py/test_robot_state.xunit.xml" "--junit-prefix=moveit_py")
set_tests_properties([=[test_robot_state]=] PROPERTIES  LABELS "pytest" TIMEOUT "60" WORKING_DIRECTORY "/root/ros2_ws/src/moveit2/moveit_py" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_pytest/cmake/ament_add_pytest_test.cmake;177;ament_add_test;/root/ros2_ws/src/moveit2/moveit_py/CMakeLists.txt;90;ament_add_pytest_test;/root/ros2_ws/src/moveit2/moveit_py/CMakeLists.txt;0;")
subdirs("src/moveit/moveit_py_utils")
