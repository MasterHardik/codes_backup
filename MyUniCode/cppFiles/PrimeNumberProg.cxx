#include<stdio.h>
int  main(){
	//Progra to print the number as a prime 
	int i ;
	int num;
	scanf("%d",&num);
	//loop
	for(i=2;i<num;i++){
		if(num%i==0){
			printf("\nThe number is not a prime number.");
			break;
			}
			else 
			printf("\nThe number is a prime number.");
			break;
			
		}

	return main();
	}