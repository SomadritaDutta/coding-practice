m1 = int(input("Enter marks: "))
m2 = int(input("Enter marks: "))
m3 = int(input("Enter marks: "))

total_percentage = (100*(m1+m2+m3)/300)

if(total_percentage>=40 and m1>=33 and m2>=33 and m3>=33):
    print("You passed",total_percentage)

else:
    print("You failed",total_percentage)