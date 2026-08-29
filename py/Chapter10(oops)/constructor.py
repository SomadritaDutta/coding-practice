class employee:
    language = "python"  
    salary = 120000
    # Constructor
    def __init__(self, name, language, salary): #__init__ is a constructor. #Dunder = Double UNDERscore.
        self.name = name     
        self.salary= salary
        self.language= language
        print("I am creating an object") #Dunder method that is automatically called.
        

harry = employee("harry", "Javascript", 120000)
print(harry.name, harry.salary, harry.language)

rohan = employee("rohan", "Java", 120000)
print(rohan.name, rohan.salary, rohan.language)
