# Star printing 
'''For n= 5
        **
      ****
    ******
  ********
**********
'''
n = int(input("Enter no: "))

for i in range(1,n+1):
    print("  "*(n-i), end="")
    print("*"*(2*i), end="")
    print("")