#include <stdio.h>
int main()
{
	int n = 7;
	int i, j;
	int x = 1;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (j <= x || j > n - x)
			printf("* ");
			else
				printf("  ");
		}
		if (i <= n / 2)
			x++;
		else
			x--;
		printf("\n");
	}
	return 0;
}


//I think try this  😅