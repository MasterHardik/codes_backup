#include <stdio.h>
int main(){
	int a = 5 ;
	int b = 5 ;
	int c = 10 ; 
	int result ;
	printf("\n%d == %d is %d ",a,b,a==b);
	printf("\n%d >= %d is %d ",a,b,a>=b);
	printf("\n%d >= %d is %d ",a,c,a>=c);
	printf("\n%d <= %d is %d ",a,c,a<=c);
	printf("\n%d <= %d is %d ",a,b,a<=b);
	printf("\n%d >= %d is %d ",b,c,b>=c);
	printf("\n%d >= %d is %d ",b,a,b>=a);
	printf("\n%d <= %d is %d ",b,a,b<=a);
	printf("\n%d <= %d is %d ",b,c,b<=c);
	
	
	//Lorgical operation
	result = (a==b)&&(c>b);
	printf("\n(a==b)&&(c>b) is %d",result);
	result = (a==b)&&(c>b); 
	printf("\n(a==b)&&(c<b) is %d",result);
	printf("\n(a==b)||(c<b)  is %d",result);
	result = (a==b)||(c<b) ;
	printf("\n(a!=b)||(c>b) is %d",result);
	result = !(a!=b);
	printf("\n.!(a!=b) is %d",result);
	result = !(a==b);
	printf("\n!(a==b) is %d",result);
	
	return 0;
	}