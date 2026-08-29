class employee:
    language = "python"  # class attribute
    salary = 120000

# Starting of object
# Instance attributes take preference over class attributes
harry = employee()
harry.language = "Java" # Instance attribute
print(harry.language ,harry.salary)

obj2 = employee()
print(obj2.language, obj2.salary)