with open("log.txt") as f:
    log = f.read()

if("python" in log):
    print("Python is present.")
else:
    print("Python is not present.")

# with open("log.txt","w") as f:
#     f.write()