# Generated by the protocol buffer compiler.  DO NOT EDIT!

from google.protobuf import descriptor
from google.protobuf import message
from google.protobuf import reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)


DESCRIPTOR = descriptor.FileDescriptor(
  name='uRPC.proto',
  package='urpc.pb',
  serialized_pb='\n\nuRPC.proto\x12\x07urpc.pb\x1a\tLog.proto\"<\n\x07Request\x12\x0f\n\x07service\x18\x01 \x01(\t\x12\x0f\n\x07version\x18\x02 \x01(\x05\x12\x0f\n\x07message\x18\x03 \x01(\x0c\"E\n\x08Response\x12\r\n\x05\x65rror\x18\x01 \x01(\x08\x12\x0f\n\x07message\x18\x02 \x01(\x0c\x12\x19\n\x03log\x18\x03 \x03(\x0b\x32\x0c.urpc.pb.Log\"\xc5\x01\n\x06Server\x12&\n\x06record\x18\x01 \x03(\x0b\x32\x16.urpc.pb.Server.Record\x1a\x92\x01\n\x06Record\x12\x0f\n\x07service\x18\x01 \x01(\t\x12\x0c\n\x04name\x18\x02 \x01(\t\x12\x0b\n\x03ttl\x18\x03 \x01(\x05\x12\x10\n\x08priority\x18\x04 \x01(\x05\x12\x0e\n\x06weight\x18\x05 \x01(\x05\x12\x0c\n\x04port\x18\x06 \x01(\x05\x12\x0e\n\x06target\x18\x07 \x01(\t\"\x1c\n\x08protocal\x12\x07\n\x03TCP\x10\x01\x12\x07\n\x03UDP\x10\x02\"\x9c\x01\n\x0eKeyValueSeries\x12\x32\n\x08keyValue\x18\x01 \x03(\x0b\x32 .urpc.pb.KeyValueSeries.KeyValue\x1aV\n\x08KeyValue\x12\x0b\n\x03key\x18\x01 \x01(\t\x12\r\n\x05value\x18\x02 \x01(\x0c\".\n\tvalueType\x12\n\n\x06STRING\x10\x01\x12\n\n\x06\x44OUBLE\x10\x02\x12\t\n\x05INT32\x10\x03')



_SERVER_RECORD_PROTOCAL = descriptor.EnumDescriptor(
  name='protocal',
  full_name='urpc.pb.Server.Record.protocal',
  filename=None,
  file=DESCRIPTOR,
  values=[
    descriptor.EnumValueDescriptor(
      name='TCP', index=0, number=1,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='UDP', index=1, number=2,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=337,
  serialized_end=365,
)

_KEYVALUESERIES_KEYVALUE_VALUETYPE = descriptor.EnumDescriptor(
  name='valueType',
  full_name='urpc.pb.KeyValueSeries.KeyValue.valueType',
  filename=None,
  file=DESCRIPTOR,
  values=[
    descriptor.EnumValueDescriptor(
      name='STRING', index=0, number=1,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='DOUBLE', index=1, number=2,
      options=None,
      type=None),
    descriptor.EnumValueDescriptor(
      name='INT32', index=2, number=3,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=478,
  serialized_end=524,
)


_REQUEST = descriptor.Descriptor(
  name='Request',
  full_name='urpc.pb.Request',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='service', full_name='urpc.pb.Request.service', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='version', full_name='urpc.pb.Request.version', index=1,
      number=2, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='message', full_name='urpc.pb.Request.message', index=2,
      number=3, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value="",
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=34,
  serialized_end=94,
)


_RESPONSE = descriptor.Descriptor(
  name='Response',
  full_name='urpc.pb.Response',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='error', full_name='urpc.pb.Response.error', index=0,
      number=1, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='message', full_name='urpc.pb.Response.message', index=1,
      number=2, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value="",
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='log', full_name='urpc.pb.Response.log', index=2,
      number=3, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=96,
  serialized_end=165,
)


_SERVER_RECORD = descriptor.Descriptor(
  name='Record',
  full_name='urpc.pb.Server.Record',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='service', full_name='urpc.pb.Server.Record.service', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='name', full_name='urpc.pb.Server.Record.name', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='ttl', full_name='urpc.pb.Server.Record.ttl', index=2,
      number=3, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='priority', full_name='urpc.pb.Server.Record.priority', index=3,
      number=4, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='weight', full_name='urpc.pb.Server.Record.weight', index=4,
      number=5, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='port', full_name='urpc.pb.Server.Record.port', index=5,
      number=6, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='target', full_name='urpc.pb.Server.Record.target', index=6,
      number=7, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _SERVER_RECORD_PROTOCAL,
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=219,
  serialized_end=365,
)

_SERVER = descriptor.Descriptor(
  name='Server',
  full_name='urpc.pb.Server',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='record', full_name='urpc.pb.Server.record', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_SERVER_RECORD, ],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=168,
  serialized_end=365,
)


_KEYVALUESERIES_KEYVALUE = descriptor.Descriptor(
  name='KeyValue',
  full_name='urpc.pb.KeyValueSeries.KeyValue',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='key', full_name='urpc.pb.KeyValueSeries.KeyValue.key', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='value', full_name='urpc.pb.KeyValueSeries.KeyValue.value', index=1,
      number=2, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value="",
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _KEYVALUESERIES_KEYVALUE_VALUETYPE,
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=438,
  serialized_end=524,
)

_KEYVALUESERIES = descriptor.Descriptor(
  name='KeyValueSeries',
  full_name='urpc.pb.KeyValueSeries',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='keyValue', full_name='urpc.pb.KeyValueSeries.keyValue', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_KEYVALUESERIES_KEYVALUE, ],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=368,
  serialized_end=524,
)

import Log_pb2

_RESPONSE.fields_by_name['log'].message_type = Log_pb2._LOG
_SERVER_RECORD.containing_type = _SERVER;
_SERVER_RECORD_PROTOCAL.containing_type = _SERVER_RECORD;
_SERVER.fields_by_name['record'].message_type = _SERVER_RECORD
_KEYVALUESERIES_KEYVALUE.containing_type = _KEYVALUESERIES;
_KEYVALUESERIES_KEYVALUE_VALUETYPE.containing_type = _KEYVALUESERIES_KEYVALUE;
_KEYVALUESERIES.fields_by_name['keyValue'].message_type = _KEYVALUESERIES_KEYVALUE

class Request(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _REQUEST
  
  # @@protoc_insertion_point(class_scope:urpc.pb.Request)

class Response(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _RESPONSE
  
  # @@protoc_insertion_point(class_scope:urpc.pb.Response)

class Server(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  
  class Record(message.Message):
    __metaclass__ = reflection.GeneratedProtocolMessageType
    DESCRIPTOR = _SERVER_RECORD
    
    # @@protoc_insertion_point(class_scope:urpc.pb.Server.Record)
  DESCRIPTOR = _SERVER
  
  # @@protoc_insertion_point(class_scope:urpc.pb.Server)

class KeyValueSeries(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  
  class KeyValue(message.Message):
    __metaclass__ = reflection.GeneratedProtocolMessageType
    DESCRIPTOR = _KEYVALUESERIES_KEYVALUE
    
    # @@protoc_insertion_point(class_scope:urpc.pb.KeyValueSeries.KeyValue)
  DESCRIPTOR = _KEYVALUESERIES
  
  # @@protoc_insertion_point(class_scope:urpc.pb.KeyValueSeries)

# @@protoc_insertion_point(module_scope)
