a = int(input("Enter a num: "))
b = int(input("Enter 2nd num: "))
c = int(input("Enter 3rd num: "))

if(a>b and a>c):
    print(f"{a} is greater than {b} and {c}")
elif(b>a and b>c):
    print(f"{b} is greater than {a} and {c}")
else:
    print(f"{c} is greater than {a} and {b}")