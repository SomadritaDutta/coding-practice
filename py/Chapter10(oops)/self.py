class employee:
    language = "python"  # class attribute
    salary = 120000

    def greet(self):
        print("Good Morning")

    def getinfo(self):
        print(f"Language is {self.language} and salary is {self.salary}")

obj2 = employee()
obj2.language = "Java"
print(obj2.language, obj2.salary)

obj2.greet()
obj2.getinfo()