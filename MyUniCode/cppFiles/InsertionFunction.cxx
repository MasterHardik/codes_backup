//WAP to show insertion in an array
#include<stdio.h>
int   main(){
	int a[100 ] = {1,3,4,5,6};
	int size=5;
	//Traverssal 
	for(int i = 0;i<size;i++){
		printf("%d ",a[i]);
		}
	//Array insertion 
	int pos= 3;
	int elem = 2;
	size++;
	for(int i=size-1;i>=pos;i--){
		a[i+1]=a[i];
		//return 1;
	}	
	a[pos]=elem;
	printf("\n");
for(int j = 0;j<size;j++){
		printf("%d ",a[j]);
		}	

	}