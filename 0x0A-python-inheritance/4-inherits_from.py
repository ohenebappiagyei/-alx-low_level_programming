#!/usr/bin/python3
"""
This module checks checks if an object is an instance
of a class that inherited from the specified class
"""


def inherits_from(obj, a_class):
    """
    Check if the given object is an instance of a class,
    that inherited (directly and indirectly) from, the specified class.

    Args:
        obj: The object to check.
        a_class: The class to compare the object against.

    Returns:
        True if the object is an instance of a class that inherited
        (directly and indirectly) from, the specified class; otherwise, False.
    """
    return issubclass(type(obj), a_class)
