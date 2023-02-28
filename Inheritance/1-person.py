class Person1:
    def __init__(self, name):
        self.name = name

class Person2:
    def __init__(self, id):
        self.id = id


class Student(Person1, Person2):
    def __init__(self):
        Person1.__init__(self)
        Person2.__init__(self)
        