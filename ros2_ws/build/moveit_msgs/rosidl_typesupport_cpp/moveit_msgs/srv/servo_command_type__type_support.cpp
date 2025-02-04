// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from moveit_msgs:srv/ServoCommandType.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "moveit_msgs/srv/detail/servo_command_type__functions.h"
#include "moveit_msgs/srv/detail/servo_command_type__struct.hpp"
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

typedef struct _ServoCommandType_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ServoCommandType_Request_type_support_ids_t;

static const _ServoCommandType_Request_type_support_ids_t _ServoCommandType_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ServoCommandType_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ServoCommandType_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ServoCommandType_Request_type_support_symbol_names_t _ServoCommandType_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, srv, ServoCommandType_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, srv, ServoCommandType_Request)),
  }
};

typedef struct _ServoCommandType_Request_type_support_data_t
{
  void * data[2];
} _ServoCommandType_Request_type_support_data_t;

static _ServoCommandType_Request_type_support_data_t _ServoCommandType_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ServoCommandType_Request_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_ServoCommandType_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ServoCommandType_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ServoCommandType_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ServoCommandType_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ServoCommandType_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &moveit_msgs__srv__ServoCommandType_Request__get_type_hash,
  &moveit_msgs__srv__ServoCommandType_Request__get_type_description,
  &moveit_msgs__srv__ServoCommandType_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::srv::ServoCommandType_Request>()
{
  return &::moveit_msgs::srv::rosidl_typesupport_cpp::ServoCommandType_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, srv, ServoCommandType_Request)() {
  return get_message_type_support_handle<moveit_msgs::srv::ServoCommandType_Request>();
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
// #include "moveit_msgs/srv/detail/servo_command_type__functions.h"
// already included above
// #include "moveit_msgs/srv/detail/servo_command_type__struct.hpp"
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

typedef struct _ServoCommandType_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ServoCommandType_Response_type_support_ids_t;

static const _ServoCommandType_Response_type_support_ids_t _ServoCommandType_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ServoCommandType_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ServoCommandType_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ServoCommandType_Response_type_support_symbol_names_t _ServoCommandType_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, srv, ServoCommandType_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, srv, ServoCommandType_Response)),
  }
};

typedef struct _ServoCommandType_Response_type_support_data_t
{
  void * data[2];
} _ServoCommandType_Response_type_support_data_t;

static _ServoCommandType_Response_type_support_data_t _ServoCommandType_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ServoCommandType_Response_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_ServoCommandType_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ServoCommandType_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ServoCommandType_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ServoCommandType_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ServoCommandType_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &moveit_msgs__srv__ServoCommandType_Response__get_type_hash,
  &moveit_msgs__srv__ServoCommandType_Response__get_type_description,
  &moveit_msgs__srv__ServoCommandType_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::srv::ServoCommandType_Response>()
{
  return &::moveit_msgs::srv::rosidl_typesupport_cpp::ServoCommandType_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, srv, ServoCommandType_Response)() {
  return get_message_type_support_handle<moveit_msgs::srv::ServoCommandType_Response>();
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
// #include "moveit_msgs/srv/detail/servo_command_type__functions.h"
// already included above
// #include "moveit_msgs/srv/detail/servo_command_type__struct.hpp"
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

typedef struct _ServoCommandType_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ServoCommandType_Event_type_support_ids_t;

static const _ServoCommandType_Event_type_support_ids_t _ServoCommandType_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ServoCommandType_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ServoCommandType_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ServoCommandType_Event_type_support_symbol_names_t _ServoCommandType_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, srv, ServoCommandType_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, srv, ServoCommandType_Event)),
  }
};

typedef struct _ServoCommandType_Event_type_support_data_t
{
  void * data[2];
} _ServoCommandType_Event_type_support_data_t;

static _ServoCommandType_Event_type_support_data_t _ServoCommandType_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ServoCommandType_Event_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_ServoCommandType_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ServoCommandType_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ServoCommandType_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ServoCommandType_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ServoCommandType_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &moveit_msgs__srv__ServoCommandType_Event__get_type_hash,
  &moveit_msgs__srv__ServoCommandType_Event__get_type_description,
  &moveit_msgs__srv__ServoCommandType_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::srv::ServoCommandType_Event>()
{
  return &::moveit_msgs::srv::rosidl_typesupport_cpp::ServoCommandType_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, srv, ServoCommandType_Event)() {
  return get_message_type_support_handle<moveit_msgs::srv::ServoCommandType_Event>();
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
// #include "moveit_msgs/srv/detail/servo_command_type__struct.hpp"
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

typedef struct _ServoCommandType_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ServoCommandType_type_support_ids_t;

static const _ServoCommandType_type_support_ids_t _ServoCommandType_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ServoCommandType_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ServoCommandType_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ServoCommandType_type_support_symbol_names_t _ServoCommandType_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, srv, ServoCommandType)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, srv, ServoCommandType)),
  }
};

typedef struct _ServoCommandType_type_support_data_t
{
  void * data[2];
} _ServoCommandType_type_support_data_t;

static _ServoCommandType_type_support_data_t _ServoCommandType_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ServoCommandType_service_typesupport_map = {
  2,
  "moveit_msgs",
  &_ServoCommandType_service_typesupport_ids.typesupport_identifier[0],
  &_ServoCommandType_service_typesupport_symbol_names.symbol_name[0],
  &_ServoCommandType_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ServoCommandType_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ServoCommandType_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<moveit_msgs::srv::ServoCommandType_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<moveit_msgs::srv::ServoCommandType_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<moveit_msgs::srv::ServoCommandType_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<moveit_msgs::srv::ServoCommandType>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<moveit_msgs::srv::ServoCommandType>,
  &moveit_msgs__srv__ServoCommandType__get_type_hash,
  &moveit_msgs__srv__ServoCommandType__get_type_description,
  &moveit_msgs__srv__ServoCommandType__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<moveit_msgs::srv::ServoCommandType>()
{
  return &::moveit_msgs::srv::rosidl_typesupport_cpp::ServoCommandType_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, srv, ServoCommandType)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<moveit_msgs::srv::ServoCommandType>();
}

#ifdef __cplusplus
}
#endif
