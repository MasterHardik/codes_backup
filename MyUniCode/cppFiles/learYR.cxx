//This is a program to find whether the given year is a leap year or not?
#include<stdio.h>
void main(){
	int year;
	printf("\nEnter a Year : ");
	scanf("%d",&year);
	if(year%4==0){
		printf("\nThe Year %d is a leap year.",year);
		}
		else printf("The year %d is not a leap year.",year);
	return main(); 
	}