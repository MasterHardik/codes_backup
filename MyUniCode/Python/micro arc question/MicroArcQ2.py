import re
pattern = '^g..i$'
test = 'guvi'

result = re.match(pattern,test)
if result:
    print("True")
else:
    print("False")

