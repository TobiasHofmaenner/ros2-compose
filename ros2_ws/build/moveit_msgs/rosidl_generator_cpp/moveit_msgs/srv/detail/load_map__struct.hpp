// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:srv/LoadMap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "moveit_msgs/srv/load_map.hpp"


#ifndef MOVEIT_MSGS__SRV__DETAIL__LOAD_MAP__STRUCT_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__LOAD_MAP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__LoadMap_Request __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__LoadMap_Request __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LoadMap_Request_
{
  using Type = LoadMap_Request_<ContainerAllocator>;

  explicit LoadMap_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filename = "";
    }
  }

  explicit LoadMap_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : filename(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filename = "";
    }
  }

  // field types and members
  using _filename_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _filename_type filename;

  // setters for named parameter idiom
  Type & set__filename(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->filename = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::srv::LoadMap_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::LoadMap_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::LoadMap_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::LoadMap_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::LoadMap_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::LoadMap_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::LoadMap_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::LoadMap_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::LoadMap_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::LoadMap_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__LoadMap_Request
    std::shared_ptr<moveit_msgs::srv::LoadMap_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__LoadMap_Request
    std::shared_ptr<moveit_msgs::srv::LoadMap_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoadMap_Request_ & other) const
  {
    if (this->filename != other.filename) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoadMap_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoadMap_Request_

// alias to use template instance with default allocator
using LoadMap_Request =
  moveit_msgs::srv::LoadMap_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs


#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__LoadMap_Response __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__LoadMap_Response __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LoadMap_Response_
{
  using Type = LoadMap_Response_<ContainerAllocator>;

  explicit LoadMap_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit LoadMap_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::srv::LoadMap_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::LoadMap_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::LoadMap_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::LoadMap_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::LoadMap_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::LoadMap_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::LoadMap_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::LoadMap_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::LoadMap_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::LoadMap_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__LoadMap_Response
    std::shared_ptr<moveit_msgs::srv::LoadMap_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__LoadMap_Response
    std::shared_ptr<moveit_msgs::srv::LoadMap_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoadMap_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoadMap_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoadMap_Response_

// alias to use template instance with default allocator
using LoadMap_Response =
  moveit_msgs::srv::LoadMap_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__LoadMap_Event __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__LoadMap_Event __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LoadMap_Event_
{
  using Type = LoadMap_Event_<ContainerAllocator>;

  explicit LoadMap_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit LoadMap_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<moveit_msgs::srv::LoadMap_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::srv::LoadMap_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<moveit_msgs::srv::LoadMap_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::srv::LoadMap_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<moveit_msgs::srv::LoadMap_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::srv::LoadMap_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<moveit_msgs::srv::LoadMap_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::srv::LoadMap_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::srv::LoadMap_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::LoadMap_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::LoadMap_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::LoadMap_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::LoadMap_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::LoadMap_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::LoadMap_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::LoadMap_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::LoadMap_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::LoadMap_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__LoadMap_Event
    std::shared_ptr<moveit_msgs::srv::LoadMap_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__LoadMap_Event
    std::shared_ptr<moveit_msgs::srv::LoadMap_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoadMap_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoadMap_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoadMap_Event_

// alias to use template instance with default allocator
using LoadMap_Event =
  moveit_msgs::srv::LoadMap_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs

namespace moveit_msgs
{

namespace srv
{

struct LoadMap
{
  using Request = moveit_msgs::srv::LoadMap_Request;
  using Response = moveit_msgs::srv::LoadMap_Response;
  using Event = moveit_msgs::srv::LoadMap_Event;
};

}  // namespace srv

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__LOAD_MAP__STRUCT_HPP_
