#include<stdio.h>
int arr[8] = {1,2,3,4,9,5,6,7};
//Funtion to Search element in array 
void ArrSearch(int elem ){
	//loop to find the array element index;
	for(int i = 0;i<8;i++){
		if(elem== arr[i]){
			printf("\nElement Found !!\n");
			break;
		}
	if(i==7){
		printf("\nElement not Found !!\n");	
		break;
		}
	}
		
	}
int main(){
	ArrSearch(15);
	}
