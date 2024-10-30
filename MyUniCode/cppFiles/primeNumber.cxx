#include <stdio.h>

//check prime function
void check_prime(int n)
{
	int isPrime = 1;
	//check for zero
	if (n==1)
	{
		printf("\nThe one is neigther prime nor composite !!\n");
		return;
	}
	//check for rest of the numbers except zero
	if (n > 1)
	{
		for (int i = 2; i * i <= n; i++)
		{
			if (n % i == 0)
			{
				isPrime = 0;
			}
		}
	}
	if (isPrime == 0)
	{
		printf("\nThe number %d is not prime !!\n", n);
	}
	else if (isPrime == 1)
	{
		printf("\nThe number %d is prime\n", n);
	}
}
//main
int main()
{
	int num;
	printf("\nEnter a number to check for a prime or not : ");
	scanf("%d", &num);
	check_prime(num);
	return main();
}