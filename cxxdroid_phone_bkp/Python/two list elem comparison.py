#check wheather elem of list 1 is in lisw or not

check=[]
num1=input().split() 
num2= input().split()
lis1=list(num1)
lis2=list(num2) 
for j in lis2  :
					for i in lis1 :
						if i==j:
							check.append(i) 
							for k in check:
								print ("yes")
if len(check)==0 :
		print("no")#deindenting it more below for will result single no for whole list check
		