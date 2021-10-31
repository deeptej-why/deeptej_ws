// Generated by gencpp from file custom_msg/count.msg
// DO NOT EDIT!


#ifndef CUSTOM_MSG_MESSAGE_COUNT_H
#define CUSTOM_MSG_MESSAGE_COUNT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace custom_msg
{
template <class ContainerAllocator>
struct count_
{
  typedef count_<ContainerAllocator> Type;

  count_()
    : header()
    , count(0)  {
    }
  count_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , count(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int64_t _count_type;
  _count_type count;





  typedef boost::shared_ptr< ::custom_msg::count_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::custom_msg::count_<ContainerAllocator> const> ConstPtr;

}; // struct count_

typedef ::custom_msg::count_<std::allocator<void> > count;

typedef boost::shared_ptr< ::custom_msg::count > countPtr;
typedef boost::shared_ptr< ::custom_msg::count const> countConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::custom_msg::count_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::custom_msg::count_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::custom_msg::count_<ContainerAllocator1> & lhs, const ::custom_msg::count_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.count == rhs.count;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::custom_msg::count_<ContainerAllocator1> & lhs, const ::custom_msg::count_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace custom_msg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::custom_msg::count_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::custom_msg::count_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::custom_msg::count_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::custom_msg::count_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::custom_msg::count_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::custom_msg::count_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::custom_msg::count_<ContainerAllocator> >
{
  static const char* value()
  {
    return "631e76a69a767b4f88df6b5255a9f238";
  }

  static const char* value(const ::custom_msg::count_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x631e76a69a767b4fULL;
  static const uint64_t static_value2 = 0x88df6b5255a9f238ULL;
};

template<class ContainerAllocator>
struct DataType< ::custom_msg::count_<ContainerAllocator> >
{
  static const char* value()
  {
    return "custom_msg/count";
  }

  static const char* value(const ::custom_msg::count_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::custom_msg::count_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"int64 count\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::custom_msg::count_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::custom_msg::count_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.count);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct count_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::custom_msg::count_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::custom_msg::count_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "count: ";
    Printer<int64_t>::stream(s, indent + "  ", v.count);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CUSTOM_MSG_MESSAGE_COUNT_H
