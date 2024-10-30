#include <iostream.h>
#include<math.h>
#include<conio.h>
#include <stdio.h>
using namespace std ;
int main()
{
	char ch,ch1;
	float l, b ,pr,area,dia;
	do
	{
		clrscr ();
		cout <<"Rectangle Menu"<<endl;
		cout<<"\n1.Perimeter"<<endl;
		cout<<"\n2.Area"<<endl;
		cout<<"\n3.Diagonal"<<endl;
		cout<<"\n4.Exit"<<endl;
		cin>>ch;
		if (ch=='1'||ch=='2'||ch=='3')
		{ cout<<"\n"<<"Enter length & breadth :"<<endl;
		cin>>l>>b;
		}
		switch(ch)
		{ 
		case '1' :pr=2*(l + b);
		cout<< "Perimeter is: " << pr <<endl;
		break;
		case '2' : area=l*b;
		cout<<"Area is: "<<area<<endl;
		break ;
		case '3': dia=sqrt(l*l+b*b);
		cout<<"Diagonal is: "<<dia<<endl;
		break;
		case '4': break;
		default: cout <<"Wrong choice !\n"<<endl;
		break;
		}
		cout<<"\n Press a key to continue..\n";
		ch1 = getchar();
} while(ch>='1' && ch<='3');
	return 0;	
}
