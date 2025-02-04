import os
import sys
import re
import yaml

def update_urdf(urdf_path, package_name="unnamed", config_dir="config"):
    # Read the URDF file
    with open(urdf_path, "r") as file:
        urdf_content = file.read()

    # Regular expression to find mesh paths
    mesh_pattern = re.compile(r'(<mesh filename=")(\.\./meshes/stl/)([^"]+)(" scale="[^"]+")')

    # Function to replace mesh paths
    def replace_path(match):
        new_path = f'package://{package_name}/meshes/stl/{match.group(3)}'
        return f'{match.group(1)}{new_path}{match.group(4)}'

    # Perform replacements
    updated_content = mesh_pattern.sub(replace_path, urdf_content)

    # Find all joints
    joint_pattern = re.compile(r'(<joint name="([^"]+)" type="([^"]+)">.*?</joint>)', re.DOTALL)
    joints = joint_pattern.findall(updated_content)

    # Create transmission blocks and ros2_control elements
    transmission_blocks = []
    controller_joints = []

    for joint_match in joints:
        full_joint_tag, joint_name, joint_type = joint_match

        if joint_type in ["revolute", "continuous", "prismatic"]:
            # Create a transmission block
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

            # Create a ros2_control block to be appended **before** the `</joint>` tag
            ros2_control_block = f"""
    <ros2_control name="{joint_name}_controller" type="actuator">
      <hardware>
        <plugin>ros2_control_demo_hardware/GenericSystem</plugin>
      </hardware>
      <command_interface name="position"/>
      <state_interface name="position"/>
      <state_interface name="velocity"/>
    </ros2_control>
"""
            # Insert the control block before `</joint>`
            modified_joint_tag = full_joint_tag.replace("</joint>", ros2_control_block + "\n  </joint>")
            updated_content = updated_content.replace(full_joint_tag, modified_joint_tag)

            controller_joints.append(joint_name)

    # Insert transmission blocks before the closing </robot> tag
    updated_content = updated_content.replace("</robot>", "\n".join(transmission_blocks) + "\n</robot>")

    # Write the updated URDF back
    with open(urdf_path, "w") as file:
        file.write(updated_content)

    print(f"Updated URDF saved: {urdf_path}")

    # Generate ros2_controllers.yaml
    controller_config = {
        "controller_manager": {
            "ros__parameters": {
                "update_rate": 100,  # Hz
                "joint_state_broadcaster": {
                    "type": "joint_state_broadcaster/JointStateBroadcaster"
                }
            }
        }
    }

    for joint in controller_joints:
        controller_name = f"{joint}_controller"
        controller_config["controller_manager"]["ros__parameters"][controller_name] = {
            "type": "position_controllers/JointGroupPositionController"
        }
        controller_config[controller_name] = {
            "ros__parameters": {
                "joints": [joint],
                "command_interfaces": ["position"],
                "state_interfaces": ["position", "velocity"]
            }
        }

    # Define the path for ros2_controllers.yaml
    config_path = os.path.join(os.path.dirname(urdf_path), "..", config_dir, "ros2_controllers.yaml")

    # Create config directory if it does not exist
    os.makedirs(os.path.dirname(config_path), exist_ok=True)

    # Write the YAML file
    with open(config_path, "w") as yaml_file:
        yaml.dump(controller_config, yaml_file, default_flow_style=False)

    print(f"Controller configuration saved: {config_path}")

# Run script
if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Usage: python trans3.py <path_to_urdf>")
        sys.exit(1)

    urdf_file = sys.argv[1]
    update_urdf(urdf_file)

