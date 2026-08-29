n =int(input("Enter a no.: "))

for i in range(2,n):
    if(n%i==0):
        print("This is not prime number.")
        break

else:
    print("This is prime number.")