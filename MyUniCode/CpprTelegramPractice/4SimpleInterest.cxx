//Program to print simple interest 

#include<stdio.h>
#include<math.h>

int main(){
	float p,r,t,SimpleInt;
	printf("\n\t\tProgram to print simple interest ");
	printf("\n\nEnter the value of principle amount :");
	scanf("%f",&p);
	printf("\nEnter the value of rate % : ");
	scanf("%f",&r);
	printf("\nEnter the time period : ");
	scanf("%f",&t);
	SimpleInt = (p*r*t)/100;
	printf("\n\tSimple Interest is : %.3f",SimpleInt);
	}