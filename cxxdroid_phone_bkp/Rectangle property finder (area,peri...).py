#Program displaying a menu regarding rectangle operations and perform according to users response 

print ("Rectangle menu : \n 1.Area \n 2.Perimeter \n 3.Diagonal \n 4.Exit")
Input=input("Enter your choice (1,2,3,or 4):")
if Input == "1" or "2" or "3":
	l=input("Enter length:")
	b=input("Enter breadth:")
def check(Input):
	if Input=="1":
		area =float (l)*float(b)
		print ("Area :",area)
	elif Input=="2":
		perimeter =2*(float(l)+float(b))
		print("Perimeter :",perimeter )
	elif Input=="3":
		diagonal=(float(l)**2)+(float(b)**2)**(0.5)
		print("Diagonal:",diagonal)
		if Input=="4" :
			print("Exited")
			if Input >4 :
				print("\n Wrong choice !")

check(Input)
		
		
	