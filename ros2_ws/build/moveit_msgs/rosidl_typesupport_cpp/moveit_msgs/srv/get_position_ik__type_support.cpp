// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from moveit_msgs:srv/GetPositionIK.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "moveit_msgs/srv/detail/get_position_ik__functions.h"
#include "moveit_msgs/srv/detail/get_position_ik__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace moveit_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetPositionIK_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetPositionIK_Request_type_support_ids_t;

static const _GetPositionIK_Request_type_support_ids_t _GetPositionIK_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetPositionIK_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetPositionIK_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetPositionIK_Request_type_support_symbol_names_t _GetPositionIK_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, srv, GetPositionIK_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, srv, GetPositionIK_Request)),
  }
};

typedef struct _GetPositionIK_Request_type_support_data_t
{
  void * data[2];
} _GetPositionIK_Request_type_support_data_t;

static _GetPositionIK_Request_type_support_data_t _GetPositionIK_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetPositionIK_Request_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_GetPositionIK_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetPositionIK_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetPositionIK_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetPositionIK_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetPositionIK_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &moveit_msgs__srv__GetPositionIK_Request__get_type_hash,
  &moveit_msgs__srv__GetPositionIK_Request__get_type_description,
  &moveit_msgs__srv__GetPositionIK_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::srv::GetPositionIK_Request>()
{
  return &::moveit_msgs::srv::rosidl_typesupport_cpp::GetPositionIK_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, srv, GetPositionIK_Request)() {
  return get_message_type_support_handle<moveit_msgs::srv::GetPositionIK_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/srv/detail/get_position_ik__functions.h"
// already included above
// #include "moveit_msgs/srv/detail/get_position_ik__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace moveit_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetPositionIK_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetPositionIK_Response_type_support_ids_t;

static const _GetPositionIK_Response_type_support_ids_t _GetPositionIK_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetPositionIK_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetPositionIK_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetPositionIK_Response_type_support_symbol_names_t _GetPositionIK_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, srv, GetPositionIK_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, srv, GetPositionIK_Response)),
  }
};

typedef struct _GetPositionIK_Response_type_support_data_t
{
  void * data[2];
} _GetPositionIK_Response_type_support_data_t;

static _GetPositionIK_Response_type_support_data_t _GetPositionIK_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetPositionIK_Response_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_GetPositionIK_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetPositionIK_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetPositionIK_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetPositionIK_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetPositionIK_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &moveit_msgs__srv__GetPositionIK_Response__get_type_hash,
  &moveit_msgs__srv__GetPositionIK_Response__get_type_description,
  &moveit_msgs__srv__GetPositionIK_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::srv::GetPositionIK_Response>()
{
  return &::moveit_msgs::srv::rosidl_typesupport_cpp::GetPositionIK_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, srv, GetPositionIK_Response)() {
  return get_message_type_support_handle<moveit_msgs::srv::GetPositionIK_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/srv/detail/get_position_ik__functions.h"
// already included above
// #include "moveit_msgs/srv/detail/get_position_ik__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace moveit_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetPositionIK_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetPositionIK_Event_type_support_ids_t;

static const _GetPositionIK_Event_type_support_ids_t _GetPositionIK_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetPositionIK_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetPositionIK_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetPositionIK_Event_type_support_symbol_names_t _GetPositionIK_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, srv, GetPositionIK_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, srv, GetPositionIK_Event)),
  }
};

typedef struct _GetPositionIK_Event_type_support_data_t
{
  void * data[2];
} _GetPositionIK_Event_type_support_data_t;

static _GetPositionIK_Event_type_support_data_t _GetPositionIK_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetPositionIK_Event_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_GetPositionIK_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetPositionIK_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetPositionIK_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetPositionIK_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetPositionIK_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &moveit_msgs__srv__GetPositionIK_Event__get_type_hash,
  &moveit_msgs__srv__GetPositionIK_Event__get_type_description,
  &moveit_msgs__srv__GetPositionIK_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::srv::GetPositionIK_Event>()
{
  return &::moveit_msgs::srv::rosidl_typesupport_cpp::GetPositionIK_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, srv, GetPositionIK_Event)() {
  return get_message_type_support_handle<moveit_msgs::srv::GetPositionIK_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "moveit_msgs/srv/detail/get_position_ik__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace moveit_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetPositionIK_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetPositionIK_type_support_ids_t;

static const _GetPositionIK_type_support_ids_t _GetPositionIK_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetPositionIK_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetPositionIK_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetPositionIK_type_support_symbol_names_t _GetPositionIK_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, srv, GetPositionIK)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, srv, GetPositionIK)),
  }
};

typedef struct _GetPositionIK_type_support_data_t
{
  void * data[2];
} _GetPositionIK_type_support_data_t;

static _GetPositionIK_type_support_data_t _GetPositionIK_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetPositionIK_service_typesupport_map = {
  2,
  "moveit_msgs",
  &_GetPositionIK_service_typesupport_ids.typesupport_identifier[0],
  &_GetPositionIK_service_typesupport_symbol_names.symbol_name[0],
  &_GetPositionIK_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetPositionIK_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetPositionIK_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<moveit_msgs::srv::GetPositionIK_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<moveit_msgs::srv::GetPositionIK_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<moveit_msgs::srv::GetPositionIK_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<moveit_msgs::srv::GetPositionIK>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<moveit_msgs::srv::GetPositionIK>,
  &moveit_msgs__srv__GetPositionIK__get_type_hash,
  &moveit_msgs__srv__GetPositionIK__get_type_description,
  &moveit_msgs__srv__GetPositionIK__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<moveit_msgs::srv::GetPositionIK>()
{
  return &::moveit_msgs::srv::rosidl_typesupport_cpp::GetPositionIK_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, srv, GetPositionIK)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<moveit_msgs::srv::GetPositionIK>();
}

#ifdef __cplusplus
}
#endif
