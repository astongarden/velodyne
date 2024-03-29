// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cloud_msgs:msg/CloudInfo.idl
// generated code does not contain a copyright notice
#include "cloud_msgs/msg/detail/cloud_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cloud_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cloud_msgs/msg/detail/cloud_info__struct.h"
#include "cloud_msgs/msg/detail/cloud_info__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // end_ring_index, segmented_cloud_col_ind, segmented_cloud_ground_flag, segmented_cloud_range, start_ring_index
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // end_ring_index, segmented_cloud_col_ind, segmented_cloud_ground_flag, segmented_cloud_range, start_ring_index
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cloud_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cloud_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cloud_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _CloudInfo__ros_msg_type = cloud_msgs__msg__CloudInfo;

static bool _CloudInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CloudInfo__ros_msg_type * ros_message = static_cast<const _CloudInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: start_ring_index
  {
    size_t size = ros_message->start_ring_index.size;
    auto array_ptr = ros_message->start_ring_index.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: end_ring_index
  {
    size_t size = ros_message->end_ring_index.size;
    auto array_ptr = ros_message->end_ring_index.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: start_orientation
  {
    cdr << ros_message->start_orientation;
  }

  // Field name: end_orientation
  {
    cdr << ros_message->end_orientation;
  }

  // Field name: orientation_diff
  {
    cdr << ros_message->orientation_diff;
  }

  // Field name: segmented_cloud_ground_flag
  {
    size_t size = ros_message->segmented_cloud_ground_flag.size;
    auto array_ptr = ros_message->segmented_cloud_ground_flag.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: segmented_cloud_col_ind
  {
    size_t size = ros_message->segmented_cloud_col_ind.size;
    auto array_ptr = ros_message->segmented_cloud_col_ind.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: segmented_cloud_range
  {
    size_t size = ros_message->segmented_cloud_range.size;
    auto array_ptr = ros_message->segmented_cloud_range.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _CloudInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CloudInfo__ros_msg_type * ros_message = static_cast<_CloudInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: start_ring_index
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->start_ring_index.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->start_ring_index);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->start_ring_index, size)) {
      return "failed to create array for field 'start_ring_index'";
    }
    auto array_ptr = ros_message->start_ring_index.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: end_ring_index
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->end_ring_index.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->end_ring_index);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->end_ring_index, size)) {
      return "failed to create array for field 'end_ring_index'";
    }
    auto array_ptr = ros_message->end_ring_index.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: start_orientation
  {
    cdr >> ros_message->start_orientation;
  }

  // Field name: end_orientation
  {
    cdr >> ros_message->end_orientation;
  }

  // Field name: orientation_diff
  {
    cdr >> ros_message->orientation_diff;
  }

  // Field name: segmented_cloud_ground_flag
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->segmented_cloud_ground_flag.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->segmented_cloud_ground_flag);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->segmented_cloud_ground_flag, size)) {
      return "failed to create array for field 'segmented_cloud_ground_flag'";
    }
    auto array_ptr = ros_message->segmented_cloud_ground_flag.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: segmented_cloud_col_ind
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->segmented_cloud_col_ind.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->segmented_cloud_col_ind);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->segmented_cloud_col_ind, size)) {
      return "failed to create array for field 'segmented_cloud_col_ind'";
    }
    auto array_ptr = ros_message->segmented_cloud_col_ind.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: segmented_cloud_range
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->segmented_cloud_range.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->segmented_cloud_range);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->segmented_cloud_range, size)) {
      return "failed to create array for field 'segmented_cloud_range'";
    }
    auto array_ptr = ros_message->segmented_cloud_range.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cloud_msgs
size_t get_serialized_size_cloud_msgs__msg__CloudInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CloudInfo__ros_msg_type * ros_message = static_cast<const _CloudInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name start_ring_index
  {
    size_t array_size = ros_message->start_ring_index.size;
    auto array_ptr = ros_message->start_ring_index.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name end_ring_index
  {
    size_t array_size = ros_message->end_ring_index.size;
    auto array_ptr = ros_message->end_ring_index.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name start_orientation
  {
    size_t item_size = sizeof(ros_message->start_orientation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name end_orientation
  {
    size_t item_size = sizeof(ros_message->end_orientation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name orientation_diff
  {
    size_t item_size = sizeof(ros_message->orientation_diff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name segmented_cloud_ground_flag
  {
    size_t array_size = ros_message->segmented_cloud_ground_flag.size;
    auto array_ptr = ros_message->segmented_cloud_ground_flag.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name segmented_cloud_col_ind
  {
    size_t array_size = ros_message->segmented_cloud_col_ind.size;
    auto array_ptr = ros_message->segmented_cloud_col_ind.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name segmented_cloud_range
  {
    size_t array_size = ros_message->segmented_cloud_range.size;
    auto array_ptr = ros_message->segmented_cloud_range.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CloudInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cloud_msgs__msg__CloudInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cloud_msgs
size_t max_serialized_size_cloud_msgs__msg__CloudInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: start_ring_index
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: end_ring_index
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: start_orientation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: end_orientation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: orientation_diff
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: segmented_cloud_ground_flag
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: segmented_cloud_col_ind
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: segmented_cloud_range
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _CloudInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cloud_msgs__msg__CloudInfo(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CloudInfo = {
  "cloud_msgs::msg",
  "CloudInfo",
  _CloudInfo__cdr_serialize,
  _CloudInfo__cdr_deserialize,
  _CloudInfo__get_serialized_size,
  _CloudInfo__max_serialized_size
};

static rosidl_message_type_support_t _CloudInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CloudInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cloud_msgs, msg, CloudInfo)() {
  return &_CloudInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
