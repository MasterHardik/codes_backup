//This is a Program to print the number of digits of a given number 

//#include<bits/stdc++.h>   // <--- This file isn't  working with this app. 
#include<iostream>
using namespace std;

//This is the count function
int countDigit(int n ){
		int count = 0;
		do{
			n/=10;
			count++;
			}
			while (n!=0);
			return count;
	}
//This is main function
int main(){
	cout<<"\n\t Digit Counter program\n"<<endl;
	cout<<"Enter a number : ";
	int num;
	cin>>num;
	cout<<"There are "<<countDigit(num)<<" digits in the number "<<num<<endl;
	
	return 0; 
	}