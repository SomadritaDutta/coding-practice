f=open("data.txt")
# data1= f.readline()
# print(data1)

# data1= f.readline()
# print(data1)

# data2= f.readline()
# print(data2)

# data3= f.readline()
# print(data3)

# data4= f.readline()
# print(data4)

data = f.readline()
while(data != ""):
    print(data)
    data = f.readline()

f.close()