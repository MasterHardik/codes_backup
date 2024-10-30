//This is a program to print two mattrix

#include<stdio.h>

//main
int main(){
	int i,j,x,y;
	//2-D Array 
	//Values Taking and Making 
	printf("Enter a value of row and column to make x * y mattrix :\n");
	scanf("%d ",&x);
	scanf("%d",&y);
	int M1[x][y];
	int M[x][y];
	//loop for column
	for( i=0;i<x;i++){
		//inner loop for row no.
		for(j=0;j<y;j++){
			printf("\nEnter no in row %d x column %d : ",i+1,j+1);
			scanf("%d",&M1[i][j]);
			}
		}
		//2nd Matttrix 
		//2-D Array 
		printf("\n #Now enter the values for second Mattrix \n");
	int M2[x][y];
	//loop for column
	for( i=0;i<x;i++){
		//inner loop for row no.
		for(j=0;j<y;j++){
			printf("\nEnter no in row %d x column %d for M2 mattrix : ",i+1,j+1);
			scanf("%d",&M2[i][j]);
			}
		}
		printf("\n------------------------------------------------------------------------------------\n");
		
	//storing The added value of Matrix M1 & M2 in new mattrixx M
	for (i=0;i<x;i++){
		for (j=0;j<y;j++){
			M[i][j]=M1[i][j] + M2[i][j];
			}
		}
		
		//Printing new Mattrix M
		for(i=0;i<x;i++){
			for(j=0;j<y;j++){
				printf("| %d |",M[i][j]);
				}
				printf("\n--------------------");
				printf("\n");
			}
			return 0;
		}