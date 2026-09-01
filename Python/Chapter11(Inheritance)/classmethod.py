class employee:
    a = 1

    @classmethod
    def show(cls):
        print(f"The class atribute is {cls.a}")

e = employee()
e.a = 45

e.name = "harry"
print(e.name)

e.show()

