p1="Make a lot of money"
p2="Buy now"
p3="Subscribe this"
p4="Click this"

c=input("Enter ur comment: ")

if((p1 in c)or(p2 in c)or(p3 in c)or(p4 in c)):
    print("This comment is spam")

else:
    print("Not spam")