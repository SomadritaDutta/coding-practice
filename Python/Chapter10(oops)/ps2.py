class calculator:
    def __init__(self,n):
        self.n =n 

    def square(self):
        print(f"Square is {self.n*self.n}")

    def cube(self):
        print(f"Cube of the number is {self.n*self.n*self.n}")

    def sr(self):
        print(f"Cube of the number is {self.n**1/2}")

a = calculator(4)
a.square()
a.cube()
a.sr()

