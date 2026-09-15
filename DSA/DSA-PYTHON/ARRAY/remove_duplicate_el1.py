arr1 = [5,5,7,8,8,9,9,10,10]
new_arr = []
new_arr.append(arr1[0])
# x=0
for i in range(1,len(arr1)):
    if arr1[i] not in new_arr:
        # x= x+1
        new_arr.append(arr1[i])

print(new_arr)