# Using Sliding Window technique
arr = [3,8,2,5,7,6,12]
w = 4
current = 0
for i in range(0,4):
    current = current + arr[i]

print(current)
maxx = current
for i in range(1,len(arr)- w+1):
    current = ((current - arr[i-1]) + arr[i+w-1])
    if(maxx < current):
        maxx = current

print(maxx)
