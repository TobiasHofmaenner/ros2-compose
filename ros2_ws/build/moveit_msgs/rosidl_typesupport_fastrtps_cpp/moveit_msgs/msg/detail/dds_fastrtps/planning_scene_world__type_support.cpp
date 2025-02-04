// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from moveit_msgs:msg/PlanningSceneWorld.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/planning_scene_world__rosidl_typesupport_fastrtps_cpp.hpp"
#include "moveit_msgs/msg/detail/planning_scene_world__functions.h"
#include "moveit_msgs/msg/detail/planning_scene_world__struct.hpp"

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
namespace moveit_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const moveit_msgs::msg::CollisionObject &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  moveit_msgs::msg::CollisionObject &);
size_t get_serialized_size(
  const moveit_msgs::msg::CollisionObject &,
  size_t current_alignment);
size_t
max_serialized_size_CollisionObject(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const moveit_msgs::msg::CollisionObject &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const moveit_msgs::msg::CollisionObject &,
  size_t current_alignment);
size_t
max_serialized_size_key_CollisionObject(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace moveit_msgs

namespace octomap_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const octomap_msgs::msg::OctomapWithPose &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  octomap_msgs::msg::OctomapWithPose &);
size_t get_serialized_size(
  const octomap_msgs::msg::OctomapWithPose &,
  size_t current_alignment);
size_t
max_serialized_size_OctomapWithPose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const octomap_msgs::msg::OctomapWithPose &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const octomap_msgs::msg::OctomapWithPose &,
  size_t current_alignment);
size_t
max_serialized_size_key_OctomapWithPose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace octomap_msgs


namespace moveit_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_serialize(
  const moveit_msgs::msg::PlanningSceneWorld & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: collision_objects
  {
    size_t size = ros_message.collision_objects.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      moveit_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.collision_objects[i],
        cdr);
    }
  }

  // Member: octomap
  octomap_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.octomap,
    cdr);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  moveit_msgs::msg::PlanningSceneWorld & ros_message)
{
  // Member: collision_objects
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.collision_objects.resize(size);
    for (size_t i = 0; i < size; i++) {
      moveit_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.collision_objects[i]);
    }
  }

  // Member: octomap
  octomap_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.octomap);

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
get_serialized_size(
  const moveit_msgs::msg::PlanningSceneWorld & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: collision_objects
  {
    size_t array_size = ros_message.collision_objects.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        moveit_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.collision_objects[index], current_alignment);
    }
  }

  // Member: octomap
  current_alignment +=
    octomap_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.octomap, current_alignment);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
max_serialized_size_PlanningSceneWorld(
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

  // Member: collision_objects
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
        moveit_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CollisionObject(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: octomap
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        octomap_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_OctomapWithPose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = moveit_msgs::msg::PlanningSceneWorld;
    is_plain =
      (
      offsetof(DataType, octomap) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_serialize_key(
  const moveit_msgs::msg::PlanningSceneWorld & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: collision_objects
  {
    size_t size = ros_message.collision_objects.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      moveit_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.collision_objects[i],
        cdr);
    }
  }

  // Member: octomap
  octomap_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.octomap,
    cdr);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
get_serialized_size_key(
  const moveit_msgs::msg::PlanningSceneWorld & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: collision_objects
  {
    size_t array_size = ros_message.collision_objects.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        moveit_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.collision_objects[index], current_alignment);
    }
  }

  // Member: octomap
  current_alignment +=
    octomap_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.octomap, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
max_serialized_size_key_PlanningSceneWorld(
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

  // Member: collision_objects
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
        moveit_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_CollisionObject(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: octomap
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        octomap_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_OctomapWithPose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = moveit_msgs::msg::PlanningSceneWorld;
    is_plain =
      (
      offsetof(DataType, octomap) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _PlanningSceneWorld__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const moveit_msgs::msg::PlanningSceneWorld *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PlanningSceneWorld__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<moveit_msgs::msg::PlanningSceneWorld *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PlanningSceneWorld__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const moveit_msgs::msg::PlanningSceneWorld *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PlanningSceneWorld__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PlanningSceneWorld(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PlanningSceneWorld__callbacks = {
  "moveit_msgs::msg",
  "PlanningSceneWorld",
  _PlanningSceneWorld__cdr_serialize,
  _PlanningSceneWorld__cdr_deserialize,
  _PlanningSceneWorld__get_serialized_size,
  _PlanningSceneWorld__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _PlanningSceneWorld__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PlanningSceneWorld__callbacks,
  get_message_typesupport_handle_function,
  &moveit_msgs__msg__PlanningSceneWorld__get_type_hash,
  &moveit_msgs__msg__PlanningSceneWorld__get_type_description,
  &moveit_msgs__msg__PlanningSceneWorld__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace moveit_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::msg::PlanningSceneWorld>()
{
  return &moveit_msgs::msg::typesupport_fastrtps_cpp::_PlanningSceneWorld__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, msg, PlanningSceneWorld)() {
  return &moveit_msgs::msg::typesupport_fastrtps_cpp::_PlanningSceneWorld__handle;
}

#ifdef __cplusplus
}
#endif
