from launch import LaunchDescription
from launch_ros.actions import Node
import os

def generate_launch_description():
    # Locate the URDF file
    urdf_file = os.path.join(
        os.path.dirname(__file__), '..', 'urdf', 'unnamed.urdf')

    # Read the URDF contents
    with open(urdf_file, 'r') as infp:
        robot_description = infp.read()

    return LaunchDescription([
        # Joint State Publisher GUI
        Node(
            package='joint_state_publisher_gui',
            executable='joint_state_publisher_gui',
            name='joint_state_publisher_gui',
            output='screen'
        ),

        # Robot State Publisher
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            parameters=[{'robot_description': robot_description}],
            output='screen'
        ),

        # Static Transform Publisher (world → Body_link)
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            arguments=['0', '0', '0', '0', '0', '0', 'world', 'Body_link'],
            output='screen'
        ),

        # RViz
        Node(
            package='rviz2',
            executable='rviz2',
            arguments=['-d', os.path.join(os.path.dirname(__file__), '..', 'urdf', 'stage.rviz')],
            output='screen'
        )
    ])
