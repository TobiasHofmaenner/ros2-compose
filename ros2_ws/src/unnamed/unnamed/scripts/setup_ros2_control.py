import os
import yaml
import xml.etree.ElementTree as ET

# Set paths
package_name = "unnamed"
package_path = os.path.join(os.path.expanduser("~/ros2_ws/src"), package_name)
urdf_path = os.path.join(package_path, "urdf", "unnamed_relpath.urdf")
config_path = os.path.join(package_path, "config", "ros2_control.yaml")

# Ensure config directory exists
os.makedirs(os.path.dirname(config_path), exist_ok=True)

# Parse URDF
tree = ET.parse(urdf_path)
root = tree.getroot()

# Find all joints that need control
joints = []
for joint in root.findall("joint"):
    joint_name = joint.get("name")
    if joint_name:
        joints.append(joint_name)

print(f"✅ Found joints: {joints}")

# Generate `ros2_control.yaml`
ros2_control_config = {
    "controller_manager": {
        "ros__parameters": {
            "update_rate": 100,
            "joint_state_broadcaster": {
                "type": "joint_state_broadcaster/JointStateBroadcaster"
            },
            "position_controller": {
                "type": "position_controllers/JointGroupPositionController"
            }
        }
    },
    "position_controller": {
        "ros__parameters": {
            "joints": joints,
            "command_interfaces": ["position"],
            "state_interfaces": ["position", "velocity"]
        }
    }
}

# Save YAML file
with open(config_path, "w") as yaml_file:
    yaml.dump(ros2_control_config, yaml_file, default_flow_style=False)

print(f"✅ Generated ros2_control.yaml at {config_path}")

# Remove any existing ros2_control plugin entries
for gazebo_plugin in root.findall(".//gazebo/plugin[@name='gazebo_ros2_control']"):
    root.remove(gazebo_plugin)

# Modify URDF: Add `ros2_control` transmission & Gazebo plugin
for joint in root.findall("joint"):
    joint_name = joint.get("name")

    # Add transmission block correctly
    transmission = ET.Element("transmission", {"name": f"{joint_name}_trans"})
    type_tag = ET.SubElement(transmission, "type")
    type_tag.text = "transmission_interface/SimpleTransmission"

    joint_tag = ET.SubElement(transmission, "joint", {"name": joint_name})
    ET.SubElement(joint_tag, "hardwareInterface").text = "ros2_control_interface/PositionJointInterface"

    actuator_tag = ET.SubElement(transmission, "actuator", {"name": f"{joint_name}_motor"})
    ET.SubElement(actuator_tag, "hardwareInterface").text = "ros2_control_interface/PositionJointInterface"
    ET.SubElement(actuator_tag, "mechanicalReduction").text = "1.0"

    root.append(transmission)

# Ensure only **one** Gazebo ros2_control plugin is added
gazebo_plugin = ET.Element("gazebo")
plugin = ET.SubElement(gazebo_plugin, "plugin", {"name": "gazebo_ros2_control", "filename": "libgz_ros2_control-system.so"})
root.append(gazebo_plugin)

print("✅ Modified URDF to include ros2_control")

# Save modified URDF
tree.write(urdf_path)
print(f"✅ Updated URDF saved at {urdf_path}")

print("\n🚀 Setup complete! Now you can launch Gazebo with ros2_control.")

