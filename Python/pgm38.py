def string(s):
    count=0
    for item in s.split():
            if len(item)>1 and item[0]==item[-1]:
                count+=1
s=input("enter a string:")
print(string(s))
