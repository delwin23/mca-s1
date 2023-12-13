#write a prgrm to add oing at yhe end of string.if aldredy ends with 'ing' then add 'ly'.
s=input('enter a string:')
if s.lower().endswith('ing'):
      s+='ly'
      print(s)
else:
        s+='ing'
        print(s)
