// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/RobotTrajectory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "moveit_msgs/msg/robot_trajectory.hpp"


#ifndef MOVEIT_MSGS__MSG__DETAIL__ROBOT_TRAJECTORY__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__ROBOT_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/robot_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotTrajectory_multi_dof_joint_trajectory
{
public:
  explicit Init_RobotTrajectory_multi_dof_joint_trajectory(::moveit_msgs::msg::RobotTrajectory & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::RobotTrajectory multi_dof_joint_trajectory(::moveit_msgs::msg::RobotTrajectory::_multi_dof_joint_trajectory_type arg)
  {
    msg_.multi_dof_joint_trajectory = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::RobotTrajectory msg_;
};

class Init_RobotTrajectory_joint_trajectory
{
public:
  Init_RobotTrajectory_joint_trajectory()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotTrajectory_multi_dof_joint_trajectory joint_trajectory(::moveit_msgs::msg::RobotTrajectory::_joint_trajectory_type arg)
  {
    msg_.joint_trajectory = std::move(arg);
    return Init_RobotTrajectory_multi_dof_joint_trajectory(msg_);
  }

private:
  ::moveit_msgs::msg::RobotTrajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::RobotTrajectory>()
{
  return moveit_msgs::msg::builder::Init_RobotTrajectory_joint_trajectory();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__ROBOT_TRAJECTORY__BUILDER_HPP_
