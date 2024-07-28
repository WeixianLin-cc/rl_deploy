# generated from rosidl_generator_py/resource/_idl.py.em
# with input from common_msg:msg/MotorControlCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorControlCmd(type):
    """Metaclass of message 'MotorControlCmd'."""

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
                'common_msg.msg.MotorControlCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_control_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_control_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_control_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_control_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_control_cmd

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorControlCmd(metaclass=Metaclass_MotorControlCmd):
    """Message class 'MotorControlCmd'."""

    __slots__ = [
        '_mode',
        '_index',
        '_slave',
        '_motor_id',
        '_motor_id_new',
        '_speed',
        '_current',
        '_position',
        '_tau',
        '_kp',
        '_kd',
    ]

    _fields_and_field_types = {
        'mode': 'uint8',
        'index': 'uint8',
        'slave': 'uint8',
        'motor_id': 'uint16',
        'motor_id_new': 'uint16',
        'speed': 'float',
        'current': 'float',
        'position': 'float',
        'tau': 'float',
        'kp': 'float',
        'kd': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mode = kwargs.get('mode', int())
        self.index = kwargs.get('index', int())
        self.slave = kwargs.get('slave', int())
        self.motor_id = kwargs.get('motor_id', int())
        self.motor_id_new = kwargs.get('motor_id_new', int())
        self.speed = kwargs.get('speed', float())
        self.current = kwargs.get('current', float())
        self.position = kwargs.get('position', float())
        self.tau = kwargs.get('tau', float())
        self.kp = kwargs.get('kp', float())
        self.kd = kwargs.get('kd', float())

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
        if self.mode != other.mode:
            return False
        if self.index != other.index:
            return False
        if self.slave != other.slave:
            return False
        if self.motor_id != other.motor_id:
            return False
        if self.motor_id_new != other.motor_id_new:
            return False
        if self.speed != other.speed:
            return False
        if self.current != other.current:
            return False
        if self.position != other.position:
            return False
        if self.tau != other.tau:
            return False
        if self.kp != other.kp:
            return False
        if self.kd != other.kd:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value

    @property
    def index(self):
        """Message field 'index'."""
        return self._index

    @index.setter
    def index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'index' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'index' field must be an unsigned integer in [0, 255]"
        self._index = value

    @property
    def slave(self):
        """Message field 'slave'."""
        return self._slave

    @slave.setter
    def slave(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'slave' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'slave' field must be an unsigned integer in [0, 255]"
        self._slave = value

    @property
    def motor_id(self):
        """Message field 'motor_id'."""
        return self._motor_id

    @motor_id.setter
    def motor_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'motor_id' field must be an unsigned integer in [0, 65535]"
        self._motor_id = value

    @property
    def motor_id_new(self):
        """Message field 'motor_id_new'."""
        return self._motor_id_new

    @motor_id_new.setter
    def motor_id_new(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_id_new' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'motor_id_new' field must be an unsigned integer in [0, 65535]"
        self._motor_id_new = value

    @property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
        self._speed = value

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
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position' field must be of type 'float'"
        self._position = value

    @property
    def tau(self):
        """Message field 'tau'."""
        return self._tau

    @tau.setter
    def tau(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tau' field must be of type 'float'"
        self._tau = value

    @property
    def kp(self):
        """Message field 'kp'."""
        return self._kp

    @kp.setter
    def kp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'kp' field must be of type 'float'"
        self._kp = value

    @property
    def kd(self):
        """Message field 'kd'."""
        return self._kd

    @kd.setter
    def kd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'kd' field must be of type 'float'"
        self._kd = value
