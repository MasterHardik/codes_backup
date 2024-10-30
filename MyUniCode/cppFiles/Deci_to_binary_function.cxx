//program to convert decimal to binary 
#include<stdio.h>
//D to B function
int deci_to_binary(int deci,int arr[]){
	int rem,i= 0;
	while(deci>0){
		rem = deci%2;
		deci = deci /2;
		arr[i] = rem;
		i++;
		}
		return i-1;
	}
	//binary printing function
	int _print_binary(int decimal,int array[]){
		int i = deci_to_binary(decimal,array);
		printf("\tbinary of the number %d is \t :(",decimal);
	for(int j=(i);j>=0;j--){
		printf("%d",array[j]);
		}
		printf(")base2 \n**************************************************\n");
		}
//main
int main(){
	int num;
	int a[100];
	printf("\n\tProgram to convert Decimal number to binary\n");
	printf("\nEnter the Decimal number to be Converted : ");
	scanf("%d",&num);
	_print_binary(num,a);
	
		return main();
	}
	