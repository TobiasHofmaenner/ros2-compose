import os
import sys
import re

def update_urdf(urdf_path, package_name="unnamed"):
    # Read the URDF file
    with open(urdf_path, "r") as file:
        urdf_content = file.read()

    # Regular expression to find mesh paths
    mesh_pattern = re.compile(r'(<mesh filename=")(\.\./meshes/stl/)([^"]+)(" scale="[^"]+")')

    # Function to replace mesh paths
    def replace_path(match):
        old_path = match.group(2) + match.group(3)  # "../meshes/stl/Body.stl"
        new_path = f'package://{package_name}/meshes/stl/{match.group(3)}'
        return f'{match.group(1)}{new_path}{match.group(4)}'

    # Perform replacements
    updated_content = mesh_pattern.sub(replace_path, urdf_content)

    # Find all joints
    joint_pattern = re.compile(r'<joint name="([^"]+)" type="([^"]+)">')
    joints = joint_pattern.findall(updated_content)

    # Create transmission blocks
    transmission_blocks = []
    for joint_name, joint_type in joints:
        if joint_type in ["revolute", "continuous", "prismatic"]:
            transmission_block = f"""
  <transmission name="{joint_name}_transmission">
    <type>transmission_interface/SimpleTransmission</type>
    <joint name="{joint_name}">
      <hardwareInterface>hardware_interface/PositionJointInterface</hardwareInterface>
    </joint>
    <actuator name="{joint_name}_actuator">
      <mechanicalReduction>1.0</mechanicalReduction>
    </actuator>
  </transmission>
"""
            transmission_blocks.append(transmission_block)

    # Insert transmission blocks before the closing </robot> tag
    updated_content = updated_content.replace("</robot>", "\n".join(transmission_blocks) + "\n</robot>")

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
