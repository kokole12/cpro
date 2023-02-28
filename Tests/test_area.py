#!/usr/bin/python3
import unittest
import area
from math import pi, pow

class Test_area(unittest.TestCase):
    def test_area(self):
        """ Check the area with different values"""
        self.assertAlmostEqual(area(1), pi)
        self.assertAlmostEqual(area(0), 0)
        self.assertAlmostEqual(area(2.1), pi * pow(2.1, 2))
