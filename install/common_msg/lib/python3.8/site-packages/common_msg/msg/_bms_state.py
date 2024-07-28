# generated from rosidl_generator_py/resource/_idl.py.em
# with input from common_msg:msg/BmsState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BmsState(type):
    """Metaclass of message 'BmsState'."""

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
                'common_msg.msg.BmsState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bms_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bms_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bms_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bms_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bms_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BmsState(metaclass=Metaclass_BmsState):
    """Message class 'BmsState'."""

    __slots__ = [
        '_voltage',
        '_current',
        '_soc',
        '_remain_capacity',
        '_max_cell_temperature',
        '_status',
        '_error_code',
    ]

    _fields_and_field_types = {
        'voltage': 'float',
        'current': 'float',
        'soc': 'float',
        'remain_capacity': 'float',
        'max_cell_temperature': 'float',
        'status': 'uint8',
        'error_code': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.voltage = kwargs.get('voltage', float())
        self.current = kwargs.get('current', float())
        self.soc = kwargs.get('soc', float())
        self.remain_capacity = kwargs.get('remain_capacity', float())
        self.max_cell_temperature = kwargs.get('max_cell_temperature', float())
        self.status = kwargs.get('status', int())
        self.error_code = kwargs.get('error_code', int())

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
        if self.voltage != other.voltage:
            return False
        if self.current != other.current:
            return False
        if self.soc != other.soc:
            return False
        if self.remain_capacity != other.remain_capacity:
            return False
        if self.max_cell_temperature != other.max_cell_temperature:
            return False
        if self.status != other.status:
            return False
        if self.error_code != other.error_code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def voltage(self):
        """Message field 'voltage'."""
        return self._voltage

    @voltage.setter
    def voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'voltage' field must be of type 'float'"
        self._voltage = value

    @property
    def current(self):
        """Message field 'current'."""
        return self._current

    @current.setter
    def current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current' field must be of type 'float'"
        self._current = value

    @property
    def soc(self):
        """Message field 'soc'."""
        return self._soc

    @soc.setter
    def soc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'soc' field must be of type 'float'"
        self._soc = value

    @property
    def remain_capacity(self):
        """Message field 'remain_capacity'."""
        return self._remain_capacity

    @remain_capacity.setter
    def remain_capacity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'remain_capacity' field must be of type 'float'"
        self._remain_capacity = value

    @property
    def max_cell_temperature(self):
        """Message field 'max_cell_temperature'."""
        return self._max_cell_temperature

    @max_cell_temperature.setter
    def max_cell_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_cell_temperature' field must be of type 'float'"
        self._max_cell_temperature = value

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value

    @property
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error_code' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'error_code' field must be an unsigned integer in [0, 18446744073709551615]"
        self._error_code = value
