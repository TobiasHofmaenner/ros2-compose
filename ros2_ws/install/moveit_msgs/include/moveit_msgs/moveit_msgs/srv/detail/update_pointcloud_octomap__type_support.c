// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:srv/UpdatePointcloudOctomap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/srv/detail/update_pointcloud_octomap__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/srv/detail/update_pointcloud_octomap__functions.h"
#include "moveit_msgs/srv/detail/update_pointcloud_octomap__struct.h"


// Include directives for member types
// Member `cloud`
#include "sensor_msgs/msg/point_cloud2.h"
// Member `cloud`
#include "sensor_msgs/msg/detail/point_cloud2__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void moveit_msgs__srv__UpdatePointcloudOctomap_Request__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__srv__UpdatePointcloudOctomap_Request__init(message_memory);
}

void moveit_msgs__srv__UpdatePointcloudOctomap_Request__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Request_fini_function(void * message_memory)
{
  moveit_msgs__srv__UpdatePointcloudOctomap_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember moveit_msgs__srv__UpdatePointcloudOctomap_Request__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Request_message_member_array[1] = {
  {
    "cloud",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__UpdatePointcloudOctomap_Request, cloud),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers moveit_msgs__srv__UpdatePointcloudOctomap_Request__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Request_message_members = {
  "moveit_msgs__srv",  // message namespace
  "UpdatePointcloudOctomap_Request",  // message name
  1,  // number of fields
  sizeof(moveit_msgs__srv__UpdatePointcloudOctomap_Request),
  false,  // has_any_key_member_
  moveit_msgs__srv__UpdatePointcloudOctomap_Request__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Request_message_member_array,  // message members
  moveit_msgs__srv__UpdatePointcloudOctomap_Request__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  moveit_msgs__srv__UpdatePointcloudOctomap_Request__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t moveit_msgs__srv__UpdatePointcloudOctomap_Request__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Request_message_type_support_handle = {
  0,
  &moveit_msgs__srv__UpdatePointcloudOctomap_Request__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Request_message_members,
  get_message_typesupport_handle_function,
  &moveit_msgs__srv__UpdatePointcloudOctomap_Request__get_type_hash,
  &moveit_msgs__srv__UpdatePointcloudOctomap_Request__get_type_description,
  &moveit_msgs__srv__UpdatePointcloudOctomap_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, UpdatePointcloudOctomap_Request)() {
  moveit_msgs__srv__UpdatePointcloudOctomap_Request__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)();
  if (!moveit_msgs__srv__UpdatePointcloudOctomap_Request__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Request_message_type_support_handle.typesupport_identifier) {
    moveit_msgs__srv__UpdatePointcloudOctomap_Request__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &moveit_msgs__srv__UpdatePointcloudOctomap_Request__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/srv/detail/update_pointcloud_octomap__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/srv/detail/update_pointcloud_octomap__functions.h"
// already included above
// #include "moveit_msgs/srv/detail/update_pointcloud_octomap__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void moveit_msgs__srv__UpdatePointcloudOctomap_Response__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__srv__UpdatePointcloudOctomap_Response__init(message_memory);
}

void moveit_msgs__srv__UpdatePointcloudOctomap_Response__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Response_fini_function(void * message_memory)
{
  moveit_msgs__srv__UpdatePointcloudOctomap_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember moveit_msgs__srv__UpdatePointcloudOctomap_Response__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__UpdatePointcloudOctomap_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers moveit_msgs__srv__UpdatePointcloudOctomap_Response__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Response_message_members = {
  "moveit_msgs__srv",  // message namespace
  "UpdatePointcloudOctomap_Response",  // message name
  1,  // number of fields
  sizeof(moveit_msgs__srv__UpdatePointcloudOctomap_Response),
  false,  // has_any_key_member_
  moveit_msgs__srv__UpdatePointcloudOctomap_Response__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Response_message_member_array,  // message members
  moveit_msgs__srv__UpdatePointcloudOctomap_Response__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  moveit_msgs__srv__UpdatePointcloudOctomap_Response__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t moveit_msgs__srv__UpdatePointcloudOctomap_Response__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Response_message_type_support_handle = {
  0,
  &moveit_msgs__srv__UpdatePointcloudOctomap_Response__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Response_message_members,
  get_message_typesupport_handle_function,
  &moveit_msgs__srv__UpdatePointcloudOctomap_Response__get_type_hash,
  &moveit_msgs__srv__UpdatePointcloudOctomap_Response__get_type_description,
  &moveit_msgs__srv__UpdatePointcloudOctomap_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, UpdatePointcloudOctomap_Response)() {
  if (!moveit_msgs__srv__UpdatePointcloudOctomap_Response__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Response_message_type_support_handle.typesupport_identifier) {
    moveit_msgs__srv__UpdatePointcloudOctomap_Response__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &moveit_msgs__srv__UpdatePointcloudOctomap_Response__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/srv/detail/update_pointcloud_octomap__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/srv/detail/update_pointcloud_octomap__functions.h"
// already included above
// #include "moveit_msgs/srv/detail/update_pointcloud_octomap__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "moveit_msgs/srv/update_pointcloud_octomap.h"
// Member `request`
// Member `response`
// already included above
// #include "moveit_msgs/srv/detail/update_pointcloud_octomap__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__srv__UpdatePointcloudOctomap_Event__init(message_memory);
}

void moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Event_fini_function(void * message_memory)
{
  moveit_msgs__srv__UpdatePointcloudOctomap_Event__fini(message_memory);
}

size_t moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__size_function__UpdatePointcloudOctomap_Event__request(
  const void * untyped_member)
{
  const moveit_msgs__srv__UpdatePointcloudOctomap_Request__Sequence * member =
    (const moveit_msgs__srv__UpdatePointcloudOctomap_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__get_const_function__UpdatePointcloudOctomap_Event__request(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__srv__UpdatePointcloudOctomap_Request__Sequence * member =
    (const moveit_msgs__srv__UpdatePointcloudOctomap_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__get_function__UpdatePointcloudOctomap_Event__request(
  void * untyped_member, size_t index)
{
  moveit_msgs__srv__UpdatePointcloudOctomap_Request__Sequence * member =
    (moveit_msgs__srv__UpdatePointcloudOctomap_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__fetch_function__UpdatePointcloudOctomap_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const moveit_msgs__srv__UpdatePointcloudOctomap_Request * item =
    ((const moveit_msgs__srv__UpdatePointcloudOctomap_Request *)
    moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__get_const_function__UpdatePointcloudOctomap_Event__request(untyped_member, index));
  moveit_msgs__srv__UpdatePointcloudOctomap_Request * value =
    (moveit_msgs__srv__UpdatePointcloudOctomap_Request *)(untyped_value);
  *value = *item;
}

void moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__assign_function__UpdatePointcloudOctomap_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  moveit_msgs__srv__UpdatePointcloudOctomap_Request * item =
    ((moveit_msgs__srv__UpdatePointcloudOctomap_Request *)
    moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__get_function__UpdatePointcloudOctomap_Event__request(untyped_member, index));
  const moveit_msgs__srv__UpdatePointcloudOctomap_Request * value =
    (const moveit_msgs__srv__UpdatePointcloudOctomap_Request *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__resize_function__UpdatePointcloudOctomap_Event__request(
  void * untyped_member, size_t size)
{
  moveit_msgs__srv__UpdatePointcloudOctomap_Request__Sequence * member =
    (moveit_msgs__srv__UpdatePointcloudOctomap_Request__Sequence *)(untyped_member);
  moveit_msgs__srv__UpdatePointcloudOctomap_Request__Sequence__fini(member);
  return moveit_msgs__srv__UpdatePointcloudOctomap_Request__Sequence__init(member, size);
}

size_t moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__size_function__UpdatePointcloudOctomap_Event__response(
  const void * untyped_member)
{
  const moveit_msgs__srv__UpdatePointcloudOctomap_Response__Sequence * member =
    (const moveit_msgs__srv__UpdatePointcloudOctomap_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__get_const_function__UpdatePointcloudOctomap_Event__response(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__srv__UpdatePointcloudOctomap_Response__Sequence * member =
    (const moveit_msgs__srv__UpdatePointcloudOctomap_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__get_function__UpdatePointcloudOctomap_Event__response(
  void * untyped_member, size_t index)
{
  moveit_msgs__srv__UpdatePointcloudOctomap_Response__Sequence * member =
    (moveit_msgs__srv__UpdatePointcloudOctomap_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__fetch_function__UpdatePointcloudOctomap_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const moveit_msgs__srv__UpdatePointcloudOctomap_Response * item =
    ((const moveit_msgs__srv__UpdatePointcloudOctomap_Response *)
    moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__get_const_function__UpdatePointcloudOctomap_Event__response(untyped_member, index));
  moveit_msgs__srv__UpdatePointcloudOctomap_Response * value =
    (moveit_msgs__srv__UpdatePointcloudOctomap_Response *)(untyped_value);
  *value = *item;
}

void moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__assign_function__UpdatePointcloudOctomap_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  moveit_msgs__srv__UpdatePointcloudOctomap_Response * item =
    ((moveit_msgs__srv__UpdatePointcloudOctomap_Response *)
    moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__get_function__UpdatePointcloudOctomap_Event__response(untyped_member, index));
  const moveit_msgs__srv__UpdatePointcloudOctomap_Response * value =
    (const moveit_msgs__srv__UpdatePointcloudOctomap_Response *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__resize_function__UpdatePointcloudOctomap_Event__response(
  void * untyped_member, size_t size)
{
  moveit_msgs__srv__UpdatePointcloudOctomap_Response__Sequence * member =
    (moveit_msgs__srv__UpdatePointcloudOctomap_Response__Sequence *)(untyped_member);
  moveit_msgs__srv__UpdatePointcloudOctomap_Response__Sequence__fini(member);
  return moveit_msgs__srv__UpdatePointcloudOctomap_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__UpdatePointcloudOctomap_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(moveit_msgs__srv__UpdatePointcloudOctomap_Event, request),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__size_function__UpdatePointcloudOctomap_Event__request,  // size() function pointer
    moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__get_const_function__UpdatePointcloudOctomap_Event__request,  // get_const(index) function pointer
    moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__get_function__UpdatePointcloudOctomap_Event__request,  // get(index) function pointer
    moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__fetch_function__UpdatePointcloudOctomap_Event__request,  // fetch(index, &value) function pointer
    moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__assign_function__UpdatePointcloudOctomap_Event__request,  // assign(index, value) function pointer
    moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__resize_function__UpdatePointcloudOctomap_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(moveit_msgs__srv__UpdatePointcloudOctomap_Event, response),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__size_function__UpdatePointcloudOctomap_Event__response,  // size() function pointer
    moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__get_const_function__UpdatePointcloudOctomap_Event__response,  // get_const(index) function pointer
    moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__get_function__UpdatePointcloudOctomap_Event__response,  // get(index) function pointer
    moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__fetch_function__UpdatePointcloudOctomap_Event__response,  // fetch(index, &value) function pointer
    moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__assign_function__UpdatePointcloudOctomap_Event__response,  // assign(index, value) function pointer
    moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__resize_function__UpdatePointcloudOctomap_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Event_message_members = {
  "moveit_msgs__srv",  // message namespace
  "UpdatePointcloudOctomap_Event",  // message name
  3,  // number of fields
  sizeof(moveit_msgs__srv__UpdatePointcloudOctomap_Event),
  false,  // has_any_key_member_
  moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Event_message_member_array,  // message members
  moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Event_message_type_support_handle = {
  0,
  &moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Event_message_members,
  get_message_typesupport_handle_function,
  &moveit_msgs__srv__UpdatePointcloudOctomap_Event__get_type_hash,
  &moveit_msgs__srv__UpdatePointcloudOctomap_Event__get_type_description,
  &moveit_msgs__srv__UpdatePointcloudOctomap_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, UpdatePointcloudOctomap_Event)() {
  moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, UpdatePointcloudOctomap_Request)();
  moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, UpdatePointcloudOctomap_Response)();
  if (!moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Event_message_type_support_handle.typesupport_identifier) {
    moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "moveit_msgs/srv/detail/update_pointcloud_octomap__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers moveit_msgs__srv__detail__update_pointcloud_octomap__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_service_members = {
  "moveit_msgs__srv",  // service namespace
  "UpdatePointcloudOctomap",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // moveit_msgs__srv__detail__update_pointcloud_octomap__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Request_message_type_support_handle,
  NULL,  // response message
  // moveit_msgs__srv__detail__update_pointcloud_octomap__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Response_message_type_support_handle
  NULL  // event_message
  // moveit_msgs__srv__detail__update_pointcloud_octomap__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Response_message_type_support_handle
};


static rosidl_service_type_support_t moveit_msgs__srv__detail__update_pointcloud_octomap__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_service_type_support_handle = {
  0,
  &moveit_msgs__srv__detail__update_pointcloud_octomap__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_service_members,
  get_service_typesupport_handle_function,
  &moveit_msgs__srv__UpdatePointcloudOctomap_Request__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Request_message_type_support_handle,
  &moveit_msgs__srv__UpdatePointcloudOctomap_Response__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Response_message_type_support_handle,
  &moveit_msgs__srv__UpdatePointcloudOctomap_Event__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    moveit_msgs,
    srv,
    UpdatePointcloudOctomap
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    moveit_msgs,
    srv,
    UpdatePointcloudOctomap
  ),
  &moveit_msgs__srv__UpdatePointcloudOctomap__get_type_hash,
  &moveit_msgs__srv__UpdatePointcloudOctomap__get_type_description,
  &moveit_msgs__srv__UpdatePointcloudOctomap__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, UpdatePointcloudOctomap_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, UpdatePointcloudOctomap_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, UpdatePointcloudOctomap_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, UpdatePointcloudOctomap)(void) {
  if (!moveit_msgs__srv__detail__update_pointcloud_octomap__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_service_type_support_handle.typesupport_identifier) {
    moveit_msgs__srv__detail__update_pointcloud_octomap__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)moveit_msgs__srv__detail__update_pointcloud_octomap__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, UpdatePointcloudOctomap_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, UpdatePointcloudOctomap_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, UpdatePointcloudOctomap_Event)()->data;
  }

  return &moveit_msgs__srv__detail__update_pointcloud_octomap__rosidl_typesupport_introspection_c__UpdatePointcloudOctomap_service_type_support_handle;
}
