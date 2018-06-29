// Generated by gencpp from file map_server/point.msg
// DO NOT EDIT!


#ifndef MAP_SERVER_MESSAGE_POINT_H
#define MAP_SERVER_MESSAGE_POINT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace map_server
{
template <class ContainerAllocator>
struct point_
{
  typedef point_<ContainerAllocator> Type;

  point_()
    : index(0)
    , type(0)
    , alias()
    , x(0.0)
    , y(0.0)
    , th(0.0)  {
    }
  point_(const ContainerAllocator& _alloc)
    : index(0)
    , type(0)
    , alias(_alloc)
    , x(0.0)
    , y(0.0)
    , th(0.0)  {
  (void)_alloc;
    }



   typedef int64_t _index_type;
  _index_type index;

   typedef int64_t _type_type;
  _type_type type;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _alias_type;
  _alias_type alias;

   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _th_type;
  _th_type th;




  typedef boost::shared_ptr< ::map_server::point_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::map_server::point_<ContainerAllocator> const> ConstPtr;

}; // struct point_

typedef ::map_server::point_<std::allocator<void> > point;

typedef boost::shared_ptr< ::map_server::point > pointPtr;
typedef boost::shared_ptr< ::map_server::point const> pointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::map_server::point_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::map_server::point_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::map_server::point_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::map_server::point_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::map_server::point_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::map_server::point_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_server::point_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_server::point_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::map_server::point_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d506a4f34339d629aba69fc7bc8748d7";
  }

  static const char* value(const ::map_server::point_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd506a4f34339d629ULL;
  static const uint64_t static_value2 = 0xaba69fc7bc8748d7ULL;
};

template<class ContainerAllocator>
struct DataType< ::map_server::point_<ContainerAllocator> >
{
  static const char* value()
  {
    return "map_server/point";
  }

  static const char* value(const ::map_server::point_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::map_server::point_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 index\n\
int64 type\n\
string alias\n\
float64 x\n\
float64 y\n\
float64 th\n\
\n\
";
  }

  static const char* value(const ::map_server::point_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::map_server::point_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.index);
      stream.next(m.type);
      stream.next(m.alias);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.th);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct point_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::map_server::point_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::map_server::point_<ContainerAllocator>& v)
  {
    s << indent << "index: ";
    Printer<int64_t>::stream(s, indent + "  ", v.index);
    s << indent << "type: ";
    Printer<int64_t>::stream(s, indent + "  ", v.type);
    s << indent << "alias: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.alias);
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "th: ";
    Printer<double>::stream(s, indent + "  ", v.th);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAP_SERVER_MESSAGE_POINT_H