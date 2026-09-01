class employee:
    a = 1

    @classmethod
    def show(cls):
        print(f"The class atribute is {cls.a}")

    @property
    def name(self):
        return self.ename

    @name.setter
    def name(self, value):
        self.ename = value

e = employee()
e.a = 45

e.name = "harry"
print(e.name)

e.show()