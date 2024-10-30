#include<stdio.h>
/*
  int add( int o, int t)
  {
  	return o+t;	
  	};
  */
  int add(int o,int t);
 int main( ){

 	printf("\n\tEnter two numbers to add\n");
 	
 	printf("Enter a Number : ");
 	int one{ };
 	scanf("%d",&one);

 	printf("Enter another  Number : ");
	  int two{ };
 	scanf("%d",&two);
	 printf("	\nThe sum is : %d\n",add(one,two));
 	 	return 0;
 	}