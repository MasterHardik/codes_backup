//This is the program of binaryToOctal

/*		Thia is the program of binaryToDecimal 			*/

//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int binToOctal( int num){
		int digit,ans{0},x{1};
		while(num>0){
		digit = num % 10;
		num/=10;
		ans += digit*x;
		x*=8;
		
		}
		return ans ;
}
	
//Main body
void main( )
{
	cout<<"Enter a Binary Number : ";
	int binNum ;
	cin>>binNum;
	cout<<"The decimal of  "<<binNum<<" is " <<binToOctal(binNum);
	 	
}