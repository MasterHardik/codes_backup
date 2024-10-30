#include<stdio.h>
int main(){
	int a[5],i,add=0;
	for(i=0;i<5;i++){
	printf("\nEnter the value to store in the array : ");
	scanf("%d",&a[i]);
	}
	for (i=0;i<5;i++){
	
	add=add+a[i];
	}
	printf("\nsum of all elements of array is %d",add);
	return 0;
	}