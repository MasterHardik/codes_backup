/*#include<stdio.h>
int main(){
	int a=10;
	double b = 20.0;
	printf("%d",a+b+a+b);      //printf("%d",sizeof(a+b+a+b));
	return 0;
	}*/
#include<stdio.h>
int main(){
	int a;
//	float x = 0.0;
	long int y = 10;
	printf("%d\n",sizeof(y)==sizeof(y));
	printf("%x\n",a);//will give garbage value 
	printf("%0%x",a);
	return 0;
	}