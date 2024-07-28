# generated from rosidl_generator_py/resource/_idl.py.em
# with input from common_msg:msg/LowState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LowState(type):
    """Metaclass of message 'LowState'."""

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
                'common_msg.msg.LowState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__low_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__low_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__low_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__low_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__low_state

            from common_msg.msg import BmsState
            if BmsState.__class__._TYPE_SUPPORT is None:
                BmsState.__class__.__import_type_support__()

            from common_msg.msg import FootSensor
            if FootSensor.__class__._TYPE_SUPPORT is None:
                FootSensor.__class__.__import_type_support__()

            from common_msg.msg import Imu
            if Imu.__class__._TYPE_SUPPORT is None:
                Imu.__class__.__import_type_support__()

            from common_msg.msg import MotorState
            if MotorState.__class__._TYPE_SUPPORT is None:
                MotorState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LowState(metaclass=Metaclass_LowState):
    """Message class 'LowState'."""

    __slots__ = [
        '_motor_state_struct',
        '_imu_state_struct',
        '_bms_state_struct',
        '_foot_senser_state_struct',
    ]

    _fields_and_field_types = {
        'motor_state_struct': 'common_msg/MotorState[30]',
        'imu_state_struct': 'common_msg/Imu',
        'bms_state_struct': 'common_msg/BmsState',
        'foot_senser_state_struct': 'common_msg/FootSensor',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['common_msg', 'msg'], 'MotorState'), 30),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['common_msg', 'msg'], 'Imu'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['common_msg', 'msg'], 'BmsState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['common_msg', 'msg'], 'FootSensor'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from common_msg.msg import MotorState
        self.motor_state_struct = kwargs.get(
            'motor_state_struct',
            [MotorState() for x in range(30)]
        )
        from common_msg.msg import Imu
        self.imu_state_struct = kwargs.get('imu_state_struct', Imu())
        from common_msg.msg import BmsState
        self.bms_state_struct = kwargs.get('bms_state_struct', BmsState())
        from common_msg.msg import FootSensor
        self.foot_senser_state_struct = kwargs.get('foot_senser_state_struct', FootSensor())

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
        if self.motor_state_struct != other.motor_state_struct:
            return False
        if self.imu_state_struct != other.imu_state_struct:
            return False
        if self.bms_state_struct != other.bms_state_struct:
            return False
        if self.foot_senser_state_struct != other.foot_senser_state_struct:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def motor_state_struct(self):
        """Message field 'motor_state_struct'."""
        return self._motor_state_struct

    @motor_state_struct.setter
    def motor_state_struct(self, value):
        if __debug__:
            from common_msg.msg import MotorState
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
                 all(isinstance(v, MotorState) for v in value) and
                 True), \
                "The 'motor_state_struct' field must be a set or sequence with length 30 and each value of type 'MotorState'"
        self._motor_state_struct = value

    @property
    def imu_state_struct(self):
        """Message field 'imu_state_struct'."""
        return self._imu_state_struct

    @imu_state_struct.setter
    def imu_state_struct(self, value):
        if __debug__:
            from common_msg.msg import Imu
            assert \
                isinstance(value, Imu), \
                "The 'imu_state_struct' field must be a sub message of type 'Imu'"
        self._imu_state_struct = value

    @property
    def bms_state_struct(self):
        """Message field 'bms_state_struct'."""
        return self._bms_state_struct

    @bms_state_struct.setter
    def bms_state_struct(self, value):
        if __debug__:
            from common_msg.msg import BmsState
            assert \
                isinstance(value, BmsState), \
                "The 'bms_state_struct' field must be a sub message of type 'BmsState'"
        self._bms_state_struct = value

    @property
    def foot_senser_state_struct(self):
        """Message field 'foot_senser_state_struct'."""
        return self._foot_senser_state_struct

    @foot_senser_state_struct.setter
    def foot_senser_state_struct(self, value):
        if __debug__:
            from common_msg.msg import FootSensor
            assert \
                isinstance(value, FootSensor), \
                "The 'foot_senser_state_struct' field must be a sub message of type 'FootSensor'"
        self._foot_senser_state_struct = value
