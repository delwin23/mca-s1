f=input("enter a sequence of string:")
newlist=list(filter(lambda x:len(x)>=5,f.split()))
print(newlist)
