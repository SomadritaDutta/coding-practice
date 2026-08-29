# to rename the file we do the same as create a copy of a file

with open("old.txt") as f:
    content = f.read()

with open("Renamed_by_python.txt","w") as f:
    f.write(content)