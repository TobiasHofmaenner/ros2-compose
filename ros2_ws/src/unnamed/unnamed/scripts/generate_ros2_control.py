import os
import xml.etree.ElementTree as ET
import yaml

# Define paths
package_name = "unnamed"
urdf_path = f"~/ros2_ws/src/{package_name}/urdf/unnamed_relpath.urdf"
yaml_path = f"~/ros2_ws/src/{package_name}/config/ros2_control.yaml"

# Expand ~ to full path
urdf_path = os.path.expanduser(urdf_path)
yaml_path = os.path.expanduser(yaml_path)

# Load URDF
tree = ET.parse(urdf_path)
root = tree.getroot()

# List of joints to be controlled
controlled_joints = []

# Modify URDF to add `gazebo_ros2_control` plugin and transmission
for joint in root.findall("joint"):
    joint_name = joint.attrib["name"]
    controlled_joints.append(joint_name)

    # Add transmission
    transmission = ET.Element("transmission", attrib={"name": f"{joint_name}_trans"})
    ET.SubElement(transmission, "type").text = "transmission_interface/SimpleTransmission"

    joint_elem = ET.SubElement(transmission, "joint", attrib={"name": joint_name})
    ET.SubElement(joint_elem, "hardwareInterface").text = "hardware_interface/PositionJointInterface"

    actuator = ET.SubElement(transmission, "actuator", attrib={"name": f"{joint_name}_actuator"})
    ET.SubElement(actuator, "hardwareInterface").text = "hardware_interface/PositionJointInterface"
    ET.SubElement(actuator, "mechanicalReduction").text = "1.0"

    root.append(transmission)

    # Add gazebo_ros2_control plugin
    gazebo_plugin = ET.Element("gazebo")
    plugin = ET.SubElement(gazebo_plugin, "plugin", attrib={
        "filename": "libgz_ros2_control.so",
        "name": "gazebo_ros2_control"
    })
    root.append(gazebo_plugin)

# Save the updated URDF
tree.write(urdf_path)

# Generate `ros2_control.yaml`
ros2_control_config = {
    "controller_manager": {
        "ros__parameters": {
            "update_rate": 100,
            "joint_state_broadcaster": {"type": "joint_state_broadcaster/JointStateBroadcaster"},
            "position_controller": {
                "type": "position_controllers/JointGroupPositionController",
                "joints": controlled_joints
            }
        }
    }
}

# Write YAML config
with open(yaml_path, "w") as yaml_file:
    yaml.dump(ros2_control_config, yaml_file, default_flow_style=False)

print("✅ URDF updated and `ros2_control.yaml` generated!")

