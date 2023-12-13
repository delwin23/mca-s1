#accept a string to check whether it is palindrome or not

str=input('enter a string:')
rev=str[::-1]
if(str==rev):
        print('the entered string is palindrome:',rev)
else:
    print('entered string is not palindrome:',rev)
