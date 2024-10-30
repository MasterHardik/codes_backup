
/*
//Q.1 Calculate sum,difference,Product,division & remainder of 2 numbers and print result 
#include<stdio.h>
int main(){
	int a,b,Sum,Difference,Division,Product,Remainder;
	printf("This is a Program to find sum,difference,product,division and remainder simultaniously.");
	printf("\n\nEnter 1st number : ");
	scanf("%d",&a);
	printf("\nEnter 2nd number : ");
	scanf("%d",&b);
	Sum = a + b;
	Product = a * b;
	Difference =  b - a;
	Division = b / a;
	Remainder = b % a;
	printf("\n The sum of %d & %d is %d \n The difference of %d & %d is %d  \n The product of %d & %d is %d \n The division of %d & %d is %d. \n The remainder of %d & %d is %d.",a,b,Sum,a,b,Difference,a,b,Product,a,b,Division,a,b,Remainder);
	return 0;
	}

//Q.2 Take a no. in meters, convert it to cm, then print it on the screen 
#include<stdio.h>
int main(){
	int Meter,CM;
	printf("Enter a value(in m) to convert to cm : ");
	scanf("%d",&Meter);
	CM=Meter*100;
	printf("The value of %dm in cm is %d",Meter,CM);
	return 0;
	}
//Q.3 Take a no. in km and convert it to cm , print the result on the screen 	
#include<stdio.h>
int main(){
	int Km,Cm;
	printf("Enter Value(in km) to convert it to cm : ");
	scanf("%d",&Km);
	Cm=Km*100000;
	printf("The value of %dkm in cm is %d",Km,Cm);
	
	return 0;
	}
	
//Q.4 Take a no. inches ,convert it to feet , print the resul on the screeen 
#include<stdio.h>
int main(){
	int Inches,Feet;
	printf("Enter a value (in inches) to convert to feets : ");
	scanf("%d",&Inches);
	Feet=Inches /12;
	printf("The value of %d inches in feets is %d",Inches,Feet);
	return 0;
	}

//Q.5 Take radius of circle, calculate its perimeter & area,print it on the screen 
#include<stdio.h>
int main(){
	int r;
	float area,peri;
	printf("Enter radius of circle (in cm) to find its area & perimeter : ");
	scanf("%d",&r);
	area=3.14*r*r;
	peri=2*3.14*r;
	printf("\nThe Perimeter of the circle of radius %d is %.2f cm",r,peri);
	printf("\n The Area of the circle of radius %d is %.2f sq. cm",r,area);
	return 0;
	}
	
//Q.6 Take side of a square, calculate its perimeter and arean and print on the screen 
#include<stdio.h>
int main(){
	int side,peri,area;
	printf("Enter side of a square (in cm)to find its area and perimeter : ");
	scanf("%d",&side);
	peri=4*side;
	area=side*side;
	printf("'\nThe perimeter of square of side %d is %d cm ",side,peri);
	printf("'\nThe area of square with side %d is %d sq. cm",side,area);
	return 0;
	}
//Q.7 Take length ,breadth of rectangle ,then print area & perimeter ,print them on screen 
#include<stdio.h>
int main(){
	int length,breadth,peri,area;
	printf("Program to find perimeter and area of a Rectangle : ");
	printf("\nEnter Length : ");
	scanf("%d",&length);
	printf("\nEnter Breadth : ");
	scanf("%d",&breadth);
	peri=2*( length + breadth );
	area=length*breadth;
	printf("\nPerimeter of rectangle is : %d cm",peri);
	printf("\nArea of Rectangle is %d cm",area);
	return 0;
	}
//Q.8 Take a no. (say 'n' ) ,calculate sum of 1st 'nth' odd no. and print on screen 
#include<stdio.h>
int main(){
	int n,sum;
	printf("Enter the nth value till which you want to print the sum of first nth odd number : ");
	scanf("%d",&n);
	sum=n*n;
	printf("\nThe sum of first %d odd numbers is %d",n,sum);
	return 0;
	}				
//Q9.Take a no.(say'n'), Calculate the 'nth' oddd numbers,print them on the screen '
#include<stdio.h>
int main(){
	int n,i,term;
	printf("\nEnter no. till which to print odd numbers : ");
	scanf("%d",&n);
	printf("\nThe first %n odd numbers are ",n);
	for(i=1;i<(n+1);i++){
		term=1+(i-1)*2 ;
		printf("\n%d",term);
	}
	return 0;
	}
	



//Q10.Take a no. (say'n'),, CAlculate the sum of 1st 'nth' even no.'s,print them on the screen 
#include<stdio.h>
int main(){
	int n,sum;
	printf("\nEnter the value till which to print the sum of even numbers : ");
	scanf("%d",&n);
	sum=(n*(4+(n-1)*2))/2;
	printf("\nThe sum of first %d even numbers is : %d",n,sum);
	return 0;
	}
	
	
	
//Q11.Take number (say 'n'), Calculate the 'nth' even no.'s,Print them on the screen 
#include<stdio.h>
int main(){
	int n,i,term;
	printf("\nEnter no. till which to print even numbers : ");
	scanf("%d",&n);
	printf("\nThe first %d even numbers are ",n);
	for(i=1;i<(n+1);i++){
		term=2+(i-1)*2;
		printf("\n%d",term);
		}
	return 0;
	}
	
	
	
//Q12.Take number(say 'n') ,Calculate sum of first 'n' terms of the following series , Print it on the screen 5,7,9,11,13,...
#include<stdio.h>
int main(){
	int n,sum;
	printf("\nEnter the no. till which you wanna to print the sum of series(5,7,9,11,13,.....) :  ");
	scanf("%d",&n);
	sum=(n+4)*n;
	printf("\nThe sum of first %d terms of the series (5,7,9,11,......) is %d",n,sum);
		return 0;
	}
	

//Q.13Taking a no. (say'n') ,Calculate the 'nth' term of the following series, print it on the screen  
#include<stdio.h>
int main(){
	int n,term;
	printf("\n Enter the nth term you want for the series(5,7,9,11,13,....)");
	scanf("%d",&n);
	term=5+(n-1)*2;
	printf("\n The %dth term of the series (5,7,9,11,....) is %d",n,term);
	return 0;
	}		

//Q.14 Take a no. (say 'n' ), calculate the sum of 1st nth terms of the following series(3,7,11,15,19,23,....), print it on the screen 

#include<stdio.h>
int main(){
	int n,sum;
	printf("\n Enter no. till which you want the sum of the series (3,7,11,15,19,23)");
	scanf("%d",&n);
	sum=(1+(n*2))*n;
	printf("\n The sum of first %dth terms of the series (3,7,11,15,9,....) is %d",n,sum);
	return 0;
	}
	
	
//Q.15 Take a no. (say 'n' ),calculate 'nth' term of the following series (3,7,11,15,19,23,.....), print it on the screen

#include<stdio.h>
int main(){
	int n,term;
	printf("\nEnter the nth value to find the nth term of the series(3,7,11,15,...)");
	scanf("%d",&n);
	term=(4*n)-1;
	printf("\nThe %dth term of the series is %d",n,term);
	return 0;
	}

//Q.16 Take two number,swap the values of these variables , print it on the screen.
#include<stdio.h>
int main(){
	int a,b,swap;
	printf("This is a program for swaping the input values : ");
	printf("\nEnter 1st number : ");
	scanf("%d",&a);
	printf("\nEnter 2nd number :");
	scanf("%d",&b);
	swap=a;
	a=b;
	b=swap;
	printf("Result after swaping is : %d & %d",a,b);
	return 0;
	}
	*/
	