# Write a python program to print the contents of a directory using the os module.
#  Search online for the function which does that.

import os

# Specify the directory path
path = "."

# Print the contents of the directory
for item in os.listdir(path):
    print(item)