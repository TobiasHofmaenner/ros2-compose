# Install script for directory: /root/ros2_ws/src/moveit2/moveit_ros/visualization

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/root/ros2_ws/install/moveit_ros_visualization")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/root/ros2_ws/build/moveit_ros_visualization/rviz_plugin_render_tools/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/root/ros2_ws/build/moveit_ros_visualization/robot_state_rviz_plugin/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/root/ros2_ws/build/moveit_ros_visualization/planning_scene_rviz_plugin/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/root/ros2_ws/build/moveit_ros_visualization/motion_planning_rviz_plugin/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/root/ros2_ws/build/moveit_ros_visualization/trajectory_rviz_plugin/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_visualization" TYPE DIRECTORY FILES "/root/ros2_ws/src/moveit2/moveit_ros/visualization/icons")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_visualization" TYPE FILE FILES "/root/ros2_ws/src/moveit2/moveit_ros/visualization/motion_planning_rviz_plugin_description.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_visualization" TYPE FILE FILES "/root/ros2_ws/src/moveit2/moveit_ros/visualization/trajectory_rviz_plugin_description.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_visualization" TYPE FILE FILES "/root/ros2_ws/src/moveit2/moveit_ros/visualization/planning_scene_rviz_plugin_description.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_visualization" TYPE FILE FILES "/root/ros2_ws/src/moveit2/moveit_ros/visualization/robot_state_rviz_plugin_description.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_motion_planning_rviz_plugin.so.2.12.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_motion_planning_rviz_plugin.so.2.12.0")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_motion_planning_rviz_plugin.so.2.12.0"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/ros2_ws/build/moveit_ros_visualization/motion_planning_rviz_plugin/libmoveit_motion_planning_rviz_plugin.so.2.12.0")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_motion_planning_rviz_plugin.so.2.12.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_motion_planning_rviz_plugin.so.2.12.0")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_motion_planning_rviz_plugin.so.2.12.0"
         OLD_RPATH "/root/ros2_ws/build/moveit_ros_visualization/motion_planning_rviz_plugin:/root/ros2_ws/install/moveit_ros_robot_interaction/lib:/root/ros2_ws/build/moveit_ros_visualization/planning_scene_rviz_plugin:/root/ros2_ws/build/moveit_ros_visualization/rviz_plugin_render_tools:/opt/ros/jazzy/lib/x86_64-linux-gnu:/root/ros2_ws/install/moveit_ros_planning/lib:/root/ros2_ws/install/moveit_core/lib:/root/ros2_ws/install/moveit_msgs/lib:/opt/ros/jazzy/lib:/opt/ros/jazzy/opt/rviz_ogre_vendor/lib:/root/ros2_ws/install/moveit_ros_planning_interface/lib:/root/ros2_ws/install/moveit_ros_warehouse/lib:/root/ros2_ws/install/moveit_ros_move_group/lib:/root/ros2_ws/install/moveit_ros_occupancy_map_monitor/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_motion_planning_rviz_plugin.so.2.12.0")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/ros2_ws/build/moveit_ros_visualization/motion_planning_rviz_plugin/libmoveit_motion_planning_rviz_plugin.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_motion_planning_rviz_plugin_core.so.2.12.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_motion_planning_rviz_plugin_core.so.2.12.0")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_motion_planning_rviz_plugin_core.so.2.12.0"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/ros2_ws/build/moveit_ros_visualization/motion_planning_rviz_plugin/libmoveit_motion_planning_rviz_plugin_core.so.2.12.0")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_motion_planning_rviz_plugin_core.so.2.12.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_motion_planning_rviz_plugin_core.so.2.12.0")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_motion_planning_rviz_plugin_core.so.2.12.0"
         OLD_RPATH "/root/ros2_ws/build/moveit_ros_visualization/planning_scene_rviz_plugin:/root/ros2_ws/install/moveit_ros_robot_interaction/lib:/root/ros2_ws/build/moveit_ros_visualization/rviz_plugin_render_tools:/opt/ros/jazzy/lib/x86_64-linux-gnu:/root/ros2_ws/install/moveit_ros_planning/lib:/root/ros2_ws/install/moveit_core/lib:/root/ros2_ws/install/moveit_msgs/lib:/opt/ros/jazzy/lib:/opt/ros/jazzy/opt/rviz_ogre_vendor/lib:/root/ros2_ws/install/moveit_ros_planning_interface/lib:/root/ros2_ws/install/moveit_ros_warehouse/lib:/root/ros2_ws/install/moveit_ros_move_group/lib:/root/ros2_ws/install/moveit_ros_occupancy_map_monitor/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_motion_planning_rviz_plugin_core.so.2.12.0")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/ros2_ws/build/moveit_ros_visualization/motion_planning_rviz_plugin/libmoveit_motion_planning_rviz_plugin_core.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_planning_scene_rviz_plugin.so.2.12.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_planning_scene_rviz_plugin.so.2.12.0")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_planning_scene_rviz_plugin.so.2.12.0"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/ros2_ws/build/moveit_ros_visualization/planning_scene_rviz_plugin/libmoveit_planning_scene_rviz_plugin.so.2.12.0")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_planning_scene_rviz_plugin.so.2.12.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_planning_scene_rviz_plugin.so.2.12.0")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_planning_scene_rviz_plugin.so.2.12.0"
         OLD_RPATH "/root/ros2_ws/build/moveit_ros_visualization/planning_scene_rviz_plugin:/root/ros2_ws/build/moveit_ros_visualization/rviz_plugin_render_tools:/opt/ros/jazzy/lib/x86_64-linux-gnu:/root/ros2_ws/install/moveit_ros_planning/lib:/root/ros2_ws/install/moveit_core/lib:/root/ros2_ws/install/moveit_msgs/lib:/opt/ros/jazzy/lib:/opt/ros/jazzy/opt/rviz_ogre_vendor/lib:/root/ros2_ws/install/moveit_ros_planning_interface/lib:/root/ros2_ws/install/moveit_ros_move_group/lib:/root/ros2_ws/install/moveit_ros_warehouse/lib:/root/ros2_ws/install/moveit_ros_occupancy_map_monitor/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_planning_scene_rviz_plugin.so.2.12.0")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/ros2_ws/build/moveit_ros_visualization/planning_scene_rviz_plugin/libmoveit_planning_scene_rviz_plugin.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_planning_scene_rviz_plugin_core.so.2.12.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_planning_scene_rviz_plugin_core.so.2.12.0")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_planning_scene_rviz_plugin_core.so.2.12.0"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/ros2_ws/build/moveit_ros_visualization/planning_scene_rviz_plugin/libmoveit_planning_scene_rviz_plugin_core.so.2.12.0")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_planning_scene_rviz_plugin_core.so.2.12.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_planning_scene_rviz_plugin_core.so.2.12.0")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_planning_scene_rviz_plugin_core.so.2.12.0"
         OLD_RPATH "/root/ros2_ws/build/moveit_ros_visualization/rviz_plugin_render_tools:/root/ros2_ws/install/moveit_ros_planning_interface/lib:/opt/ros/jazzy/lib/x86_64-linux-gnu:/root/ros2_ws/install/moveit_ros_planning/lib:/root/ros2_ws/install/moveit_core/lib:/root/ros2_ws/install/moveit_msgs/lib:/opt/ros/jazzy/lib:/opt/ros/jazzy/opt/rviz_ogre_vendor/lib:/root/ros2_ws/install/moveit_ros_move_group/lib:/root/ros2_ws/install/moveit_ros_warehouse/lib:/root/ros2_ws/install/moveit_ros_occupancy_map_monitor/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_planning_scene_rviz_plugin_core.so.2.12.0")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/ros2_ws/build/moveit_ros_visualization/planning_scene_rviz_plugin/libmoveit_planning_scene_rviz_plugin_core.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_robot_state_rviz_plugin.so.2.12.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_robot_state_rviz_plugin.so.2.12.0")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_robot_state_rviz_plugin.so.2.12.0"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/ros2_ws/build/moveit_ros_visualization/robot_state_rviz_plugin/libmoveit_robot_state_rviz_plugin.so.2.12.0")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_robot_state_rviz_plugin.so.2.12.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_robot_state_rviz_plugin.so.2.12.0")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_robot_state_rviz_plugin.so.2.12.0"
         OLD_RPATH "/root/ros2_ws/build/moveit_ros_visualization/robot_state_rviz_plugin:/root/ros2_ws/build/moveit_ros_visualization/rviz_plugin_render_tools:/opt/ros/jazzy/lib/x86_64-linux-gnu:/root/ros2_ws/install/moveit_ros_planning/lib:/root/ros2_ws/install/moveit_core/lib:/root/ros2_ws/install/moveit_msgs/lib:/opt/ros/jazzy/lib:/opt/ros/jazzy/opt/rviz_ogre_vendor/lib:/root/ros2_ws/install/moveit_ros_occupancy_map_monitor/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_robot_state_rviz_plugin.so.2.12.0")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/ros2_ws/build/moveit_ros_visualization/robot_state_rviz_plugin/libmoveit_robot_state_rviz_plugin.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_robot_state_rviz_plugin_core.so.2.12.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_robot_state_rviz_plugin_core.so.2.12.0")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_robot_state_rviz_plugin_core.so.2.12.0"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/ros2_ws/build/moveit_ros_visualization/robot_state_rviz_plugin/libmoveit_robot_state_rviz_plugin_core.so.2.12.0")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_robot_state_rviz_plugin_core.so.2.12.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_robot_state_rviz_plugin_core.so.2.12.0")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_robot_state_rviz_plugin_core.so.2.12.0"
         OLD_RPATH "/root/ros2_ws/build/moveit_ros_visualization/rviz_plugin_render_tools:/root/ros2_ws/install/moveit_ros_planning/lib:/opt/ros/jazzy/lib/x86_64-linux-gnu:/root/ros2_ws/install/moveit_core/lib:/root/ros2_ws/install/moveit_msgs/lib:/opt/ros/jazzy/lib:/opt/ros/jazzy/opt/rviz_ogre_vendor/lib:/root/ros2_ws/install/moveit_ros_occupancy_map_monitor/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_robot_state_rviz_plugin_core.so.2.12.0")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/ros2_ws/build/moveit_ros_visualization/robot_state_rviz_plugin/libmoveit_robot_state_rviz_plugin_core.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_rviz_plugin_render_tools.so.2.12.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_rviz_plugin_render_tools.so.2.12.0")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_rviz_plugin_render_tools.so.2.12.0"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/ros2_ws/build/moveit_ros_visualization/rviz_plugin_render_tools/libmoveit_rviz_plugin_render_tools.so.2.12.0")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_rviz_plugin_render_tools.so.2.12.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_rviz_plugin_render_tools.so.2.12.0")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_rviz_plugin_render_tools.so.2.12.0"
         OLD_RPATH "/root/ros2_ws/install/moveit_core/lib:/opt/ros/jazzy/lib/x86_64-linux-gnu:/root/ros2_ws/install/moveit_msgs/lib:/opt/ros/jazzy/lib:/opt/ros/jazzy/opt/rviz_ogre_vendor/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_rviz_plugin_render_tools.so.2.12.0")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/ros2_ws/build/moveit_ros_visualization/rviz_plugin_render_tools/libmoveit_rviz_plugin_render_tools.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_trajectory_rviz_plugin.so.2.12.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_trajectory_rviz_plugin.so.2.12.0")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_trajectory_rviz_plugin.so.2.12.0"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/ros2_ws/build/moveit_ros_visualization/trajectory_rviz_plugin/libmoveit_trajectory_rviz_plugin.so.2.12.0")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_trajectory_rviz_plugin.so.2.12.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_trajectory_rviz_plugin.so.2.12.0")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_trajectory_rviz_plugin.so.2.12.0"
         OLD_RPATH "/root/ros2_ws/build/moveit_ros_visualization/trajectory_rviz_plugin:/root/ros2_ws/build/moveit_ros_visualization/planning_scene_rviz_plugin:/root/ros2_ws/build/moveit_ros_visualization/rviz_plugin_render_tools:/opt/ros/jazzy/lib/x86_64-linux-gnu:/root/ros2_ws/install/moveit_ros_planning/lib:/root/ros2_ws/install/moveit_core/lib:/root/ros2_ws/install/moveit_msgs/lib:/opt/ros/jazzy/lib:/opt/ros/jazzy/opt/rviz_ogre_vendor/lib:/root/ros2_ws/install/moveit_ros_planning_interface/lib:/root/ros2_ws/install/moveit_ros_move_group/lib:/root/ros2_ws/install/moveit_ros_warehouse/lib:/root/ros2_ws/install/moveit_ros_occupancy_map_monitor/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_trajectory_rviz_plugin.so.2.12.0")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/ros2_ws/build/moveit_ros_visualization/trajectory_rviz_plugin/libmoveit_trajectory_rviz_plugin.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_trajectory_rviz_plugin_core.so.2.12.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_trajectory_rviz_plugin_core.so.2.12.0")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_trajectory_rviz_plugin_core.so.2.12.0"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/ros2_ws/build/moveit_ros_visualization/trajectory_rviz_plugin/libmoveit_trajectory_rviz_plugin_core.so.2.12.0")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_trajectory_rviz_plugin_core.so.2.12.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_trajectory_rviz_plugin_core.so.2.12.0")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_trajectory_rviz_plugin_core.so.2.12.0"
         OLD_RPATH "/root/ros2_ws/build/moveit_ros_visualization/planning_scene_rviz_plugin:/opt/ros/jazzy/opt/rviz_ogre_vendor/lib:/root/ros2_ws/build/moveit_ros_visualization/rviz_plugin_render_tools:/opt/ros/jazzy/lib/x86_64-linux-gnu:/root/ros2_ws/install/moveit_ros_planning/lib:/root/ros2_ws/install/moveit_core/lib:/root/ros2_ws/install/moveit_msgs/lib:/opt/ros/jazzy/lib:/root/ros2_ws/install/moveit_ros_planning_interface/lib:/root/ros2_ws/install/moveit_ros_move_group/lib:/root/ros2_ws/install/moveit_ros_warehouse/lib:/root/ros2_ws/install/moveit_ros_occupancy_map_monitor/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_trajectory_rviz_plugin_core.so.2.12.0")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/ros2_ws/build/moveit_ros_visualization/trajectory_rviz_plugin/libmoveit_trajectory_rviz_plugin_core.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_visualization/environment" TYPE FILE FILES "/opt/ros/jazzy/lib/python3.12/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_visualization/environment" TYPE FILE FILES "/root/ros2_ws/build/moveit_ros_visualization/ament_cmake_environment_hooks/library_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/root/ros2_ws/build/moveit_ros_visualization/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/moveit_ros_visualization")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/root/ros2_ws/build/moveit_ros_visualization/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/moveit_ros_visualization")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_visualization/environment" TYPE FILE FILES "/opt/ros/jazzy/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_visualization/environment" TYPE FILE FILES "/root/ros2_ws/build/moveit_ros_visualization/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_visualization/environment" TYPE FILE FILES "/opt/ros/jazzy/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_visualization/environment" TYPE FILE FILES "/root/ros2_ws/build/moveit_ros_visualization/ament_cmake_environment_hooks/path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_visualization" TYPE FILE FILES "/root/ros2_ws/build/moveit_ros_visualization/ament_cmake_environment_hooks/local_setup.bash")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_visualization" TYPE FILE FILES "/root/ros2_ws/build/moveit_ros_visualization/ament_cmake_environment_hooks/local_setup.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_visualization" TYPE FILE FILES "/root/ros2_ws/build/moveit_ros_visualization/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_visualization" TYPE FILE FILES "/root/ros2_ws/build/moveit_ros_visualization/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_visualization" TYPE FILE FILES "/root/ros2_ws/build/moveit_ros_visualization/ament_cmake_environment_hooks/package.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/root/ros2_ws/build/moveit_ros_visualization/ament_cmake_index/share/ament_index/resource_index/packages/moveit_ros_visualization")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rviz_common__pluginlib__plugin" TYPE FILE FILES "/root/ros2_ws/build/moveit_ros_visualization/ament_cmake_index/share/ament_index/resource_index/rviz_common__pluginlib__plugin/moveit_ros_visualization")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/moveit_ros_visualization/cmake/moveit_ros_visualizationTargetsExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/moveit_ros_visualization/cmake/moveit_ros_visualizationTargetsExport.cmake"
         "/root/ros2_ws/build/moveit_ros_visualization/CMakeFiles/Export/476898f065f957e1e44afadd826e91a4/moveit_ros_visualizationTargetsExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/moveit_ros_visualization/cmake/moveit_ros_visualizationTargetsExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/moveit_ros_visualization/cmake/moveit_ros_visualizationTargetsExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_visualization/cmake" TYPE FILE FILES "/root/ros2_ws/build/moveit_ros_visualization/CMakeFiles/Export/476898f065f957e1e44afadd826e91a4/moveit_ros_visualizationTargetsExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_visualization/cmake" TYPE FILE FILES "/root/ros2_ws/build/moveit_ros_visualization/CMakeFiles/Export/476898f065f957e1e44afadd826e91a4/moveit_ros_visualizationTargetsExport-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_visualization/cmake" TYPE FILE FILES "/root/ros2_ws/src/moveit2/moveit_ros/visualization/ConfigExtras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_visualization/cmake" TYPE FILE FILES "/root/ros2_ws/build/moveit_ros_visualization/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_visualization/cmake" TYPE FILE FILES "/root/ros2_ws/build/moveit_ros_visualization/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_visualization/cmake" TYPE FILE FILES
    "/root/ros2_ws/build/moveit_ros_visualization/ament_cmake_core/moveit_ros_visualizationConfig.cmake"
    "/root/ros2_ws/build/moveit_ros_visualization/ament_cmake_core/moveit_ros_visualizationConfig-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_visualization" TYPE FILE FILES "/root/ros2_ws/src/moveit2/moveit_ros/visualization/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/root/ros2_ws/build/moveit_ros_visualization/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
