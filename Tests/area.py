#!/usr/bin/python3
""" Calculates the area of a circle"""
from math import pi, pow
def area(radi):
    return pi* pow(radi, 2)

vals = [1, 3, 5, 8, "Jon", True]

for radius in vals:
    print("Area = {:f}".format(area(radius)))
