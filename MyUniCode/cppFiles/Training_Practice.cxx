//Training Practice programs Control statement (selection)
/*

//Q.1 ?Write a Program to check whether a number is divisibel by 5 and 11 or not.
#include<iostream>
using namespace std;
int main(){
	int num;
	int check5;
	int check11;    //we cannot use 11check;
	cout<<"Enter a number to check its divsibiliity by 5 & 11 : "<<endl;
	cin>>num;
	check5=num%5;
	check11=num%11;
	if (check5==0){
		cout<<num<<" is divsible by 5."<<endl;	
		}
		else
		cout<<num<<" isn't divisible by 5."<<endl;
	if(check11==0){
		cout<<num<<" is divisible by 11."<<endl;
		}
		else 
		cout<<num<<" isn't divisible by 11."<<endl;
	return 0;
	}
	
	
	

//Q.2 Write a program to check whether the triangle is equilateral, isosceles or scalene trangle 
#include<iostream>
using namespace std;
int main(){
	float S1,S2,S3;
	cout<<"\tEnter the values of sides of triangle : "<<endl; 
	cout<<"Enter first side of the triangle : "<<endl;
	cin>>S1;
	cout<<"Enter length of second side of the traingle : "<<endl;
	cin>>S2;
	cout<<"Enter length of third side of the triangle : "<<endl;
	cin>>S3;
	if(S1==0||S2==0||S3==0){
		cout<<"The Triangle with side ZERO isn't possible even.!"<<endl;
		return 0;   // WEe can use return statement 2 times // used here since the break statement wasn't working 
		}
	if(S1==S2&&S2==S3){
		cout<<"The Triangle is Eqilateral Triangle."<<endl;
		}
	else if (S1!=S2&&S2!=S3&&S1!=S3){
		cout<<"The Triangle is Scelese Triangle."<<endl;	
		}
		else 
		cout<<"The Triangle is Isocelse Triangle."<<endl;
	
	return 0;
	}
	
		
			*/	
			
/*
//Q.Take 3 no. as a input and print out the largest out of them 			
#include<iostream>
using namespace std;
int main(){
	int num1,num2,num3;
	cout<<"Enter three numbers and find the largest out of them : "<<endl;
	cin>>num1>>num2>>num3;
	if(num1==num2&&num2==num3){
		cout<<"All the numbers are equal."<<endl;
		}
	if(num1>num2 && num1>num3){
		cout<<num1<<" is the largest amoungst "<<num2<<" and "<<num3<<endl;
	}
	else if(num1<num2&&num2>num3){
		cout<<num2<<" is the largest amoungst "<<num1<<" and "<<num3<<endl;
	}

	else if(num1<num3){
		cout<<num3<<" is the largest amoungst "<<num1<<" and "<<num2<<endl;
	}
	
	return 0;
	}

*/


/*
//Q.This is a program to  check the age as Teenager or not ? 

#include<iostream>
using namespace std;
int main(){
	int Age;
	cout<<"\n-----------------------------------------------------------------------------------------\n"<<endl;
	cout<<"Enter the Age you wanna test as Teenager ro not : "<<endl; 
	cin>>Age;
	if(Age>=13&&Age<=19){
		cout<<"Person with Age "<<Age<<" is a Teeanger."<<endl; 
		}
   else 
   cout<<"Person with Age "<<Age<<" is not a Teenager."<<endl;
	return main( );
	}
*/	
	
/*	
//Q.This is a program to check for Leap Years 
#include<iostream>
using namespace std;
int main(){
	int Year;
	int test;
	cout<<"Enter the Year you wanna to test as Leap Year or not : "; 
	cin>>Year;
	test=Year%4;   
	
	             									             									/*Year%=4;if(Year==0){cout<<"The Year "<<Year<<" is                                                                 										a Leap Year."<<endl;}else {cout<<"Year "<<Year<<" is 																									 not a Leap year."<<endl;here}<-this will update Year 																											hence cant be reused */
	/*if(test==0){
		cout<<"The Year "<<Year<<" is a Leap Year."<<endl;
		}
	else 
	cout<<"Year "<<Year<<" is not a Leap year."<<endl;
	return 0;
	}
	*/	



/*
#include<stdio.h>
int main(){
	float  test=10.8 ;
	char c
	printf("The Entered number is : %f ",test);
	return 0;
	}
	*/