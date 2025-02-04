# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# compile CXX with /usr/bin/c++
CXX_DEFINES = -DBOOST_ATOMIC_DYN_LINK -DBOOST_ATOMIC_NO_LIB -DBOOST_CHRONO_DYN_LINK -DBOOST_CHRONO_NO_LIB -DBOOST_DATE_TIME_DYN_LINK -DBOOST_DATE_TIME_NO_LIB -DBOOST_FILESYSTEM_DYN_LINK -DBOOST_FILESYSTEM_NO_LIB -DBOOST_IOSTREAMS_DYN_LINK -DBOOST_IOSTREAMS_NO_LIB -DBOOST_PROGRAM_OPTIONS_DYN_LINK -DBOOST_PROGRAM_OPTIONS_NO_LIB -DBOOST_REGEX_DYN_LINK -DBOOST_REGEX_NO_LIB -DBOOST_SERIALIZATION_DYN_LINK -DBOOST_SERIALIZATION_NO_LIB -DBOOST_SYSTEM_DYN_LINK -DBOOST_SYSTEM_NO_LIB -DBOOST_THREAD_DYN_LINK -DBOOST_THREAD_NO_LIB -DDEFAULT_RMW_IMPLEMENTATION=rmw_fastrtps_cpp -DFASTCDR_DYN_LINK -DFMT_SHARED -DTINYXML2_IMPORT -D_FILE_OFFSET_BITS=64 -Dmoveit_cpp_EXPORTS

CXX_INCLUDES = -I/root/ros2_ws/src/moveit2/moveit_ros/planning/collision_plugin_loader/include -I/root/ros2_ws/src/moveit2/moveit_ros/planning/constraint_sampler_manager_loader/include -I/root/ros2_ws/src/moveit2/moveit_ros/planning/kinematics_plugin_loader/include -I/root/ros2_ws/src/moveit2/moveit_ros/planning/moveit_cpp/include -I/root/ros2_ws/src/moveit2/moveit_ros/planning/plan_execution/include -I/root/ros2_ws/src/moveit2/moveit_ros/planning/planning_pipeline_interfaces/include -I/root/ros2_ws/src/moveit2/moveit_ros/planning/planning_pipeline/include -I/root/ros2_ws/src/moveit2/moveit_ros/planning/planning_scene_monitor/include -I/root/ros2_ws/src/moveit2/moveit_ros/planning/rdf_loader/include -I/root/ros2_ws/src/moveit2/moveit_ros/planning/robot_model_loader/include -I/root/ros2_ws/src/moveit2/moveit_ros/planning/trajectory_execution_manager/include -I/root/ros2_ws/build/moveit_ros_planning/planning_scene_monitor -I/root/ros2_ws/build/moveit_ros_planning/kinematics_plugin_loader/include -I/root/ros2_ws/build/moveit_ros_planning/planning_pipeline -I/root/ros2_ws/build/moveit_ros_planning/planning_pipeline/include -I/root/ros2_ws/build/moveit_ros_planning/planning_pipeline_interfaces -I/root/ros2_ws/build/moveit_ros_planning/trajectory_execution_manager -isystem /usr/include/eigen3 -isystem /root/ros2_ws/install/moveit_core/include/moveit_core -isystem /opt/ros/jazzy/include/rclcpp -isystem /usr/include/bullet -isystem /opt/ros/jazzy/include/builtin_interfaces -isystem /opt/ros/jazzy/include/rosidl_runtime_c -isystem /opt/ros/jazzy/include/rcutils -isystem /opt/ros/jazzy/include/rosidl_typesupport_interface -isystem /opt/ros/jazzy/include/fastcdr -isystem /opt/ros/jazzy/include/rosidl_runtime_cpp -isystem /opt/ros/jazzy/include/rosidl_typesupport_fastrtps_cpp -isystem /opt/ros/jazzy/include/rmw -isystem /opt/ros/jazzy/include/rosidl_dynamic_typesupport -isystem /opt/ros/jazzy/include/rosidl_typesupport_fastrtps_c -isystem /opt/ros/jazzy/include/rosidl_typesupport_introspection_c -isystem /opt/ros/jazzy/include/rosidl_typesupport_introspection_cpp -isystem /opt/ros/jazzy/include/libstatistics_collector -isystem /opt/ros/jazzy/include/rcl -isystem /opt/ros/jazzy/include/rcl_interfaces -isystem /opt/ros/jazzy/include/service_msgs -isystem /opt/ros/jazzy/include/rcl_logging_interface -isystem /opt/ros/jazzy/include/rcl_yaml_param_parser -isystem /opt/ros/jazzy/include/type_description_interfaces -isystem /opt/ros/jazzy/include/rcpputils -isystem /opt/ros/jazzy/include/statistics_msgs -isystem /opt/ros/jazzy/include/rosgraph_msgs -isystem /opt/ros/jazzy/include/rosidl_typesupport_cpp -isystem /opt/ros/jazzy/include/rosidl_typesupport_c -isystem /opt/ros/jazzy/include/tracetools -isystem /opt/ros/jazzy/include/pluginlib -isystem /opt/ros/jazzy/include/ament_index_cpp -isystem /opt/ros/jazzy/include/class_loader -isystem /opt/ros/jazzy/include/urdf -isystem /opt/ros/jazzy/include/urdfdom -isystem /opt/ros/jazzy/include/urdfdom_headers -isystem /opt/ros/jazzy/include -isystem /opt/ros/jazzy/include/visualization_msgs -isystem /opt/ros/jazzy/include/geometry_msgs -isystem /opt/ros/jazzy/include/std_msgs -isystem /opt/ros/jazzy/include/sensor_msgs -isystem /opt/ros/jazzy/include/tf2_eigen -isystem /opt/ros/jazzy/include/tf2 -isystem /opt/ros/jazzy/include/tf2_ros -isystem /opt/ros/jazzy/include/message_filters -isystem /opt/ros/jazzy/include/rclcpp_action -isystem /opt/ros/jazzy/include/action_msgs -isystem /opt/ros/jazzy/include/unique_identifier_msgs -isystem /opt/ros/jazzy/include/rcl_action -isystem /opt/ros/jazzy/include/tf2_msgs -isystem /opt/ros/jazzy/include/geometric_shapes -isystem /opt/ros/jazzy/include/resource_retriever -isystem /opt/ros/jazzy/include/shape_msgs -isystem /opt/ros/jazzy/include/tf2_geometry_msgs -isystem /opt/ros/jazzy/include/angles -isystem /root/ros2_ws/install/moveit_msgs/include/moveit_msgs -isystem /opt/ros/jazzy/include/object_recognition_msgs -isystem /opt/ros/jazzy/include/octomap_msgs -isystem /opt/ros/jazzy/include/trajectory_msgs -isystem /opt/ros/jazzy/include/rsl -isystem /opt/ros/jazzy/include/kdl_parser -isystem /root/ros2_ws/install/moveit_ros_occupancy_map_monitor/include/moveit_ros_occupancy_map_monitor -isystem /opt/ros/jazzy/include/parameter_traits -isystem /opt/ros/jazzy/include/rclcpp_lifecycle -isystem /opt/ros/jazzy/include/lifecycle_msgs -isystem /opt/ros/jazzy/include/rcl_lifecycle

CXX_FLAGS = -O3 -DNDEBUG -std=c++17 -fPIC -Wall -Wextra -Wwrite-strings -Wunreachable-code -Wpointer-arith -Wredundant-decls -Wcast-qual -Wold-style-cast -Wformat=2 -Wno-maybe-uninitialized

