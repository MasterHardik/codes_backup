//Table printing function
#include<stdio.h>
int printTable(int nmbr)
{
	if (nmbr < 0)
	printf("Invalid number !!");
	else
	{
		int i = 1;
		while (i < 11)
		{
			int prod = nmbr * i;
			printf("\t\n%d x %d = %d\n", nmbr, i, prod);
			i++;
		}
	}
}
