#Finding the 2nd largest value
arr = [25,18,38,10,35,48,20,50]
print(arr)
if (arr[0]>arr[1]):
    max1 = arr[0]
    max2 = arr[1]
    print(f"Max1 is {max1} and Max2 is {max2}")
else:
    max2 = arr[0]
    max1 = arr[1]
    print(f"Max1 is {max1} and Max2 is {max2}")

# Now start the loop to find the largest and 2nd largest
for i in range(2, len(arr)):
    if(arr[i]>max1):
        max2 = max1
        max1 = arr[i]
        print(f"largest {max1}")
        print(f"2nd large {max2}")

    elif(arr[i]>max2):
        max2 = arr[i]
        print(f"Largest {max1}")
        print(f"2nd large {max2}")

print("SO THE RESULT IS:")
print(f"The largest number is {max1}")
print(f"The 2nd largest number is {max2}")