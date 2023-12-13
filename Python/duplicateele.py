a=input("enter elements:,")
a=a.split(",")
print(str(a))
b=[]
for i in a:
    if i not in b:
        b.append(i)
print(b)
    
