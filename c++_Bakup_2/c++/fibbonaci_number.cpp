#include <iostream>

using namespace std;

// void init_code()
// {
// #ifndef ONLINE_JUDGE
// 	freopen("Input.txt", "r", stdin);
// 	freopen("Output.txt", "w", stdout);
// #endif
// }

// int fibbonaci(int n)
// {
// 	if (n == 1 || n == 2)
// 	{
// 		return 1;
// 	}
// 	else
// 		return fibbonaci(n - 1) + fibbonaci(n - 2);
// }
void fibbonaci(int n)
{
	int n1 = 0, n2 = 1, n3;
	if (n > 0)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		cout << n3 << " " << endl;
		return fibbonaci(n - 1);
	}
}

int main()
{
	// init_code();
	int n;
	cin >> n;
	cout << "--->>" << endl;
	// cout << "--->>" << fibbonaci(n) << endl;
	fibbonaci(n);
	return 0;
}