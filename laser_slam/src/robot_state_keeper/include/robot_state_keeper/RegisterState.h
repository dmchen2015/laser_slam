// Generated by gencpp from file robot_state_keeper/RegisterState.msg
// DO NOT EDIT!


#ifndef ROBOT_STATE_KEEPER_MESSAGE_REGISTERSTATE_H
#define ROBOT_STATE_KEEPER_MESSAGE_REGISTERSTATE_H

#include <ros/service_traits.h>


#include <robot_state_keeper/RegisterStateRequest.h>
#include <robot_state_keeper/RegisterStateResponse.h>


namespace robot_state_keeper
{

struct RegisterState
{

typedef RegisterStateRequest Request;
typedef RegisterStateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct RegisterState
} // namespace robot_state_keeper


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::robot_state_keeper::RegisterState > {
  static const char* value()
  {
    return "05ff8c2185bfdd0d88aaaf1c749cc8a6";
  }

  static const char* value(const ::robot_state_keeper::RegisterState&) { return value(); }
};

template<>
struct DataType< ::robot_state_keeper::RegisterState > {
  static const char* value()
  {
    return "robot_state_keeper/RegisterState";
  }

  static const char* value(const ::robot_state_keeper::RegisterState&) { return value(); }
};


// service_traits::MD5Sum< ::robot_state_keeper::RegisterStateRequest> should match 
// service_traits::MD5Sum< ::robot_state_keeper::RegisterState > 
template<>
struct MD5Sum< ::robot_state_keeper::RegisterStateRequest>
{
  static const char* value()
  {
    return MD5Sum< ::robot_state_keeper::RegisterState >::value();
  }
  static const char* value(const ::robot_state_keeper::RegisterStateRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::robot_state_keeper::RegisterStateRequest> should match 
// service_traits::DataType< ::robot_state_keeper::RegisterState > 
template<>
struct DataType< ::robot_state_keeper::RegisterStateRequest>
{
  static const char* value()
  {
    return DataType< ::robot_state_keeper::RegisterState >::value();
  }
  static const char* value(const ::robot_state_keeper::RegisterStateRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::robot_state_keeper::RegisterStateResponse> should match 
// service_traits::MD5Sum< ::robot_state_keeper::RegisterState > 
template<>
struct MD5Sum< ::robot_state_keeper::RegisterStateResponse>
{
  static const char* value()
  {
    return MD5Sum< ::robot_state_keeper::RegisterState >::value();
  }
  static const char* value(const ::robot_state_keeper::RegisterStateResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::robot_state_keeper::RegisterStateResponse> should match 
// service_traits::DataType< ::robot_state_keeper::RegisterState > 
template<>
struct DataType< ::robot_state_keeper::RegisterStateResponse>
{
  static const char* value()
  {
    return DataType< ::robot_state_keeper::RegisterState >::value();
  }
  static const char* value(const ::robot_state_keeper::RegisterStateResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBOT_STATE_KEEPER_MESSAGE_REGISTERSTATE_H
