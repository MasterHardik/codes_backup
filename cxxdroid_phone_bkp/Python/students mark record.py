#Program to read marks of n student amd store them under an array
arr=[ ]
i=0
i+=1
n=input ("How much students marks you wanna store: \n")
end=int(n)+1
for i in range(1,end):
	print("Enter marks of student ",i,"\n")
	marks =input()
	mark = arr.append(n)
print("Enter no of student to get marks : \n")
inp=int(input())
print(mark[inp])
length=len(marks)
if (inp>length):
	print("Enter a valid no ! \n sorry, couldn't find!\n please try again!")

