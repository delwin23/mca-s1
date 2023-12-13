file=open('hello.txt','w')
file.write("hello delwin") #if we use print function we will get the length of the character entered
file.close()



file=open('hello.txt','a')
file.write("hiii")
file.close()

file=open('hello.txt','r')
print(file.read())
file.close()

file=open('hello.txt','rb+')
print(file.read())
file.close()



