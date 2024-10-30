#include<stdio.h>
int n = 8;
int arr[8] = {1,2,3,4,9,5,6,7};//Also can define arr[ ] = .....
//Funtion to del elem in array 
void ArrDel(int elem ){
	//loop to find the array element index;
	for(int i = 0;i<10;i++){
		if(arr[i] == elem ){
			//now deleting the elem and shifting the elements after it towards the left
			int pos = i;
			for(int j = i;j<10;j++){
				arr[j]=arr[j+1];
			}
			}
		else printf(" Element not found !!\n");
		break; 
	}
	n--; 
	}
	void display(){
		printf("\nPresent elements are : ");
		for(int i=0;i<n;i++){
			printf("%d ",arr[i]);
			}
		}
int main(){
	ArrDel(10);
//	ArrDel(5);
	display( );
	return 0;
	}