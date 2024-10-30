#include <iostream>

using namespace std;

int main()
{
	int a[4] = {3, 1, 2, 4}, s{0}, e{3};
	while (s < e)
	{
		if (a[s] % 2 == 0)
		{
			s++;
		}
		if (a[e] % 2 != 0)
		{
			e--;
		}
		swap(a[s], a[e]);
		s++;
		e--;
	}
	for (int i = 0; i < 4; i++)
	{
		cout << a[i];
	}
	return 0;
}
