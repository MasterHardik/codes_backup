#include<iostream>
#include<conio.h>
using namespace std; 
int main(){
	clrscr();
	char ch;
	float a,b,result;
	cout<<"\n"<<"Enter the operator (+, - , * , /)"<<endl;
	cin>>ch;
	cout<<"\n"<<"Enter first number :"<<endl;
	cin>>a;
	cout<<"\n"<<"Enter another number :"<<endl;
	cin>>b;
	if (ch=='+') 
	result = a + b ;
		else if (ch == '-')
		result = a - b ;
		else if (ch =='*')
		result =a*b;
		else if (ch=='/')
		result=a/b;
		else 
		{
			cout<<"\n"<<"Wrong operator!"<<"\n"<<endl;
			goto lb;
			}
		cout<<"\n"<<"The Calculated result is :"<<result
		<<"\n"<<endl;
		lb:
		return 0 ;
}