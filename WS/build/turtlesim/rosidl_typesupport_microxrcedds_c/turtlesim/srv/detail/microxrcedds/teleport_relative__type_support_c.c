// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from turtlesim:srv/TeleportRelative.idl
// generated code does not contain a copyright notice
#include "turtlesim/srv/detail/teleport_relative__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "turtlesim/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "turtlesim/srv/detail/teleport_relative__struct.h"
#include "turtlesim/srv/detail/teleport_relative__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


typedef turtlesim__srv__TeleportRelative_Request _TeleportRelative_Request__ros_msg_type;

static bool _TeleportRelative_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _TeleportRelative_Request__ros_msg_type * ros_message = (_TeleportRelative_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: linear
  rv = ucdr_serialize_float(cdr, ros_message->linear);
  // Member: angular
  rv = ucdr_serialize_float(cdr, ros_message->angular);

  return rv;
}

static bool _TeleportRelative_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _TeleportRelative_Request__ros_msg_type * ros_message = (_TeleportRelative_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: linear
  rv = ucdr_deserialize_float(cdr, &ros_message->linear);
  // Field name: angular
  rv = ucdr_deserialize_float(cdr, &ros_message->angular);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_turtlesim
size_t get_serialized_size_turtlesim__srv__TeleportRelative_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _TeleportRelative_Request__ros_msg_type * ros_message = (const _TeleportRelative_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: linear
  {
    const size_t item_size = sizeof(ros_message->linear);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: angular
  {
    const size_t item_size = sizeof(ros_message->angular);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TeleportRelative_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_turtlesim__srv__TeleportRelative_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_turtlesim
size_t max_serialized_size_turtlesim__srv__TeleportRelative_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: linear
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: angular
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);

  return current_alignment - initial_alignment;
}

static size_t _TeleportRelative_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_turtlesim__srv__TeleportRelative_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_TeleportRelative_Request = {
  "turtlesim::srv",
  "TeleportRelative_Request",
  _TeleportRelative_Request__cdr_serialize,
  _TeleportRelative_Request__cdr_deserialize,
  _TeleportRelative_Request__get_serialized_size,
  get_serialized_size_turtlesim__srv__TeleportRelative_Request,
  _TeleportRelative_Request__max_serialized_size
};

static rosidl_message_type_support_t _TeleportRelative_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_TeleportRelative_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, turtlesim, srv, TeleportRelative_Request)() {
  return &_TeleportRelative_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <stdint.h>
// already included above
// #include <stdio.h>
// already included above
// #include <string.h>
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "turtlesim/srv/detail/teleport_relative__struct.h"
// already included above
// #include "turtlesim/srv/detail/teleport_relative__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


typedef turtlesim__srv__TeleportRelative_Response _TeleportRelative_Response__ros_msg_type;

static bool _TeleportRelative_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _TeleportRelative_Response__ros_msg_type * ros_message = (_TeleportRelative_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: structure_needs_at_least_one_member
  rv = ucdr_serialize_uint8_t(cdr, ros_message->structure_needs_at_least_one_member);

  return rv;
}

static bool _TeleportRelative_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _TeleportRelative_Response__ros_msg_type * ros_message = (_TeleportRelative_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: structure_needs_at_least_one_member
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->structure_needs_at_least_one_member);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_turtlesim
size_t get_serialized_size_turtlesim__srv__TeleportRelative_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _TeleportRelative_Response__ros_msg_type * ros_message = (const _TeleportRelative_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: structure_needs_at_least_one_member
  {
    const size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TeleportRelative_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_turtlesim__srv__TeleportRelative_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_turtlesim
size_t max_serialized_size_turtlesim__srv__TeleportRelative_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: structure_needs_at_least_one_member
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);

  return current_alignment - initial_alignment;
}

static size_t _TeleportRelative_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_turtlesim__srv__TeleportRelative_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_TeleportRelative_Response = {
  "turtlesim::srv",
  "TeleportRelative_Response",
  _TeleportRelative_Response__cdr_serialize,
  _TeleportRelative_Response__cdr_deserialize,
  _TeleportRelative_Response__get_serialized_size,
  get_serialized_size_turtlesim__srv__TeleportRelative_Response,
  _TeleportRelative_Response__max_serialized_size
};

static rosidl_message_type_support_t _TeleportRelative_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_TeleportRelative_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, turtlesim, srv, TeleportRelative_Response)() {
  return &_TeleportRelative_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "turtlesim/srv/teleport_relative.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t TeleportRelative__callbacks = {
  "turtlesim::srv",
  "TeleportRelative",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, turtlesim, srv, TeleportRelative_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, turtlesim, srv, TeleportRelative_Response),
};

static rosidl_service_type_support_t TeleportRelative__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &TeleportRelative__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, turtlesim, srv, TeleportRelative)() {
  return &TeleportRelative__handle;
}

#if defined(__cplusplus)
}
#endif
