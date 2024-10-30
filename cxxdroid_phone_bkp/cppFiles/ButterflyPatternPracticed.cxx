#include<stdio.h>
int main(){
	int i,j,n=4;

	for (i=0;i<=n;i++){
		for (j=1;j <=i;j++){
			printf("*");
			}
			int s=(8-(2*i));
			for (j=1;j<=s;j++){
			printf(" ");
			}
			for(j=1;j<=i;j++){
			printf("*");
			}
			printf("\n");
		}
//next half
for (i=1;i<=n;i++){
			for (j=1;j <=n-i+1;j++){
			printf("*");
			}
			int s=2*i-2;
			for (j=1;j<=s;j++){
			printf(" ");
			}
			for (j=1;j <=n-i+1;j++){
			printf("*");
			}
			printf("\n");
		}
	return 0;
	}