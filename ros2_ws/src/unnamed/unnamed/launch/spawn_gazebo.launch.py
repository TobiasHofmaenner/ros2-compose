import os
import launch
import launch_ros.actions
from ament_index_python.packages import get_package_share_directory
import subprocess

def convert_urdf_to_sdf():
    """Convert URDF to SDF using `gz sdf`."""
    package_name = "unnamed"
    package_path = get_package_share_directory(package_name)

    urdf_path = os.path.join(package_path, "urdf", "unnamed_relpath.urdf")
    sdf_path = os.path.join(package_path, "sdf", "unnamed.sdf")

    print(f"🔄 Converting {urdf_path} to {sdf_path}")

    os.makedirs(os.path.dirname(sdf_path), exist_ok=True)
    result = subprocess.run(["gz", "sdf", "-p", urdf_path], capture_output=True, text=True)
    
    if result.returncode == 0:
        with open(sdf_path, "w") as sdf_file:
            sdf_file.write(result.stdout)
        print("✅ Conversion successful!")
    else:
        print(f"❌ Conversion failed:\n{result.stderr}")
        return None  # Return None to indicate failure
    
    return sdf_path

def generate_launch_description():
    """Launch Gazebo, spawn the robot, and start controllers."""
    sdf_path = convert_urdf_to_sdf()
    if not sdf_path:
        return launch.LaunchDescription([])  # Stop launch if conversion failed

    package_name = "unnamed"
    package_path = get_package_share_directory(package_name)

    world_path = os.path.join(package_path, "worlds", "empty_world.sdf")
    config_path = os.path.join(package_path, "config", "ros2_control.yaml")

    if not os.path.exists(config_path):
        print(f"⚠️ Warning: Config file {config_path} not found! Controllers may not load.")

    return launch.LaunchDescription([
        # Start Gazebo
        launch.actions.ExecuteProcess(
            cmd=["gz", "sim", "-r", world_path],
            output="screen"
        ),

        # Spawn the robot in Gazebo
        launch.actions.ExecuteProcess(
            cmd=["gz", "service", "-s", "/world/default/create",
                 "--reqtype", "gz.msgs.EntityFactory",
                 "--reptype", "gz.msgs.Boolean",
                 "--timeout", "1000",
                 f"--req", f'sdf_filename: "{sdf_path}", name: "unnamed"'],
            output="screen"
        ),

        # Start `ros2_control`
        launch_ros.actions.Node(
            package="controller_manager",
            executable="ros2_control_node",
            parameters=[config_path],
            output="screen"
        ),

        # Load controllers (Using `ros2 control load_controller` directly)
        launch.actions.TimerAction(
            period=2.0,
            actions=[
                launch.actions.ExecuteProcess(
                    cmd=["ros2", "control", "load_controller", "--set-state", "active", "joint_state_broadcaster"],
                    output="screen"
                ),
                launch.actions.ExecuteProcess(
                    cmd=["ros2", "control", "load_controller", "--set-state", "active", "position_controller"],
                    output="screen"
                )
            ]
        )
    ])

