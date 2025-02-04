#!/bin/bash

CONTAINER_NAME="ros2_jazzy"

# Check if the container is running
if ! docker ps --format '{{.Names}}' | grep -q "^${CONTAINER_NAME}$"; then
    echo "🚀 Starting the Docker container..."
    docker-compose up -d
fi
xhost +local:root
echo "✅ Attaching to the container: ${CONTAINER_NAME}"
docker exec -it ${CONTAINER_NAME} bash -c "
    echo '🔹 Sourcing ROS 2 environment...'
    source /opt/ros/jazzy/setup.bash
    echo '🔹 Navigating to workspace...'
    cd /root/ros2_ws
    exec bash
"

