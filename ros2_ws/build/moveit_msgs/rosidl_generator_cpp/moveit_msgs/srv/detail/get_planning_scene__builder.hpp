// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:srv/GetPlanningScene.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "moveit_msgs/srv/get_planning_scene.hpp"


#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_PLANNING_SCENE__BUILDER_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__GET_PLANNING_SCENE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/srv/detail/get_planning_scene__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPlanningScene_Request_components
{
public:
  Init_GetPlanningScene_Request_components()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::srv::GetPlanningScene_Request components(::moveit_msgs::srv::GetPlanningScene_Request::_components_type arg)
  {
    msg_.components = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::GetPlanningScene_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::GetPlanningScene_Request>()
{
  return moveit_msgs::srv::builder::Init_GetPlanningScene_Request_components();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPlanningScene_Response_scene
{
public:
  Init_GetPlanningScene_Response_scene()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::srv::GetPlanningScene_Response scene(::moveit_msgs::srv::GetPlanningScene_Response::_scene_type arg)
  {
    msg_.scene = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::GetPlanningScene_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::GetPlanningScene_Response>()
{
  return moveit_msgs::srv::builder::Init_GetPlanningScene_Response_scene();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPlanningScene_Event_response
{
public:
  explicit Init_GetPlanningScene_Event_response(::moveit_msgs::srv::GetPlanningScene_Event & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::srv::GetPlanningScene_Event response(::moveit_msgs::srv::GetPlanningScene_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::GetPlanningScene_Event msg_;
};

class Init_GetPlanningScene_Event_request
{
public:
  explicit Init_GetPlanningScene_Event_request(::moveit_msgs::srv::GetPlanningScene_Event & msg)
  : msg_(msg)
  {}
  Init_GetPlanningScene_Event_response request(::moveit_msgs::srv::GetPlanningScene_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetPlanningScene_Event_response(msg_);
  }

private:
  ::moveit_msgs::srv::GetPlanningScene_Event msg_;
};

class Init_GetPlanningScene_Event_info
{
public:
  Init_GetPlanningScene_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPlanningScene_Event_request info(::moveit_msgs::srv::GetPlanningScene_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetPlanningScene_Event_request(msg_);
  }

private:
  ::moveit_msgs::srv::GetPlanningScene_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::GetPlanningScene_Event>()
{
  return moveit_msgs::srv::builder::Init_GetPlanningScene_Event_info();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_PLANNING_SCENE__BUILDER_HPP_
