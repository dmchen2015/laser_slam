// Generated by gencpp from file localization/localization_register.msg
// DO NOT EDIT!


#ifndef LOCALIZATION_MESSAGE_LOCALIZATION_REGISTER_H
#define LOCALIZATION_MESSAGE_LOCALIZATION_REGISTER_H

#include <ros/service_traits.h>


#include <localization/localization_registerRequest.h>
#include <localization/localization_registerResponse.h>


namespace localization
{

struct localization_register
{

typedef localization_registerRequest Request;
typedef localization_registerResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct localization_register
} // namespace localization


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::localization::localization_register > {
  static const char* value()
  {
    return "c1f3d28f1b044c871e6eff2e9fc3c667";
  }

  static const char* value(const ::localization::localization_register&) { return value(); }
};

template<>
struct DataType< ::localization::localization_register > {
  static const char* value()
  {
    return "localization/localization_register";
  }

  static const char* value(const ::localization::localization_register&) { return value(); }
};


// service_traits::MD5Sum< ::localization::localization_registerRequest> should match 
// service_traits::MD5Sum< ::localization::localization_register > 
template<>
struct MD5Sum< ::localization::localization_registerRequest>
{
  static const char* value()
  {
    return MD5Sum< ::localization::localization_register >::value();
  }
  static const char* value(const ::localization::localization_registerRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::localization::localization_registerRequest> should match 
// service_traits::DataType< ::localization::localization_register > 
template<>
struct DataType< ::localization::localization_registerRequest>
{
  static const char* value()
  {
    return DataType< ::localization::localization_register >::value();
  }
  static const char* value(const ::localization::localization_registerRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::localization::localization_registerResponse> should match 
// service_traits::MD5Sum< ::localization::localization_register > 
template<>
struct MD5Sum< ::localization::localization_registerResponse>
{
  static const char* value()
  {
    return MD5Sum< ::localization::localization_register >::value();
  }
  static const char* value(const ::localization::localization_registerResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::localization::localization_registerResponse> should match 
// service_traits::DataType< ::localization::localization_register > 
template<>
struct DataType< ::localization::localization_registerResponse>
{
  static const char* value()
  {
    return DataType< ::localization::localization_register >::value();
  }
  static const char* value(const ::localization::localization_registerResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // LOCALIZATION_MESSAGE_LOCALIZATION_REGISTER_H
