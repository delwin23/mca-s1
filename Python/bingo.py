#acept a string & return the lenght of longest word.if the result has more than one word then print BINGO.
s=input("ENTER A collection of strings:")
s=s.split(',')
s.sort(key=len)
print('the length of the longest word:',len(s[-1]))

if len(s[-1])==len(s[-2]):
                         print('bingo')
