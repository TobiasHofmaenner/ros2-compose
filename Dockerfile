FROM osrf/ros:jazzy-desktop

# Install missing dependencies
RUN apt update && apt install -y \
    vim \
    ros-jazzy-ros-gz \
    ros-jazzy-ros-gz-sim \
    ros-jazzy-ros-gz-bridge \
    ros-jazzy-joint-state-publisher-gui \
    ros-jazzy-ros2-control \
    ros-jazzy-ros2-controllers \
    ros-jazzy-controller-manager \
    ros-jazzy-gz-ros2-control \
    ros-jazzy-ros2cli \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /root/ros2_ws/src
# Install moveit2
RUN git clone -b main https://github.com/moveit/moveit2_tutorials && \
    vcs import --recursive < moveit2_tutorials/moveit2_tutorials.repos && \
    sudo apt update && \
    rosdep install -r --from-paths . --ignore-src --rosdistro $ROS_DISTRO -y 
RUN apt install blender -y

# Set ROS 2 environment
SHELL ["/bin/bash", "-c"]

# Create necessary folders for Gazebo
#RUN mkdir -p /root/ros2_ws/src/gazebo/models /root/ros2_ws/src/gazebo/config

# Set Gazebo paths
#ENV GAZEBO_MODEL_PATH="/root/ros2_ws/src/gazebo/models"
#ENV GAZEBO_RESOURCE_PATH="/root/ros2_ws/src/gazebo/config"

# Ensure ROS 2 environment is sourced globally
#RUN echo "source /opt/ros/jazzy/setup.bash" >> /etc/bash.bashrc
#RUN echo "source /root/ros2_ws/install/setup.bash" >> /etc/bash.bashrc

# Set workspace as default working directory
#WORKDIR /root/ros2_ws

# Default command
CMD ["bash"]

