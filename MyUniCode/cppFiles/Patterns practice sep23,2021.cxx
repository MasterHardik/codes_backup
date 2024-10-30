/*

//Program to print following pattern of solid Rectangle 

*****
*****
*****
*****
#include<stdio.h>
int main(){
	int i,j;
	for (i=1;i<=4;i++){
		for(j=0;j<=5;j++){
			printf("*");
			}
			printf("\n");
		}
	return 0;
	}
	*/
/*	
//print the following pattern hollow Rectangle
*****
*     *
*     *
***** 	
#include<stdio.h>
int main(){
	int i,j;
	int m=5;
	int n=4;
	//outer loop 
	for(i=1;i<=n;i++){
		//inner loop 
		for(j=1;j<=m;j++){
			//cell(i,j)
			if(i==1||i==n||j==1||j==m){
				printf("*");
				}
				
			else {
				printf(" ");
			}
			}
			printf("\n");
		}
	return 0 ;
	}
print the following pattern   half pyramid 
*
**
***
****


#include<stdio.h>
int main(){
	int i,j;
	//outer loop
	for(i=1;i<=4;i++ ){
		//inner loop 
		for(j=1;j<=i;j++){
			printf("*");
			}
			printf("\n");
		}
	return 0;
	}

//Print the following pattern inverted hal pyramid 
****
***
**
*


#include<stdio.h>
int main(){
	int n=4;
	int i,j;
	//outer loop
	for(i=1;i<=4;i++ ){
		//inner loop 
		for(j=4;j>=i;j--){
			printf("*");
			}
			printf("\n");
		}
	return 0;
	}
//prgint the following pattern
- - - - *
- - **                   -  means space 
- ***
****
 		 		
#include<stdio.h>
int main(){
	int i,j,k;
	//outer loop for printing rows 
	for(i=1;i<=4;i++ ){
		//inner loop for printing space in descending order  
		for(j=4;j>=i;j--){
			printf(" ");
			}
			//innest loop for printing stars in increasing order 
			for(k=1;k<=i;k++){
				printf("* ");
				}
			printf("\n");
		}
	return 0;
	}
	
//print the following pattern 
1
12
123
1234
12345

	
#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d ",j);
			}
			printf("\n");
		}
	return 0;
	}
//print the followinfg pattern inverted decrementing no. triangle

12345
1234
123
12
1


#include<stdio.h>
int main(){
	int i,j;
	int n = 5 ;
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i+1;j++){
			printf("%d ",j);
			}
			printf("\n");
		}
	return 0;
	}
	
//print following pattern 
1
2 3
4 5 6
7 8 9 10 
11 12 13 14 //florids triangle 
 	

#include<stdio.h>
int main(){
	int i,j;
	int num = 1;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d ",num);
			num++;
			}
			printf("\n");
		}
	return 0;
	}
	
// Print the folowing pattern
1
01
101
0101
10101
	
*/
#include<stdio.h>
int main(){
	//outer loop 
	int i,j;
	for(i=0;i<=5;i++){
	//inner loop
		for(j=1;j<=i;j++){
			if((i+j)%2#==0){
				printf("1 ");
				}
			else 
				printf("0 ");
				
			}
			printf("\n");
		}
	return 0 ;
	
	}