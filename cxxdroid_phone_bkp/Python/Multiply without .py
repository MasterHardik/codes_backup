#Multiplication without '*' operator 

def multiply(n1, n2) :
	mul=0
	if n2<0:
		n2=-n2
		n1=-n1
	for i in range(1, n2 + 1) :
		mul=mul + n1
	return mul

num1=int(input ("Enter 1st Number :") )
num2=int (input (" Enter 2nd Number :")) 
sub=num1 +(~num2+1) ;
print("Multiplication is",multiply(num1, num2))

#my way 2) Multiplication without '*' operator 

def multiply(n1, n2) :
	mul=0
	for i in range(1, n2 + 1) :
		mul=mul + n1
	return mul

num1=int(input ("Enter 1st Number :") )
num2=int (input (" Enter 2nd Number :")) 
sub=num1 +(~num2+1) ;
print("Multiplication is",multiply(num1, num2))
