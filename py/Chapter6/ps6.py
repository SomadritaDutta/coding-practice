mark=int(input("Enter your mark: "))

if(mark<=100 and mark>=90):
    print(mark," EX")

elif(mark<=89 and mark>=80):
    print(mark," A")

elif(mark<=79 and mark>=70):
    print(mark," B")

elif(mark<=69 and mark>=60):
    print(mark," C")

elif(mark<=59 and mark>=50):
    print(mark," D")

elif(mark<=50):
    print(mark," F")

else:
    print("Invalid")
