#include<iostream>
#include<math.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main(){
	char ch,ch1;
	float l,b,pm,area,diag;
	do
	{
		//clrscr();
		cout<<"\n"<<"Rectangle Menu"<<endl;
		cout<<"\n1. Area"<<endl;
		cout<<"\n2. Perimeter"<<endl;
		cout<<"\n3. Diagonal"<<endl;
		cout<<"\n4. Exit"<<endl;
		cin>>ch;
		if (ch=='1'||ch=='2'||ch=='3')
		{
			cout<<"\n"<<"Enter lenghth & breagth : ";
			cin>>l>>b;
			}
			switch(ch)
			{
				case '1' : area = l*b;
				cout<<"Area : "<<area<<endl;
				//break;
				case '2' : pm= 2*(l+b);
				cout<<"Perimeter : "<<pm<<endl;
				//break;
				case '3' : diag =sqrt(l*l+b*b);
				cout<<"Diagonal : "<<diag<<endl;
				//break;
				case '4' : break;
				default :cout<<"Wrong choice !\n"<<endl;
				//break;			
				}
				cout<<"\nPress any key to continue...\n"<<endl;
				ch1=getchar();
	}
	while (ch>='1' && ch<='3');
	return 0;
	}