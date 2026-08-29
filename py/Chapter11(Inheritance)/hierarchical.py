# Hierarchical inheritence
    #     Animal
    #    /      \
    #   ▼        ▼
    # Dog       Cat
class Animal:
    def eat(self):
        print("Animals eat food")

class Dog(Animal):
    def bark(self):
        print("Dog barks")

class Cat(Animal):
    def meow(self):
        print("Cat meows")

d = Dog()
c = Cat()

d.eat()
d.bark()

c.eat()
c.meow()