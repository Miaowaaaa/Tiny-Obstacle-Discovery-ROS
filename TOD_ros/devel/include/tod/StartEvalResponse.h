// Generated by gencpp from file tod/StartEvalResponse.msg
// DO NOT EDIT!


#ifndef TOD_MESSAGE_STARTEVALRESPONSE_H
#define TOD_MESSAGE_STARTEVALRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace tod
{
template <class ContainerAllocator>
struct StartEvalResponse_
{
  typedef StartEvalResponse_<ContainerAllocator> Type;

  StartEvalResponse_()
    : ok(false)  {
    }
  StartEvalResponse_(const ContainerAllocator& _alloc)
    : ok(false)  {
  (void)_alloc;
    }



   typedef uint8_t _ok_type;
  _ok_type ok;





  typedef boost::shared_ptr< ::tod::StartEvalResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tod::StartEvalResponse_<ContainerAllocator> const> ConstPtr;

}; // struct StartEvalResponse_

typedef ::tod::StartEvalResponse_<std::allocator<void> > StartEvalResponse;

typedef boost::shared_ptr< ::tod::StartEvalResponse > StartEvalResponsePtr;
typedef boost::shared_ptr< ::tod::StartEvalResponse const> StartEvalResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tod::StartEvalResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tod::StartEvalResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace tod

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'tod': ['/home/robotxf/TOD_python/TOD_ros/src/tod/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::tod::StartEvalResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tod::StartEvalResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tod::StartEvalResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tod::StartEvalResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tod::StartEvalResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tod::StartEvalResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tod::StartEvalResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6f6da3883749771fac40d6deb24a8c02";
  }

  static const char* value(const ::tod::StartEvalResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6f6da3883749771fULL;
  static const uint64_t static_value2 = 0xac40d6deb24a8c02ULL;
};

template<class ContainerAllocator>
struct DataType< ::tod::StartEvalResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tod/StartEvalResponse";
  }

  static const char* value(const ::tod::StartEvalResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tod::StartEvalResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool ok\n\
";
  }

  static const char* value(const ::tod::StartEvalResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tod::StartEvalResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ok);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StartEvalResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tod::StartEvalResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tod::StartEvalResponse_<ContainerAllocator>& v)
  {
    s << indent << "ok: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ok);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TOD_MESSAGE_STARTEVALRESPONSE_H
