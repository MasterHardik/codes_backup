#include <bits/stdc++.h>

using namespace std;
bool isPrime(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int t;
	cin >> t;
	for (; t; t--)
	{
		int n{0};
		cin >> n;
		for (int i = 0; i <= n; i++)
		{
			if (isPrime(i))
			{
				cout << "The number " << n << " is prime \n"
					 << endl;
			}
			else
				cout << "The number " << n << " isn't prime \n"
					 << endl;
		}
	}
	return 0;
}