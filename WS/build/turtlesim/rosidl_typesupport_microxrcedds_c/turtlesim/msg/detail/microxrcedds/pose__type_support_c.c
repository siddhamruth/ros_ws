// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from turtlesim:msg/Pose.idl
// generated code does not contain a copyright notice
#include "turtlesim/msg/detail/pose__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "turtlesim/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "turtlesim/msg/detail/pose__struct.h"
#include "turtlesim/msg/detail/pose__functions.h"

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


typedef turtlesim__msg__Pose _Pose__ros_msg_type;

static bool _Pose__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Pose__ros_msg_type * ros_message = (_Pose__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: x
  rv = ucdr_serialize_float(cdr, ros_message->x);
  // Member: y
  rv = ucdr_serialize_float(cdr, ros_message->y);
  // Member: theta
  rv = ucdr_serialize_float(cdr, ros_message->theta);
  // Member: linear_velocity
  rv = ucdr_serialize_float(cdr, ros_message->linear_velocity);
  // Member: angular_velocity
  rv = ucdr_serialize_float(cdr, ros_message->angular_velocity);

  return rv;
}

static bool _Pose__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Pose__ros_msg_type * ros_message = (_Pose__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: x
  rv = ucdr_deserialize_float(cdr, &ros_message->x);
  // Field name: y
  rv = ucdr_deserialize_float(cdr, &ros_message->y);
  // Field name: theta
  rv = ucdr_deserialize_float(cdr, &ros_message->theta);
  // Field name: linear_velocity
  rv = ucdr_deserialize_float(cdr, &ros_message->linear_velocity);
  // Field name: angular_velocity
  rv = ucdr_deserialize_float(cdr, &ros_message->angular_velocity);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_turtlesim
size_t get_serialized_size_turtlesim__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Pose__ros_msg_type * ros_message = (const _Pose__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: x
  {
    const size_t item_size = sizeof(ros_message->x);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: y
  {
    const size_t item_size = sizeof(ros_message->y);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: theta
  {
    const size_t item_size = sizeof(ros_message->theta);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: linear_velocity
  {
    const size_t item_size = sizeof(ros_message->linear_velocity);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: angular_velocity
  {
    const size_t item_size = sizeof(ros_message->angular_velocity);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Pose__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_turtlesim__msg__Pose(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_turtlesim
size_t max_serialized_size_turtlesim__msg__Pose(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: x
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: y
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: theta
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: linear_velocity
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: angular_velocity
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);

  return current_alignment - initial_alignment;
}

static size_t _Pose__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_turtlesim__msg__Pose(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Pose = {
  "turtlesim::msg",
  "Pose",
  _Pose__cdr_serialize,
  _Pose__cdr_deserialize,
  _Pose__get_serialized_size,
  get_serialized_size_turtlesim__msg__Pose,
  _Pose__max_serialized_size
};

static rosidl_message_type_support_t _Pose__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Pose,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, turtlesim, msg, Pose)() {
  return &_Pose__type_support;
}

#if defined(__cplusplus)
}
#endif
