// Generated by gencpp from file map_server/query_uwbResponse.msg
// DO NOT EDIT!


#ifndef MAP_SERVER_MESSAGE_QUERY_UWBRESPONSE_H
#define MAP_SERVER_MESSAGE_QUERY_UWBRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <map_server/point.h>

namespace map_server
{
template <class ContainerAllocator>
struct query_uwbResponse_
{
  typedef query_uwbResponse_<ContainerAllocator> Type;

  query_uwbResponse_()
    : uwb_points()  {
    }
  query_uwbResponse_(const ContainerAllocator& _alloc)
    : uwb_points(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::map_server::point_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::map_server::point_<ContainerAllocator> >::other >  _uwb_points_type;
  _uwb_points_type uwb_points;




  typedef boost::shared_ptr< ::map_server::query_uwbResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::map_server::query_uwbResponse_<ContainerAllocator> const> ConstPtr;

}; // struct query_uwbResponse_

typedef ::map_server::query_uwbResponse_<std::allocator<void> > query_uwbResponse;

typedef boost::shared_ptr< ::map_server::query_uwbResponse > query_uwbResponsePtr;
typedef boost::shared_ptr< ::map_server::query_uwbResponse const> query_uwbResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::map_server::query_uwbResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::map_server::query_uwbResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace map_server

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'map_server': ['/home/paul/cm_code/catkin_ws/src/navigation/map_server/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::map_server::query_uwbResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::map_server::query_uwbResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::map_server::query_uwbResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::map_server::query_uwbResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_server::query_uwbResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_server::query_uwbResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::map_server::query_uwbResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e9286ec18b522eb2d4080cc59d54f4c7";
  }

  static const char* value(const ::map_server::query_uwbResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe9286ec18b522eb2ULL;
  static const uint64_t static_value2 = 0xd4080cc59d54f4c7ULL;
};

template<class ContainerAllocator>
struct DataType< ::map_server::query_uwbResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "map_server/query_uwbResponse";
  }

  static const char* value(const ::map_server::query_uwbResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::map_server::query_uwbResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "point[] uwb_points\n\
\n\
================================================================================\n\
MSG: map_server/point\n\
int64 index\n\
int64 type\n\
string alias\n\
float64 x\n\
float64 y\n\
float64 th\n\
\n\
";
  }

  static const char* value(const ::map_server::query_uwbResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::map_server::query_uwbResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.uwb_points);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct query_uwbResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::map_server::query_uwbResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::map_server::query_uwbResponse_<ContainerAllocator>& v)
  {
    s << indent << "uwb_points[]" << std::endl;
    for (size_t i = 0; i < v.uwb_points.size(); ++i)
    {
      s << indent << "  uwb_points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::map_server::point_<ContainerAllocator> >::stream(s, indent + "    ", v.uwb_points[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAP_SERVER_MESSAGE_QUERY_UWBRESPONSE_H
