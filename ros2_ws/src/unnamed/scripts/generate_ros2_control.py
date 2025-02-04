import xml.etree.ElementTree as ET
import os
import sys

# ANSI Color Codes for Terminal Output
GREEN = "\033[92m"
YELLOW = "\033[93m"
CYAN = "\033[96m"
RED = "\033[91m"
RESET = "\033[0m"

# Define available interfaces
STATE_INTERFACES = ["position", "velocity", "effort"]
COMMAND_INTERFACES = ["position", "velocity", "effort"]

# Output paths
XACRO_OUTPUT_PATH = "/root/ros2_ws/src/unnamed/urdf/robot.xacro"
YAML_OUTPUT_PATH = "$(find unnamed)/config/ros2_control.yaml"  # ✅ Uses ROS find instead of absolute path
BASE_URDF_FILE = "/root/ros2_ws/src/unnamed/urdf/unnamed.urdf"

def print_help():
    """ Displays help information. """
    print(f"""
{CYAN}Welcome to the ROS 2 Control Generator!{RESET}

This script automates the generation of:
- `{XACRO_OUTPUT_PATH}` → Adds `ros2_control` support to your robot.
- `{YAML_OUTPUT_PATH}` → Defines controllers for your joints.

{YELLOW}🔹 What Are State Interfaces?{RESET}
State interfaces define what **sensor data** the controller can read:
- `position` → Reads joint position
- `velocity` → Reads joint velocity
- `effort`   → Reads joint torque/force

{YELLOW}🔹 What Are Command Interfaces?{RESET}
Command interfaces define how the controller **sends commands**:
- `position` → Moves the joint to a position
- `velocity` → Controls joint speed
- `effort`   → Controls joint torque/force

{GREEN}Additional Features: Gazebo or Real Hardware?{RESET}
You can choose:
1. **Gazebo Simulation** → Uses `gz_ros2_control/GzSystem`
2. **Real Hardware** → Uses `custom_hardware/MyHardwareInterface` (custom C++ code required)

{CYAN}Press Enter to return to the main menu...{RESET}
""")
    input()

def parse_urdf(urdf_file):
    """ Parses the URDF and extracts joint names. """
    try:
        tree = ET.parse(urdf_file)
        root = tree.getroot()
    except Exception as e:
        print(f"{RED}Error parsing URDF: {e}{RESET}")
        sys.exit(1)

    joints = [joint.get("name") for joint in root.findall("joint")]
    return joints

def user_select_interfaces(joints, gazebo_enabled):
    """ Asks the user to select interfaces for each joint. """
    joint_configs = {}

    for joint in joints:
        print(f"\n{CYAN}Configuring joint: {joint}{RESET}")

        # Select state interfaces
        print(f"{YELLOW}Select state interfaces (comma-separated):{RESET}")
        for i, option in enumerate(STATE_INTERFACES):
            print(f"  [{i+1}] {option}")
        state_selection = input("Enter numbers (e.g., 1,2): ").split(",")
        state_interfaces = [STATE_INTERFACES[int(i)-1] for i in state_selection if i.isdigit() and int(i)-1 < len(STATE_INTERFACES)]

        # Select command interfaces
        print(f"{YELLOW}Select command interfaces (comma-separated):{RESET}")
        for i, option in enumerate(COMMAND_INTERFACES):
            print(f"  [{i+1}] {option}")
        command_selection = input("Enter numbers (e.g., 1,2): ").split(",")
        command_interfaces = [COMMAND_INTERFACES[int(i)-1] for i in command_selection if i.isdigit() and int(i)-1 < len(COMMAND_INTERFACES)]

        # Gazebo options
        gazebo_params = {}
        if gazebo_enabled:
            print(f"{GREEN}Do you want to add Gazebo damping parameters for {joint}? (y/n){RESET}")
            if input().strip().lower() == "y":
                damping = input("Enter damping value (default: 0.1): ").strip() or "0.1"
                gazebo_params["damping"] = damping

        joint_configs[joint] = {
            "state_interfaces": state_interfaces,
            "command_interfaces": command_interfaces,
            "gazebo": gazebo_params
        }

    return joint_configs

def generate_xacro(joint_configs, gazebo_enabled):
    """ Generates a Xacro file including the base URDF, ros2_control, and optional Gazebo configurations. """
    with open(XACRO_OUTPUT_PATH, "w") as f:
        f.write('<?xml version="1.0"?>\n')
        f.write('<robot xmlns:xacro="http://www.ros.org/wiki/xacro" name="generated_robot">\n\n')

        # Include the base URDF
        f.write(f'  <xacro:include filename="{BASE_URDF_FILE}"/>\n\n')

        f.write('  <ros2_control name="MyRobotHardware" type="system">\n')
        f.write('    <hardware>\n')
        f.write('      <plugin>gz_ros2_control/GzSystem</plugin>\n')  # ✅ Ensures correct plugin name
        f.write('    </hardware>\n')

        for joint, config in joint_configs.items():
            f.write(f'    <joint name="{joint}">\n')

            for state in config["state_interfaces"]:
                f.write(f'      <state_interface name="{state}"/>\n')

            for command in config["command_interfaces"]:
                f.write(f'      <command_interface name="{command}"/>\n')

            f.write('    </joint>\n')

        f.write('  </ros2_control>\n')

        if gazebo_enabled:
            f.write('\n  <gazebo>\n')
            f.write('    <plugin filename="libgz_ros2_control-system.so" name="gz_ros2_control::GazeboSimROS2ControlPlugin">\n')
            f.write(f'      <parameters>{YAML_OUTPUT_PATH}</parameters>\n')  # ✅ Uses $(find unnamed) for portability
            f.write('    </plugin>\n')

            for joint, config in joint_configs.items():
                if "damping" in config["gazebo"]:
                    f.write(f'    <joint name="{joint}">\n')
                    f.write(f'      <dynamics damping="{config["gazebo"]["damping"]}"/>\n')
                    f.write(f'    </joint>\n')

            f.write('  </gazebo>\n')

        f.write('</robot>\n')

    print(f"\n✅ {GREEN}Generated Xacro file: {XACRO_OUTPUT_PATH}{RESET}")

def main():
    while True:
        print(f"\n{CYAN}=== ROS 2 Control Setup Menu ==={RESET}")
        print(f"[1] Start")
        print(f"[2] Help")
        print(f"[3] Exit")

        choice = input("Select an option: ").strip()
        if choice == "1":
            # Parse URDF
            joints = parse_urdf(BASE_URDF_FILE)
            if not joints:
                print(f"{RED}No joints found in URDF!{RESET}")
                sys.exit(1)

            # Ask if using simulation or real hardware
            print(f"\n{YELLOW}Do you want to use Gazebo simulation? (y/n){RESET}")
            gazebo_enabled = input().strip().lower() == "y"

            # Configure joints
            joint_configs = user_select_interfaces(joints, gazebo_enabled)

            # Generate files
            generate_xacro(joint_configs, gazebo_enabled)

            print(f"\n{CYAN}🚀 Setup complete!{RESET}")
        elif choice == "2":
            print_help()
        elif choice == "3":
            print(f"{GREEN}Exiting.{RESET}")
            sys.exit(0)

if __name__ == "__main__":
    main()

