set(_AMENT_PACKAGE_NAME "moveit_py")
set(moveit_py_VERSION "2.12.0")
set(moveit_py_MAINTAINER "Peter David Fagan <peterdavidfagan@gmail.com>")
set(moveit_py_BUILD_DEPENDS "pybind11_vendor" "rclcpp" "rclpy" "geometry_msgs" "octomap_msgs" "moveit_ros_planning_interface" "moveit_ros_planning" "moveit_core")
set(moveit_py_BUILDTOOL_DEPENDS "ament_cmake")
set(moveit_py_BUILD_EXPORT_DEPENDS "rclcpp" "rclpy" "geometry_msgs" "octomap_msgs" "moveit_ros_planning_interface" "moveit_ros_planning" "moveit_core")
set(moveit_py_BUILDTOOL_EXPORT_DEPENDS )
set(moveit_py_EXEC_DEPENDS "ament_index_python" "rclcpp" "rclpy" "geometry_msgs" "octomap_msgs" "moveit_ros_planning_interface" "moveit_ros_planning" "moveit_core")
set(moveit_py_TEST_DEPENDS "ament_cmake_pytest" "python3-pytest")
set(moveit_py_GROUP_DEPENDS )
set(moveit_py_MEMBER_OF_GROUPS )
set(moveit_py_DEPRECATED "")
set(moveit_py_EXPORT_TAGS)
list(APPEND moveit_py_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
