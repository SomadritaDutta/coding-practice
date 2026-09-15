arr1 = [5,5,7,8,8,9,9,10,10]
x=0
for i in range(1,len(arr1)):
    if(arr1[x]!=arr1[i]):
        x= x+1
        arr1[x] = arr1[i]
        
print(arr1[0:x+1])