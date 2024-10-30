
#include<stdio.h>
void display(int a[ ],int size){
	//Traverssal 
	for(int i = 0;i<size;i++){
		printf("%d ",a[i]);
		}
		printf("\n");
	}
int PosInsertion(int a[ ],int pos,int elem,int size){
	//Array insertion 
	pos-=1;
	size ++; 
	for(int i=size-1;i>=pos;i--){
		a[i+1]=a[i];
		//return 1;
	}	
	a[pos]=elem;
	printf("\n");
	}
int   main(){
	int a[100 ] = {1,3,4,5,6};
	int size=5;
	display(a,size);
	PosInsertion(a,2,2,size);
	display(a,6);
	}