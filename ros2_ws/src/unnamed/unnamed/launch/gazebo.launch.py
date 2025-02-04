import os
import launch
import launch_ros.actions
from ament_index_python.packages import get_package_share_directory
from launch.substitutions import PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    """Launch Gazebo with an empty world."""
    package_name = "unnamed"
    package_path = get_package_share_directory(package_name)
    
    world_path = os.path.join(package_path, "worlds", "empty_world.sdf")

    return launch.LaunchDescription([
        launch_ros.actions.Node(
            package="ros_gz_sim",
            executable="gz_sim",
            arguments=[world_path],
            output="screen",
        ),
    ])

