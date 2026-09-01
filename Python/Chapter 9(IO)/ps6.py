
with open("log.txt") as f:
    lines = f.readlines()

lineno =1
for line in lines:
    if("python" in line):
        print(f"Python is present in line no. {lineno} \nand the line is {line}")
        break
    lineno+=1
else:
    print("Python is not present.")