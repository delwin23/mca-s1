#Pgm to demonstrate assert error for negative input
a=int(input("enter a number:"))
try:
    assert a>0,"-ve number"
    print("this is a positive number",a)
except AssertionError as e:
        print(e)
