//3. program to accept values of two nmbers and print their addition.
#include<stdio.h>
int main(){
	int a,b,ans;
	printf("\n\t\tProgram to accept values of two nmbers and print their addition.");
	printf("\n\nEnter 1st number : ");
	scanf("%d",&a);
	printf("\nEnter 2nd number : ");
	scanf("%d",&b);
	ans = a + b;
	printf("\n\tAddition of %d and %d is : %d",a,b,ans);
	}