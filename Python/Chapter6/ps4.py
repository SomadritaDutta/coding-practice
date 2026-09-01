username = input("Enter an username: ")

if(len(username)<10):
    print("Length is less than 10",username,len(username))

else:
    print("greater than 10",username,len(username))