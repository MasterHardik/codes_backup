#Calculator 
print("Calcualtor")
a=input("Enter 1st no.:")
b=input("Enter 2nd no.")
operator =input("chose operator '+','-','*','/' ")
if operator == '+':
	sum=float(a)+float(b)
	print("Sum of",a,"and",b,"is:",sum)
elif (operator =="-"):
	difference = float(a)-float(b)
	print("Differemce of ",a,"and ",b,"is :",difference)
elif (operator=="*"):
	product=float(a)*float(b)
	print("Product of ",a,"and ",b,"is :",product)
elif (operator=="/"):
	quotient =float(a)/float(b)
	remainder=float(a)%float(b)
	print("Qotient of",a,"and",b,"is :",quotient," \n","Remainder is:",remainder)