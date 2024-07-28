# generated from rosidl_generator_py/resource/_idl.py.em
# with input from common_msg:msg/FootSensor.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'left_foot_sensor'
# Member 'right_foot_sensor'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FootSensor(type):
    """Metaclass of message 'FootSensor'."""

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
                'common_msg.msg.FootSensor')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__foot_sensor
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__foot_sensor
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__foot_sensor
            cls._TYPE_SUPPORT = module.type_support_msg__msg__foot_sensor
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__foot_sensor

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FootSensor(metaclass=Metaclass_FootSensor):
    """Message class 'FootSensor'."""

    __slots__ = [
        '_left_foot_sensor',
        '_right_foot_sensor',
    ]

    _fields_and_field_types = {
        'left_foot_sensor': 'float[18]',
        'right_foot_sensor': 'float[18]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 18),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 18),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'left_foot_sensor' not in kwargs:
            self.left_foot_sensor = numpy.zeros(18, dtype=numpy.float32)
        else:
            self.left_foot_sensor = numpy.array(kwargs.get('left_foot_sensor'), dtype=numpy.float32)
            assert self.left_foot_sensor.shape == (18, )
        if 'right_foot_sensor' not in kwargs:
            self.right_foot_sensor = numpy.zeros(18, dtype=numpy.float32)
        else:
            self.right_foot_sensor = numpy.array(kwargs.get('right_foot_sensor'), dtype=numpy.float32)
            assert self.right_foot_sensor.shape == (18, )

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
        if all(self.left_foot_sensor != other.left_foot_sensor):
            return False
        if all(self.right_foot_sensor != other.right_foot_sensor):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def left_foot_sensor(self):
        """Message field 'left_foot_sensor'."""
        return self._left_foot_sensor

    @left_foot_sensor.setter
    def left_foot_sensor(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'left_foot_sensor' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 18, \
                "The 'left_foot_sensor' numpy.ndarray() must have a size of 18"
            self._left_foot_sensor = value
            return
        if __debug__:
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
                 len(value) == 18 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'left_foot_sensor' field must be a set or sequence with length 18 and each value of type 'float'"
        self._left_foot_sensor = numpy.array(value, dtype=numpy.float32)

    @property
    def right_foot_sensor(self):
        """Message field 'right_foot_sensor'."""
        return self._right_foot_sensor

    @right_foot_sensor.setter
    def right_foot_sensor(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'right_foot_sensor' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 18, \
                "The 'right_foot_sensor' numpy.ndarray() must have a size of 18"
            self._right_foot_sensor = value
            return
        if __debug__:
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
                 len(value) == 18 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'right_foot_sensor' field must be a set or sequence with length 18 and each value of type 'float'"
        self._right_foot_sensor = numpy.array(value, dtype=numpy.float32)
