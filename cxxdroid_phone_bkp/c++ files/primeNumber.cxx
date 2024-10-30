#include <stdio.h>
#include <math.h>
//check primle function
int  check_prime(int num){
	if(num ==0 ){
		printf("Zero is neither prime nor composite !!\n");
		}
	for (int i = 2; i <num; i++)
	{
		if (num % i == 0)
		{
			printf("The number %d isn't prime !!\n",num);
			break;
		}
		else if(num%i != 0){ 
		printf("The number %d is prime.\n", num);
		break;
		}
	}
	}
//main
int main()
{
	int n;
	printf("\nEnter a number to check for a prime or not : ");
	scanf("%d", &n);
	check_prime(n);
	return main();
}