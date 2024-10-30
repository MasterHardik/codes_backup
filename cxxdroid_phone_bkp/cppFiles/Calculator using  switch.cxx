//This is a Calcul;ator program using the switch-case  

#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	//clrscr();
	int cace , num1 , num2 ;
	cout<<"----------------------------------------------------------------------------------------\n\t\t#Wel Come To Hardy boy's Calculator"<<endl;
	cout<<"----------------------------------------------------------------------------------------\n Calculator menu : \n 1. Addition \n 2. Subtraction \n 3. Multiplication  \n 4. Division \n 5. Exit \n----------------------------------------------------------------------------------------"<<endl;
	cin>>cace;
	switch(cace){
		case 1 : cout<<"----------------------------------------------------------------------------------------\n Enter 1st number : "<<endl;
		cin>>num1;
		cout<<"\n Enter 2nd number : "<<endl;
		cin>>num2;
		cout<<"\n----------------------------------------------------------------------------------------"<<endl;cout<<"\nThe sum of "<<num1<<" & "<<num2 <<" is "<<num1+num2<<endl;
		break;
		
		case 2 : cout<<"----------------------------------------------------------------------------------------\n Enter 1st number : "<<endl;
		cin>>num1;
		cout<<"\n Enter 2nd number : "<<endl;
		cin>>num2; 
		cout<<"\nThe difference of "<<num1<<" & "<<num2 <<" is "<<num2 - num1<<endl;
		break; 
		
		case 3 : cout<<"----------------------------------------------------------------------------------------\n Enter 1st number : "<<endl;
		cin>>num1;
		cout<<"\n Enter 2nd number : "<<endl;
		cin>>num2;
		cout<<"\nThe product of "<<num1<<" & "<<num2 <<" is "<<num2 * num1<<endl;
		break;
		
		case 4 : cout<<"----------------------------------------------------------------------------------------\n Enter 1st number : "<<endl;
		cin>>num1;
		cout<<"\n Enter 2nd number : "<<endl;
		cin>>num2;
		cout<<"\nThe division of "<<num1<<" & "<<num2 <<" is "<<num2 / num1<<endl;
		break;
		
        case 5 : return 0;
				} 
//	cout<<"\n\nPress any key to continue......."<<endl;
	return main();
	}