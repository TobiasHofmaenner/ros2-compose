// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:srv/CheckIfRobotStateExistsInWarehouse.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "moveit_msgs/srv/check_if_robot_state_exists_in_warehouse.hpp"


#ifndef MOVEIT_MSGS__SRV__DETAIL__CHECK_IF_ROBOT_STATE_EXISTS_IN_WAREHOUSE__BUILDER_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__CHECK_IF_ROBOT_STATE_EXISTS_IN_WAREHOUSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/srv/detail/check_if_robot_state_exists_in_warehouse__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_CheckIfRobotStateExistsInWarehouse_Request_robot
{
public:
  explicit Init_CheckIfRobotStateExistsInWarehouse_Request_robot(::moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Request & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Request robot(::moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Request::_robot_type arg)
  {
    msg_.robot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Request msg_;
};

class Init_CheckIfRobotStateExistsInWarehouse_Request_name
{
public:
  Init_CheckIfRobotStateExistsInWarehouse_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CheckIfRobotStateExistsInWarehouse_Request_robot name(::moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_CheckIfRobotStateExistsInWarehouse_Request_robot(msg_);
  }

private:
  ::moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Request>()
{
  return moveit_msgs::srv::builder::Init_CheckIfRobotStateExistsInWarehouse_Request_name();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_CheckIfRobotStateExistsInWarehouse_Response_exists
{
public:
  Init_CheckIfRobotStateExistsInWarehouse_Response_exists()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Response exists(::moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Response::_exists_type arg)
  {
    msg_.exists = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Response>()
{
  return moveit_msgs::srv::builder::Init_CheckIfRobotStateExistsInWarehouse_Response_exists();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_CheckIfRobotStateExistsInWarehouse_Event_response
{
public:
  explicit Init_CheckIfRobotStateExistsInWarehouse_Event_response(::moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Event & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Event response(::moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Event msg_;
};

class Init_CheckIfRobotStateExistsInWarehouse_Event_request
{
public:
  explicit Init_CheckIfRobotStateExistsInWarehouse_Event_request(::moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Event & msg)
  : msg_(msg)
  {}
  Init_CheckIfRobotStateExistsInWarehouse_Event_response request(::moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CheckIfRobotStateExistsInWarehouse_Event_response(msg_);
  }

private:
  ::moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Event msg_;
};

class Init_CheckIfRobotStateExistsInWarehouse_Event_info
{
public:
  Init_CheckIfRobotStateExistsInWarehouse_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CheckIfRobotStateExistsInWarehouse_Event_request info(::moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CheckIfRobotStateExistsInWarehouse_Event_request(msg_);
  }

private:
  ::moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Event>()
{
  return moveit_msgs::srv::builder::Init_CheckIfRobotStateExistsInWarehouse_Event_info();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__CHECK_IF_ROBOT_STATE_EXISTS_IN_WAREHOUSE__BUILDER_HPP_
