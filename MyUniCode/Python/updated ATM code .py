print ('Welcome to Hardy Boy Bank ATM') 
restart ='Y'
chances = 3
balance= 1010.10
while chances  >=0:
    pin =int(input('Please Enter Your  4 Digit Pin: '))
    if pin==1234:
    	print('You entered your pin correctly \n') 
    	while restart not in ('n', 'NO', 'no', 'N') :
    		print('Please preass 1 for your Balance \n')
    		print('Please press 2 to make a withdrawal\n')
    		print('Please press 3 to pay in \n')
    		print('Please press 4 to return Card \n')
    		option=int(input('Would you like to chose?')) 
    		if option==1:
    			print('Your Balance is Rs', balance, '\n')
    			restart =input('Would you like to go back? ') 
    			if restart in ('n', 'NO', 'no', 'N') :
    				print('Thank You') 
    				break 
    			elif option == 2:
    			   	option2 ='y'
    			   	withdrawal = float(input( "How much would you like to withdraw ? \n Rs10/Rs20/Rs40/Rs60/Rs80/Rs100 for other enter 1:")) 
			       	if withdrawal in [10, 20,40,60,80,100]:
			       		balance =balance - withdrawal
			       		print("\nYour balance is now Rs", balance) 
			       		restart = input("would you like to go back ?") 
			       		if restart in ('n', 'NO', 'no', 'N') :
			       			print('Thank You')
			       		elif withdrawal  != [10, 20,40,60,80,100] :
			       				print('Invalid Amount, please Re-enter\n') 
			       				restart="y"
			       		elif withdrawal==1:
			       		  	withdrawal =float(input('please Enter Desired amount:')) 
			       	elif  option == 3 :
			       		Pay_in = float(input('How much would you like to pay in? ')) 
			       		balance =balance +Pay_in
			       		print ('\n Your Balance is now Rs', balance)
			       		restart =input('would you like to go back ?')
			       		if restart in ('n', 'NO','no', 'N'):
			       			print('Thank You')
			       			break 
			       	elif  option == 4 :
			       			print('Please Enter correct number. \n') 
			       			restart  = 'y'
			       	elif pin  != '1234':
			       		print('Incorrect Password ')
			       		chances == 0
			       		print(' /n No more tries')
			       		break     