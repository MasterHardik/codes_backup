#Program for subtraction without subtraction 
num1=int(input("Enter 1st Number :"))
num2=int(input("Enter 2nd Number :")) 

sub =num1 +(~num2+1) 
print("Result of (", num1, ") -(", num2, ") is", sub) 
