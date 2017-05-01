/**
 * Autogenerated by Thrift Compiler (0.10.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "test_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>




message::~message() throw() {
}


void message::__set_uid(const int32_t val) {
  this->uid = val;
}

void message::__set_line(const std::string& val) {
  this->line = val;
}

uint32_t message::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->uid);
          this->__isset.uid = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->line);
          this->__isset.line = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t message::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("message");

  xfer += oprot->writeFieldBegin("uid", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->uid);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("line", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->line);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(message &a, message &b) {
  using ::std::swap;
  swap(a.uid, b.uid);
  swap(a.line, b.line);
  swap(a.__isset, b.__isset);
}

message::message(const message& other0) {
  uid = other0.uid;
  line = other0.line;
  __isset = other0.__isset;
}
message& message::operator=(const message& other1) {
  uid = other1.uid;
  line = other1.line;
  __isset = other1.__isset;
  return *this;
}
void message::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "message(";
  out << "uid=" << to_string(uid);
  out << ", " << "line=" << to_string(line);
  out << ")";
}


InvalidValueException::~InvalidValueException() throw() {
}


void InvalidValueException::__set_error_code(const int32_t val) {
  this->error_code = val;
}

void InvalidValueException::__set_error_msg(const std::string& val) {
  this->error_msg = val;
}

uint32_t InvalidValueException::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->error_code);
          this->__isset.error_code = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->error_msg);
          this->__isset.error_msg = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t InvalidValueException::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("InvalidValueException");

  xfer += oprot->writeFieldBegin("error_code", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->error_code);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("error_msg", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->error_msg);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(InvalidValueException &a, InvalidValueException &b) {
  using ::std::swap;
  swap(a.error_code, b.error_code);
  swap(a.error_msg, b.error_msg);
  swap(a.__isset, b.__isset);
}

InvalidValueException::InvalidValueException(const InvalidValueException& other2) : TException() {
  error_code = other2.error_code;
  error_msg = other2.error_msg;
  __isset = other2.__isset;
}
InvalidValueException& InvalidValueException::operator=(const InvalidValueException& other3) {
  error_code = other3.error_code;
  error_msg = other3.error_msg;
  __isset = other3.__isset;
  return *this;
}
void InvalidValueException::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "InvalidValueException(";
  out << "error_code=" << to_string(error_code);
  out << ", " << "error_msg=" << to_string(error_msg);
  out << ")";
}

const char* InvalidValueException::what() const throw() {
  try {
    std::stringstream ss;
    ss << "TException - service has thrown: " << *this;
    this->thriftTExceptionMessageHolder_ = ss.str();
    return this->thriftTExceptionMessageHolder_.c_str();
  } catch (const std::exception&) {
    return "TException - service has thrown: InvalidValueException";
  }
}

