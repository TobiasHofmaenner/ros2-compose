import os
import shutil
import launch
import launch_ros.actions
from ament_index_python.packages import get_package_share_directory

def prepare_model_assets():
    """Ensure necessary directories exist and copy meshes if needed."""
    base_path = "/root/ros2_ws/install/unnamed/share/unnamed"
    target_path = os.path.join(base_path, "unnamed")

    # Ensure the target directory exists
    os.makedirs(target_path, exist_ok=True)

    # Source and destination paths for meshes
    source_meshes = os.path.join(base_path, "meshes")
    target_meshes = os.path.join(target_path, "meshes")

    # Copy meshes if not already present
    if not os.path.exists(target_meshes):
        print(f"🔄 Copying meshes to {target_meshes}")
        shutil.copytree(source_meshes, target_meshes)
        print("✅ Meshes copied successfully!")
    else:
        print("✅ Meshes already exist, skipping copy.")

def generate_launch_description():
    """Launch Gazebo and spawn the robot from a URDF file."""
    prepare_model_assets()

    package_name = "unnamed"
    package_path = get_package_share_directory(package_name)

    urdf_path = os.path.join(package_path, "urdf", "unnamed_relpath.urdf")

    return launch.LaunchDescription([
        # Start Gazebo with an empty world
        launch.actions.ExecuteProcess(
            cmd=["gz", "sim", "empty.sdf"],
            output="screen"
        ),

        # Wait a moment for Gazebo to start
        launch.actions.TimerAction(
            period=2.0,
            actions=[
                launch.actions.ExecuteProcess(
                    cmd=[
                        "gz", "service", "-s", "/world/empty/create",
                        "--reqtype", "gz.msgs.EntityFactory",
                        "--reptype", "gz.msgs.Boolean",
                        "--timeout", "1000",
                        "--req", f'sdf_filename: \"{urdf_path}\", name: \"platform\"'
                    ],
                    output="screen"
                )
            ]
        )
    ])

