# generated from rosidl_generator_py/resource/_idl.py.em
# with input from common_msg:msg/LowCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LowCmd(type):
    """Metaclass of message 'LowCmd'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('common_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'common_msg.msg.LowCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__low_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__low_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__low_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__low_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__low_cmd

            from common_msg.msg import MotorCmd
            if MotorCmd.__class__._TYPE_SUPPORT is None:
                MotorCmd.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LowCmd(metaclass=Metaclass_LowCmd):
    """Message class 'LowCmd'."""

    __slots__ = [
        '_motor_cmd',
    ]

    _fields_and_field_types = {
        'motor_cmd': 'common_msg/MotorCmd[30]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['common_msg', 'msg'], 'MotorCmd'), 30),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from common_msg.msg import MotorCmd
        self.motor_cmd = kwargs.get(
            'motor_cmd',
            [MotorCmd() for x in range(30)]
        )

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.motor_cmd != other.motor_cmd:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def motor_cmd(self):
        """Message field 'motor_cmd'."""
        return self._motor_cmd

    @motor_cmd.setter
    def motor_cmd(self, value):
        if __debug__:
            from common_msg.msg import MotorCmd
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 30 and
                 all(isinstance(v, MotorCmd) for v in value) and
                 True), \
                "The 'motor_cmd' field must be a set or sequence with length 30 and each value of type 'MotorCmd'"
        self._motor_cmd = value
