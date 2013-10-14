
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_CORBA_Interceptor_gnuServerRequestInfo__
#define __gnu_CORBA_Interceptor_gnuServerRequestInfo__

#pragma interface

#include <org/omg/CORBA/LocalObject.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace CORBA
    {
      namespace GIOP
      {
          class ReplyHeader;
          class RequestHeader;
      }
      namespace Interceptor
      {
          class gnuServerRequestInfo;
      }
      namespace Poa
      {
          class gnuServantObject;
      }
        class gnuRequest;
    }
  }
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Any;
          class Object;
          class Policy;
          class TypeCode;
      }
      namespace Dynamic
      {
          class Parameter;
      }
      namespace IOP
      {
          class ServiceContext;
      }
    }
  }
}

class gnu::CORBA::Interceptor::gnuServerRequestInfo : public ::org::omg::CORBA::LocalObject
{

public:
  gnuServerRequestInfo(::gnu::CORBA::Poa::gnuServantObject *, ::gnu::CORBA::GIOP::RequestHeader *, ::gnu::CORBA::GIOP::ReplyHeader *);
  virtual void set_slot(jint, ::org::omg::CORBA::Any *);
  virtual ::org::omg::CORBA::Any * get_slot(jint);
  virtual void reset();
  virtual JArray< jbyte > * object_id();
  virtual jboolean target_is_a(::java::lang::String *);
  virtual JArray< jbyte > * adapter_id();
  virtual ::org::omg::CORBA::Policy * get_server_policy(jint);
  virtual ::java::lang::String * target_most_derived_interface();
  virtual ::java::lang::String * operation();
  virtual JArray< ::org::omg::CORBA::TypeCode * > * exceptions();
  virtual jshort reply_status();
  virtual jint request_id();
  virtual jboolean response_expected();
  virtual void add_reply_service_context(::org::omg::IOP::ServiceContext *, jboolean);
  virtual ::org::omg::CORBA::Any * sending_exception();
  virtual ::org::omg::CORBA::Object * forward_reference();
  virtual ::org::omg::IOP::ServiceContext * get_reply_service_context(jint);
  virtual ::org::omg::IOP::ServiceContext * get_request_service_context(jint);
  virtual JArray< ::java::lang::String * > * operation_context();
  virtual ::org::omg::CORBA::Any * result();
  virtual JArray< ::java::lang::String * > * contexts();
  virtual jshort sync_scope();
  virtual JArray< ::org::omg::Dynamic::Parameter * > * arguments();
  virtual JArray< ::java::lang::String * > * adapter_name();
  virtual ::java::lang::String * orb_id();
  virtual ::java::lang::String * server_id();
private:
  static const jlong serialVersionUID = 1LL;
public: // actually package-private
  ::gnu::CORBA::Poa::gnuServantObject * __attribute__((aligned(__alignof__( ::org::omg::CORBA::LocalObject)))) m_object;
  static ::java::lang::String * not_available;
  JArray< ::org::omg::CORBA::Any * > * m_slots;
public:
  ::gnu::CORBA::GIOP::RequestHeader * m_request_header;
  ::gnu::CORBA::GIOP::ReplyHeader * m_reply_header;
  ::org::omg::CORBA::Object * m_forward_reference;
  ::java::lang::Exception * m_sys_exception;
  ::org::omg::CORBA::Any * m_usr_exception;
  ::gnu::CORBA::gnuRequest * m_request;
  static ::java::lang::Class class$;
};

#endif // __gnu_CORBA_Interceptor_gnuServerRequestInfo__