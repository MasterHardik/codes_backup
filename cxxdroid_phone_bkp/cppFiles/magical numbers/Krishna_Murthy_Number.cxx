#include <stdio.h>

int fact(int num)
{
	if (num == 0 || num == 1)
	{
		return 1;
	}
	else
	{
		int res = num;
		while (num != 1)
		{
			res = res * (--num);
		}
		return res;
	}
}

int  krishnamurthi_num(int n)
{
	int an=0,tem=n;
	while (n > 0)
	{
		an += fact(n % 10);
		n /= 10;
	}
	if (an == tem)
		return 1;
	return 0;
}

int main()
{
	int n;
	printf( "Enter a number to check for krishna murthi number : ");
	scanf("%d",&n);
	
	krishnamurthi_num(n) ?printf( "Its Krishna Murthi Number \n" ) :printf( "Not a Krishna Murthi Number\n");
	return 0;
}

//WAP to find krishna murthi number