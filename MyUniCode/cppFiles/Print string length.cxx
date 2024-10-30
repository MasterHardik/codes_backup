///This is the program to read string and print its length 
#include<iostream>                     // for cin , cout , << , >>
#include<string.h>                       // for strlen( )
#include<stdio.h>                        // for gets( ) and puts( )
using namespace std;
int main(){         
	char astr[51];
	int length;
	cout<<"\n Enter  a string (max 50 characters )\n";
	gets (astr);
	length = strlen(astr);
	puts (astr);    //we can skip this line 
	cout<<"\nThe length of the string is :"<<length <<"\n";
	return 0;
	}