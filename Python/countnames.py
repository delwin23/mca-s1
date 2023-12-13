first_names=["allen","delwin","akhil","asif","revathy","basil","shigil","arya"]
count=0
for name in first_names:
    if name.startswith("a"):
        count+=1
        print('number of names that starts with "a":',count)
