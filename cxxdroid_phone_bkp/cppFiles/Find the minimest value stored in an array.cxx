#include<stdio.h>
int main(){
	int a[5],i,min;
	for  (i=0;i<5;i++){
		printf("\nEnter Element : ");
		scanf("%d",&a[i]);
		}
		min=a[0];
	for(i=0;i<5;i++){
		if (a[i]<min){
			min=a[i];
			}
			
		}
		printf("\nThe Minimest value in the array is %d",min);	
	return 0;
	}