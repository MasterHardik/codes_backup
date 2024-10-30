#Divide without '/'
def divide(numerator, denominator) :
	quotient=0
	neg=0
	if numerator ==0 or denominator==0:
		return 0;
	if numerator==denominator :
		return 1;
	if numerator <0:
	   	numerator = -numerator
	   	neg =1
	   	if denominator<0:
	   		denominator =- denominator
	   		neg=0
	if denominator<0:
		numerator =-numerator
		neg=1
		if numerator<0:
			numerator =-numerator
			neg=0
	while numerator>= denominator:
		numerator -= denominator
		quotient +=1
		if neg==1:
		   quotient = -quotient
		return quotient

num1=int(input ("Enter 1st Number :") )
num2=int(input ("Enter 2nd Number :"))
print ("Division is", divide(num1, num2))