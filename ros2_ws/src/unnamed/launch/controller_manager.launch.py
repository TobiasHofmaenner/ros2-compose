import launch
import launch_ros.actions
import launch.substitutions
import launch_ros.substitutions

def generate_launch_description():
    return launch.LaunchDescription([
        # Publish the robot description by executing xacro
        launch_ros.actions.Node(
            package="robot_state_publisher",
            executable="robot_state_publisher",
            parameters=[{
                "robot_description": launch.substitutions.Command([
                    "xacro ", launch.substitutions.PathJoinSubstitution([
                        launch_ros.substitutions.FindPackageShare("unnamed"),
                        "urdf", "robot.xacro"
                    ])
                ])
            }],
            output="screen"
        ),

        # Start the controller manager
        launch_ros.actions.Node(
            package="controller_manager",
            executable="ros2_control_node",
            parameters=[launch.substitutions.PathJoinSubstitution([
                launch_ros.substitutions.FindPackageShare("unnamed"),
                "config", "ros2_control.yaml"
            ])],
            output="screen",
        ),

        # Load the joint state broadcaster
        launch_ros.actions.Node(
            package="controller_manager",
            executable="spawner",
            arguments=["joint_state_broadcaster"],
            output="screen",
        ),

        # Load the position controller
        launch_ros.actions.Node(
            package="controller_manager",
            executable="spawner",
            arguments=["joint_position_controller"],
            output="screen",
        ),
    ])

