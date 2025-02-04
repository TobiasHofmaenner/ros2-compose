// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from moveit_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/robot_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "moveit_msgs/msg/detail/robot_state__functions.h"
#include "moveit_msgs/msg/detail/robot_state__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace sensor_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sensor_msgs::msg::JointState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sensor_msgs::msg::JointState &);
size_t get_serialized_size(
  const sensor_msgs::msg::JointState &,
  size_t current_alignment);
size_t
max_serialized_size_JointState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const sensor_msgs::msg::JointState &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const sensor_msgs::msg::JointState &,
  size_t current_alignment);
size_t
max_serialized_size_key_JointState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sensor_msgs

namespace sensor_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sensor_msgs::msg::MultiDOFJointState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sensor_msgs::msg::MultiDOFJointState &);
size_t get_serialized_size(
  const sensor_msgs::msg::MultiDOFJointState &,
  size_t current_alignment);
size_t
max_serialized_size_MultiDOFJointState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const sensor_msgs::msg::MultiDOFJointState &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const sensor_msgs::msg::MultiDOFJointState &,
  size_t current_alignment);
size_t
max_serialized_size_key_MultiDOFJointState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sensor_msgs

namespace moveit_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const moveit_msgs::msg::AttachedCollisionObject &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  moveit_msgs::msg::AttachedCollisionObject &);
size_t get_serialized_size(
  const moveit_msgs::msg::AttachedCollisionObject &,
  size_t current_alignment);
size_t
max_serialized_size_AttachedCollisionObject(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const moveit_msgs::msg::AttachedCollisionObject &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const moveit_msgs::msg::AttachedCollisionObject &,
  size_t current_alignment);
size_t
max_serialized_size_key_AttachedCollisionObject(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_serialize(
  const moveit_msgs::msg::RobotState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: joint_state
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.joint_state,
    cdr);

  // Member: multi_dof_joint_state
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.multi_dof_joint_state,
    cdr);

  // Member: attached_collision_objects
  {
    size_t size = ros_message.attached_collision_objects.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      moveit_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.attached_collision_objects[i],
        cdr);
    }
  }

  // Member: is_diff
  cdr << (ros_message.is_diff ? true : false);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  moveit_msgs::msg::RobotState & ros_message)
{
  // Member: joint_state
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.joint_state);

  // Member: multi_dof_joint_state
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.multi_dof_joint_state);

  // Member: attached_collision_objects
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.attached_collision_objects.resize(size);
    for (size_t i = 0; i < size; i++) {
      moveit_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.attached_collision_objects[i]);
    }
  }

  // Member: is_diff
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_diff = tmp ? true : false;
  }

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
get_serialized_size(
  const moveit_msgs::msg::RobotState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: joint_state
  current_alignment +=
    sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.joint_state, current_alignment);

  // Member: multi_dof_joint_state
  current_alignment +=
    sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.multi_dof_joint_state, current_alignment);

  // Member: attached_collision_objects
  {
    size_t array_size = ros_message.attached_collision_objects.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        moveit_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.attached_collision_objects[index], current_alignment);
    }
  }

  // Member: is_diff
  {
    size_t item_size = sizeof(ros_message.is_diff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
max_serialized_size_RobotState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: joint_state
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_JointState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: multi_dof_joint_state
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_MultiDOFJointState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: attached_collision_objects
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        moveit_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_AttachedCollisionObject(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: is_diff
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = moveit_msgs::msg::RobotState;
    is_plain =
      (
      offsetof(DataType, is_diff) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_serialize_key(
  const moveit_msgs::msg::RobotState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: joint_state
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.joint_state,
    cdr);

  // Member: multi_dof_joint_state
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.multi_dof_joint_state,
    cdr);

  // Member: attached_collision_objects
  {
    size_t size = ros_message.attached_collision_objects.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      moveit_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.attached_collision_objects[i],
        cdr);
    }
  }

  // Member: is_diff
  cdr << (ros_message.is_diff ? true : false);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
get_serialized_size_key(
  const moveit_msgs::msg::RobotState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: joint_state
  current_alignment +=
    sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.joint_state, current_alignment);

  // Member: multi_dof_joint_state
  current_alignment +=
    sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.multi_dof_joint_state, current_alignment);

  // Member: attached_collision_objects
  {
    size_t array_size = ros_message.attached_collision_objects.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        moveit_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.attached_collision_objects[index], current_alignment);
    }
  }

  // Member: is_diff
  {
    size_t item_size = sizeof(ros_message.is_diff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
max_serialized_size_key_RobotState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: joint_state
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_JointState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: multi_dof_joint_state
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_MultiDOFJointState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: attached_collision_objects
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        moveit_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_AttachedCollisionObject(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: is_diff
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = moveit_msgs::msg::RobotState;
    is_plain =
      (
      offsetof(DataType, is_diff) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _RobotState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const moveit_msgs::msg::RobotState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobotState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<moveit_msgs::msg::RobotState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobotState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const moveit_msgs::msg::RobotState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobotState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RobotState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RobotState__callbacks = {
  "moveit_msgs::msg",
  "RobotState",
  _RobotState__cdr_serialize,
  _RobotState__cdr_deserialize,
  _RobotState__get_serialized_size,
  _RobotState__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _RobotState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobotState__callbacks,
  get_message_typesupport_handle_function,
  &moveit_msgs__msg__RobotState__get_type_hash,
  &moveit_msgs__msg__RobotState__get_type_description,
  &moveit_msgs__msg__RobotState__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace moveit_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::msg::RobotState>()
{
  return &moveit_msgs::msg::typesupport_fastrtps_cpp::_RobotState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, msg, RobotState)() {
  return &moveit_msgs::msg::typesupport_fastrtps_cpp::_RobotState__handle;
}

#ifdef __cplusplus
}
#endif
