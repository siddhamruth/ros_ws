// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bat_led_interfaces:srv/SetLed.idl
// generated code does not contain a copyright notice
#include "bat_led_interfaces/srv/detail/set_led__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
bat_led_interfaces__srv__SetLed_Request__init(bat_led_interfaces__srv__SetLed_Request * msg)
{
  if (!msg) {
    return false;
  }
  // led_number
  // state
  return true;
}

void
bat_led_interfaces__srv__SetLed_Request__fini(bat_led_interfaces__srv__SetLed_Request * msg)
{
  if (!msg) {
    return;
  }
  // led_number
  // state
}

bool
bat_led_interfaces__srv__SetLed_Request__are_equal(const bat_led_interfaces__srv__SetLed_Request * lhs, const bat_led_interfaces__srv__SetLed_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // led_number
  if (lhs->led_number != rhs->led_number) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
bat_led_interfaces__srv__SetLed_Request__copy(
  const bat_led_interfaces__srv__SetLed_Request * input,
  bat_led_interfaces__srv__SetLed_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // led_number
  output->led_number = input->led_number;
  // state
  output->state = input->state;
  return true;
}

bat_led_interfaces__srv__SetLed_Request *
bat_led_interfaces__srv__SetLed_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bat_led_interfaces__srv__SetLed_Request * msg = (bat_led_interfaces__srv__SetLed_Request *)allocator.allocate(sizeof(bat_led_interfaces__srv__SetLed_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bat_led_interfaces__srv__SetLed_Request));
  bool success = bat_led_interfaces__srv__SetLed_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bat_led_interfaces__srv__SetLed_Request__destroy(bat_led_interfaces__srv__SetLed_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bat_led_interfaces__srv__SetLed_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bat_led_interfaces__srv__SetLed_Request__Sequence__init(bat_led_interfaces__srv__SetLed_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bat_led_interfaces__srv__SetLed_Request * data = NULL;

  if (size) {
    data = (bat_led_interfaces__srv__SetLed_Request *)allocator.zero_allocate(size, sizeof(bat_led_interfaces__srv__SetLed_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bat_led_interfaces__srv__SetLed_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bat_led_interfaces__srv__SetLed_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
bat_led_interfaces__srv__SetLed_Request__Sequence__fini(bat_led_interfaces__srv__SetLed_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      bat_led_interfaces__srv__SetLed_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

bat_led_interfaces__srv__SetLed_Request__Sequence *
bat_led_interfaces__srv__SetLed_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bat_led_interfaces__srv__SetLed_Request__Sequence * array = (bat_led_interfaces__srv__SetLed_Request__Sequence *)allocator.allocate(sizeof(bat_led_interfaces__srv__SetLed_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bat_led_interfaces__srv__SetLed_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bat_led_interfaces__srv__SetLed_Request__Sequence__destroy(bat_led_interfaces__srv__SetLed_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bat_led_interfaces__srv__SetLed_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bat_led_interfaces__srv__SetLed_Request__Sequence__are_equal(const bat_led_interfaces__srv__SetLed_Request__Sequence * lhs, const bat_led_interfaces__srv__SetLed_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bat_led_interfaces__srv__SetLed_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bat_led_interfaces__srv__SetLed_Request__Sequence__copy(
  const bat_led_interfaces__srv__SetLed_Request__Sequence * input,
  bat_led_interfaces__srv__SetLed_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bat_led_interfaces__srv__SetLed_Request);
    bat_led_interfaces__srv__SetLed_Request * data =
      (bat_led_interfaces__srv__SetLed_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bat_led_interfaces__srv__SetLed_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          bat_led_interfaces__srv__SetLed_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bat_led_interfaces__srv__SetLed_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
bat_led_interfaces__srv__SetLed_Response__init(bat_led_interfaces__srv__SetLed_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
bat_led_interfaces__srv__SetLed_Response__fini(bat_led_interfaces__srv__SetLed_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
bat_led_interfaces__srv__SetLed_Response__are_equal(const bat_led_interfaces__srv__SetLed_Response * lhs, const bat_led_interfaces__srv__SetLed_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
bat_led_interfaces__srv__SetLed_Response__copy(
  const bat_led_interfaces__srv__SetLed_Response * input,
  bat_led_interfaces__srv__SetLed_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

bat_led_interfaces__srv__SetLed_Response *
bat_led_interfaces__srv__SetLed_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bat_led_interfaces__srv__SetLed_Response * msg = (bat_led_interfaces__srv__SetLed_Response *)allocator.allocate(sizeof(bat_led_interfaces__srv__SetLed_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bat_led_interfaces__srv__SetLed_Response));
  bool success = bat_led_interfaces__srv__SetLed_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bat_led_interfaces__srv__SetLed_Response__destroy(bat_led_interfaces__srv__SetLed_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bat_led_interfaces__srv__SetLed_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bat_led_interfaces__srv__SetLed_Response__Sequence__init(bat_led_interfaces__srv__SetLed_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bat_led_interfaces__srv__SetLed_Response * data = NULL;

  if (size) {
    data = (bat_led_interfaces__srv__SetLed_Response *)allocator.zero_allocate(size, sizeof(bat_led_interfaces__srv__SetLed_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bat_led_interfaces__srv__SetLed_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bat_led_interfaces__srv__SetLed_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
bat_led_interfaces__srv__SetLed_Response__Sequence__fini(bat_led_interfaces__srv__SetLed_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      bat_led_interfaces__srv__SetLed_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

bat_led_interfaces__srv__SetLed_Response__Sequence *
bat_led_interfaces__srv__SetLed_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bat_led_interfaces__srv__SetLed_Response__Sequence * array = (bat_led_interfaces__srv__SetLed_Response__Sequence *)allocator.allocate(sizeof(bat_led_interfaces__srv__SetLed_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bat_led_interfaces__srv__SetLed_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bat_led_interfaces__srv__SetLed_Response__Sequence__destroy(bat_led_interfaces__srv__SetLed_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bat_led_interfaces__srv__SetLed_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bat_led_interfaces__srv__SetLed_Response__Sequence__are_equal(const bat_led_interfaces__srv__SetLed_Response__Sequence * lhs, const bat_led_interfaces__srv__SetLed_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bat_led_interfaces__srv__SetLed_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bat_led_interfaces__srv__SetLed_Response__Sequence__copy(
  const bat_led_interfaces__srv__SetLed_Response__Sequence * input,
  bat_led_interfaces__srv__SetLed_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bat_led_interfaces__srv__SetLed_Response);
    bat_led_interfaces__srv__SetLed_Response * data =
      (bat_led_interfaces__srv__SetLed_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bat_led_interfaces__srv__SetLed_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          bat_led_interfaces__srv__SetLed_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bat_led_interfaces__srv__SetLed_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
