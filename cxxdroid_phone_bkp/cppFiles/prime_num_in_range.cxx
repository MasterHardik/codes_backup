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
		int a{-1}, b{-1}, cnt{0};
		cin >> a >> b;
		for (int i = a; i <= b; i++)
		{
			if (isPrime(i))
			{
				cnt++;
			}
		}

		cout << "There are " << cnt << " Prime numbers from " << a << " and " << b << endl;
	}
	return 0;
}