#include<iostream>
#include<conio.h>
using namespace std;
// This is a program to find the factorial of a number 
int main(){
	clrscr();
	int i, num,fact =1 ;
	cout<<"\nEnter integer :";
	cin>>num ;
	i=num ;
	while (num )
	{ fact *=num ;
	--num;
	}
	cout<<"The factorial of "<<i<<" is "<<fact <<"\n";
	return main();
	}