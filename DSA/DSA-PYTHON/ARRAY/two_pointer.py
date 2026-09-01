arr = [1,2,3,5,7,10,11,15]
left = 0
right = len(arr)-1
target = 15
while (left<right):
    current_sum = arr[left] + arr[right]

    if(current_sum==target):
        print(f"{arr[left]}+{arr[right]}= {target}")
        break

    elif(current_sum>target):
        right = right - 1

    else:
        left = left + 1
    
    