# Creating a class
class employee:
    language = "python"  #language and salary are class attributes as they directly belong to the class
    salary = 120000

# Starting of object
harry = employee()
harry.name = "Harry"   # name is instance(object) atrribute
print(f"Name of the candidate is {harry.name}")
print(f"Used language is {harry.language} and salary is {harry.salary}")

obj2 = employee()
obj2.name = "Bob"
print(f"Name of the candidate is {obj2.name}")
print(f"Used language is {obj2.language} and salary is {obj2.salary}")
