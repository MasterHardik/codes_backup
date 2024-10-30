/*
THis is program determines the greatest common divisor of the two numbers
*/
 //This is the program for GCD-Greatest common divisor 
#include<stdio.h>
#include<ctype.h>
//Prototye statement 
int gcd (int a, int b );
int main (){
	//Local Declaration 
	int gcdResult;
	//Statements 
	printf("Test GCD Algorithm\n");
	gcdResult = gcd (100,25);
	printf("GCD of 10 and 25 is %d", gcdResult);
	printf("\nEnd of Test \n");
	return 0;
	}
	int gcd(int a ,int b)
	{
		//statement 
		if (b == 0)
		return a;
		if (a == 0)
		return b;
		return gcd(b,a%b);
		}//gcd