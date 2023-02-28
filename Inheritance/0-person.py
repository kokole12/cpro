#!/usr/bin/python3
class Person:
    def __init__(self, name, id):
        self.name = name
        self.id = id

    def getName(self):
        return self.name


class Employee(Person):

    def __init__(self, name, id, position):
        super().__init__(name, id)
        self.position = position

    def getPosition(self):
        return self.position


emp = Employee("Ismail", 123, "Director")
print("your name is {} and your the {} of the company".format(emp.getName(), emp.getPosition()))
print(type(emp).__name__)