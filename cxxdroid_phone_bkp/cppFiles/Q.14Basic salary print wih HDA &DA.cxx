/*

//Write  a prigram to input the basics salary of an employee and calculate its Gross salary according to following 
-basic salary <= 10000: HRA=20%,DA=80%
-basic salary <= 20000: HRA=25%,DA=90%
-basic salary >   20000: HRA=30%,DA=95%

*/

#include<stdio.h>
int main(){
	int salary;
	float Gross,HRA,DA;
	printf("\nEnter your Basic Salary : ");
	scanf("%d",&salary);
	if (salary<=10000){
	HRA=salary*.2;
	DA=salary*.8;
	Gross=HRA+DA;
	printf("\nwith HRA=20 %");
	printf("\DA=80 %");
	printf("\nYour total salary amount is : %.3f",Gross);
	}
	else if (salary<=20000){
	HRA=salary*.25;
	DA=salary*.9;
	Gross=HRA+DA;
	printf("\nwith HRA=25 %");
	printf("\nDA=90 %");
    printf("\nYour total salary amount is : %3f",Gross);
	
	}
	else if (salary> 20000){
	HRA=salary*.3;
	DA=salary*.95;
	Gross=HRA+DA;
	printf("\nwith HRA=30 % ");
	printf("\nDA=95 % ");
	printf("\nYour total Gross salary amount is : %.3f",Gross);    //here .3f is for printing to desired 3 decimal places only 
	
	}
	return 0;
	}