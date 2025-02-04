import os
import sys
import re

def update_urdf(urdf_path, package_name="unnamed"):
    # Read the URDF file
    with open(urdf_path, "r") as file:
        urdf_content = file.read()

    # Regular expression to find mesh paths
    mesh_pattern = re.compile(r'(<mesh filename=")(\.\./meshes/stl/)([^"]+)(" scale="[^"]+")')

    # Function to replace paths
    def replace_path(match):
        old_path = match.group(2) + match.group(3)  # "../meshes/stl/Body.stl"
        new_path = f'package://{package_name}/meshes/stl/{match.group(3)}'

        if os.path.exists(os.path.join(os.path.dirname(urdf_path), old_path)):
            print(f"Updating: {old_path} -> {new_path}")
            return f'{match.group(1)}{new_path}{match.group(4)}'
        else:
            print(f"File not found, skipping: {old_path}")
            return match.group(0)  # Return original text if file doesn't exist

    # Perform replacements
    updated_content = mesh_pattern.sub(replace_path, urdf_content)

    # Write the updated URDF back
    with open(urdf_path, "w") as file:
        file.write(updated_content)

    print(f"Updated URDF saved: {urdf_path}")

# Run script
if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Usage: python update_urdf.py <path_to_urdf>")
        sys.exit(1)

    urdf_file = sys.argv[1]
    update_urdf(urdf_file)
