//This is a program to print the minimest Element of the array 
#include<stdio.h>
int main(){
	int n;
	int i,Max;
	//inputing array size 
	printf("Enter No. of Elements you wanna to store in the array : \n") ;
	scanf("%d",&n);
	int a[n];
	//Loop for Entering the Values to be stored in the array 
	for(i=0;i<n;i++){
		printf("Enter the value of element no. %d\n",i+1);
		scanf("%d",&a[i]);
		}
//loop to find the Max. out of entered array elements 
		int j;
		Max = a[0];
		for(j=0;j<n;j++){
			if (a[j]>Max){
				Max = a[j];
				}
			}
			printf("\n----------------------------------------------------------------------------------------------------------------\n");
			printf("The Max value in the array is : %d \n\n",Max);
			int k;
		//loop to find the min value un the array f	
		Max = a[0];
		for(k=0;k<n;k++){
			if (a[k]<Max){
				Max = a[k];
				}
			}
			printf("The Min value in the array is : %d ",Max);
			printf("\n----------------------------------------------------------------------------------------------------------------\n");
	return  0;
	}