#include<stdio.h>
int main(){
	int n = 4 ;
	int i ,j ;
	//outer loop 
	for (i =1; i <= n; i++){
	    //inner loop 
	    for (j=1; j<=i ; j++){
	        printf(" * ");
	        //spaces 
	        for(j=6 ;j>=i;j--){
	            printf(" ");
	        }
	    }
	    printf("\n");
	}
	
	}

