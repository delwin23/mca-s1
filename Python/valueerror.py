#progrm that accepts an integer from user and raises ValueError with argument abnormal condition',if the readingis not within 90-120.
x=int(input("enter a number:"))
try:
    if x>=90 and x<=120:
                    print(x)
    else:
        raise ValueError
except ValueError:
            print("abnormal condition")

                    

