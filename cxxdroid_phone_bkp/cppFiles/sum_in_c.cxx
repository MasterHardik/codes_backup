#include <stdio.h>
int sum()
{
	int a, b;
	printf("enter a : ");
	scanf("%d", &a);

	printf("enter b: ");
	scanf("%d", &b);

	printf("\t%d\n", a + b);
}
int main()
{
	int i;
	for (i = 0; i <= 10; i++)
	{
		sum();
	}

	return 0;
}