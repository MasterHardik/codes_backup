//Program to find whether two strings contain equal number of characters.
#include<iostream.h>
#include<string.h>
void main()
{
	char string1[50], string2[50];
	cout<<"Enter strings \n";
	cin.getline(string1,50) ;
	cin.getline(string2,50) ;
	if (strlen(string1) == strlen(string2) ){
		cout<<"\nBoth strings contain equal number "<<" of characters "<<"\n";
	}
	else 
	cout<<"\nBoth strings contain different number of characters"<<"\n";
	}