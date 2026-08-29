a = int(input("Enter 1st no.: "))
b = int(input("Enter 2nd no.: "))
c = int(input("Enter 3rd no.: "))
d = int(input("Enter 4th no.: "))

print(a,b,c,d)

if(a>b and a>c and a>d):
    print("1st no. is greater")

elif(b>a and b>c and b>d):
    print("2nd no. is greater")

elif(c>b and c>a and c>d):
    print("3rd no. is greater")

elif(d>b and d>c and d>a):
    print("4th no. is greater")

else:
    print("invalid")