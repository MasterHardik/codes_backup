//WAP to print and hollow square of the input rows
#include<stdio.h>
void Pattern(int row){
	for(int i=1;i<=row;i++){
		for(int j = 1 ;j<=row;j++){
			if(j==1||i==1||j==row||i==row){
				printf("* ");
				}
			else printf("  ");
			}
			printf("\n");
		}
	}
	//rows inputing function
	int _inputed_rows(){
			int value;
	printf("Enter the number of rows you want : ");
	scanf("%d",&value);
		return value;
		}
int main(){

	Pattern(_inputed_rows());
	}
	
	
	//	_inputed_rows();  //No need of this coz it will already be called while its passed to thefunction "Pattern " 