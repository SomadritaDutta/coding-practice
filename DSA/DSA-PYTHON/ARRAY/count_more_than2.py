# Print values that appear more than two times
# Write a Python program that takes the following list:
# arr = [5, 5, 5, 7, 8, 8, 9, 9, 10, 10, 10]
# Expected output
# [5, 10]
arr = [5, 5, 5, 7, 8, 8, 9, 9, 10, 10, 10]

new_arr = []

for i in range(0, len(arr)):
    if arr.count(arr[i]) > 2:
        if arr[i] not in new_arr:
            new_arr.append(arr[i])

print(new_arr)
