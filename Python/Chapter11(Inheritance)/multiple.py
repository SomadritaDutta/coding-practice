# Multiple inheritence
#  Father      Mother
#      \        /
#       \      /
#        ▼    ▼
#         Child
class Father:
    def money(self):
        print("Father has money")

class Mother:
    def care(self):
        print("Mother is caring")

class Child(Father, Mother):
    pass

c = Child()

c.money()
c.care()