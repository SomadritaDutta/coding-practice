class employee:
    language = "python"  # class attribute
    salary = 120000
# A static method is a method that belongs to
# the class but does not use the object's data (self) or the class's data (cls).
    @staticmethod
    def greet():          
        print("Good Morning")

    # Without staticmethod TypeError: greet() takes 0 positional arguments but 1 was given.
    # if we dont use staticmethod we need to pass agrument (self).

obj2 = employee()
obj2.language = "Java"
print(obj2.language, obj2.salary)

obj2.greet()