import os
import subprocess
import shutil
import launch
import launch_ros.actions
from ament_index_python.packages import get_package_share_directory


def fix_mesh_paths():
    """Move STL files to match the URDF-defined relative path structure."""
    package_name = "unnamed"
    package_path = get_package_share_directory(package_name)

    src_mesh_path = os.path.join(os.path.dirname(__file__), "..", "meshes", "stl")
    dest_mesh_path = os.path.join(package_path, "unnamed", "meshes", "stl")  # Fix path duplication issue

    # Ensure destination folder exists
    os.makedirs(dest_mesh_path, exist_ok=True)

    for file in os.listdir(src_mesh_path):
        if file.endswith(".stl"):
            src_file = os.path.join(src_mesh_path, file)
            dest_file = os.path.join(dest_mesh_path, file)

            if not os.path.exists(dest_file) or os.path.getmtime(src_file) > os.path.getmtime(dest_file):
                print(f"📂 Moving {file} to {dest_mesh_path}")
                shutil.copy2(src_file, dest_file)


def convert_urdf_to_sdf():
    """Convert URDF to SDF using `gz sdf` command."""
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
        print("❌ Conversion failed:", result.stderr)
        raise RuntimeError("Failed to convert URDF to SDF")


def generate_launch_description():
    """Launch Gazebo and spawn the robot."""
    fix_mesh_paths()
    convert_urdf_to_sdf()

    package_name = "unnamed"
    package_path = get_package_share_directory(package_name)

    world_path = os.path.join(package_path, "worlds", "empty_world.sdf")
    model_path = os.path.join(package_path, "sdf", "unnamed.sdf")

    return launch.LaunchDescription([
        # Start Gazebo
        launch.actions.ExecuteProcess(
            cmd=["gz", "sim", "-r", world_path],
            output="screen"
        ),

        # Spawn the robot in Gazebo
        launch.actions.ExecuteProcess(
            cmd=[
                "gz", "service", "-s", "/world/default/create",
                "--reqtype", "gz.msgs.EntityFactory",
                "--reptype", "gz.msgs.Boolean",
                "--timeout", "1000",
                "--req", f'sdf_filename: "{model_path}", name: "unnamed"'
            ],
            output="screen",
        ),
    ])

