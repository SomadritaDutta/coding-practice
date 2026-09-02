arr = [3,8,2,5,7,6,12]
w = 4
maxx = -float('inf')
for i in range(len(arr)-w+1):
    current = 0
    for j in range(i , i+w):
        current = current + arr[j]
        maxx = max(current,maxx)

print(f"So the sum of subarray is {maxx}")
    