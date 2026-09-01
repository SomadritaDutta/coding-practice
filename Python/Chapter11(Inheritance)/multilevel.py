# Multileve inheritence
# Grandfather
#       │
#       ▼
#    Father
#       │
#       ▼
#      Son
class Grandfather:
    def house(self):
        print("Grandfather owns a house")

class Father(Grandfather):
    def car(self):
        print("Father owns a car")

class Son(Father):
    def bike(self):
        print("Son owns a bike")

s = Son()

s.house()
s.car()
s.bike()