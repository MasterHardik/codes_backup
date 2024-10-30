//WAP to print the following pattern { Hollow Triangle }
/*

*
*  *
*    *
*      *
*  *  *  *

*/

#include<stdio.h>

void Pattern(){
	int row;
	printf("Enter the number of rows you want : ");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j = 1 ;j<=row;j++){
			if(j==1||j==i||i==row){
				printf("* ");
				}
			else printf("  ");
			}
			printf("\n");
		}
	}
int main(){
	Pattern();
	}