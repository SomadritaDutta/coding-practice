'''
Hello
'''
f=open("data.txt")  #built in function that helps to open files
data = f.read()     #Also a built in function that gives instruction to read the file
print(data)
f.close()           #To close the open file we use this built in function(VERY IMP) 

 #We can write the same code usinh "With" statement
with open("data.txt") as f:
    print(f.read)
# with "with" statement we do not need to write f.close().