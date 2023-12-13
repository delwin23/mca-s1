#find the second smallest element in a list

a=input("enter the elements:")
a=list(map(int,a.split(",")))
print(a)
a.sort()
print("second smallest:",a[1])
