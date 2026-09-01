class programmer:
    company = "Microsoft"

    def __init__(self, name, salary, pin):
        self.name = name
        self.salary = salary
        self.pin = pin
        print("Details of programmer:")

harry = programmer("Harry", 120000, 700124)  
print(harry.company,harry.name, harry.salary,harry.pin)

Rimi = programmer("Rimi", 120000, 700125)  
print(Rimi.company,Rimi.name, Rimi.salary,Rimi.pin)
        