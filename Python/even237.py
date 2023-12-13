


def even (b):
        for item in b:
                if(item==237):break
                elif item%2==0:print(item)
b=input("enter the numbers:")
b=list(map(int,b.split(",")))
even(b)

