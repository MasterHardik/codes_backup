#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int x = 5;
	int &y = x; //  y => reference variable 
	//int &y;

	//y ->> store x value
	cout<<y<<endl;
	y++;   //we can increment value through reference cariable
	cout<<y<<endl;
	cout<<x<<endl;
	cout<<&y<<endl;
	cout<<&x<<endl;	
	return 0;
}