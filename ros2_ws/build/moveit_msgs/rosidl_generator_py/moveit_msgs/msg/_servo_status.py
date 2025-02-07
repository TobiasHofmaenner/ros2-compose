# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:msg/ServoStatus.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ServoStatus(type):
    """Metaclass of message 'ServoStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'INVALID': -1,
        'NO_WARNING': 0,
        'DECELERATE_FOR_APPROACHING_SINGULARITY': 1,
        'HALT_FOR_SINGULARITY': 2,
        'DECELERATE_FOR_LEAVING_SINGULARITY': 3,
        'DECELERATE_FOR_COLLISION': 4,
        'HALT_FOR_COLLISION': 5,
        'JOINT_BOUND': 6,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('moveit_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'moveit_msgs.msg.ServoStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__servo_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__servo_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__servo_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__servo_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__servo_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'INVALID': cls.__constants['INVALID'],
            'NO_WARNING': cls.__constants['NO_WARNING'],
            'DECELERATE_FOR_APPROACHING_SINGULARITY': cls.__constants['DECELERATE_FOR_APPROACHING_SINGULARITY'],
            'HALT_FOR_SINGULARITY': cls.__constants['HALT_FOR_SINGULARITY'],
            'DECELERATE_FOR_LEAVING_SINGULARITY': cls.__constants['DECELERATE_FOR_LEAVING_SINGULARITY'],
            'DECELERATE_FOR_COLLISION': cls.__constants['DECELERATE_FOR_COLLISION'],
            'HALT_FOR_COLLISION': cls.__constants['HALT_FOR_COLLISION'],
            'JOINT_BOUND': cls.__constants['JOINT_BOUND'],
        }

    @property
    def INVALID(self):
        """Message constant 'INVALID'."""
        return Metaclass_ServoStatus.__constants['INVALID']

    @property
    def NO_WARNING(self):
        """Message constant 'NO_WARNING'."""
        return Metaclass_ServoStatus.__constants['NO_WARNING']

    @property
    def DECELERATE_FOR_APPROACHING_SINGULARITY(self):
        """Message constant 'DECELERATE_FOR_APPROACHING_SINGULARITY'."""
        return Metaclass_ServoStatus.__constants['DECELERATE_FOR_APPROACHING_SINGULARITY']

    @property
    def HALT_FOR_SINGULARITY(self):
        """Message constant 'HALT_FOR_SINGULARITY'."""
        return Metaclass_ServoStatus.__constants['HALT_FOR_SINGULARITY']

    @property
    def DECELERATE_FOR_LEAVING_SINGULARITY(self):
        """Message constant 'DECELERATE_FOR_LEAVING_SINGULARITY'."""
        return Metaclass_ServoStatus.__constants['DECELERATE_FOR_LEAVING_SINGULARITY']

    @property
    def DECELERATE_FOR_COLLISION(self):
        """Message constant 'DECELERATE_FOR_COLLISION'."""
        return Metaclass_ServoStatus.__constants['DECELERATE_FOR_COLLISION']

    @property
    def HALT_FOR_COLLISION(self):
        """Message constant 'HALT_FOR_COLLISION'."""
        return Metaclass_ServoStatus.__constants['HALT_FOR_COLLISION']

    @property
    def JOINT_BOUND(self):
        """Message constant 'JOINT_BOUND'."""
        return Metaclass_ServoStatus.__constants['JOINT_BOUND']


class ServoStatus(metaclass=Metaclass_ServoStatus):
    """
    Message class 'ServoStatus'.

    Constants:
      INVALID
      NO_WARNING
      DECELERATE_FOR_APPROACHING_SINGULARITY
      HALT_FOR_SINGULARITY
      DECELERATE_FOR_LEAVING_SINGULARITY
      DECELERATE_FOR_COLLISION
      HALT_FOR_COLLISION
      JOINT_BOUND
    """

    __slots__ = [
        '_code',
        '_message',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'code': 'int8',
        'message': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.code = kwargs.get('code', int())
        self.message = kwargs.get('message', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.code != other.code:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def code(self):
        """Message field 'code'."""
        return self._code

    @code.setter
    def code(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'code' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'code' field must be an integer in [-128, 127]"
        self._code = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value
