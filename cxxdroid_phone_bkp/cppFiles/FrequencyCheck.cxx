#include <iostream.h>
using namespace std;
//_input_function
int _input(int n, int a[])
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	return ;
}
//main
int main()
{
	//Initial standard output on the console window
	int num_container[100],iter;
	//int currVal = 0, val = 0;
	cout << "\n\tEnter the sequesnce of number and check its frequency" << endl;
	cout << "how many numbers to input :	";
	cin >> iter;
	cout << "Start Entering from here :	" << endl;
	_input(iter, num_container[]);
	return 0;
}

/*old program
	if (cin >> currVal)
	{
		while (cin >> val)
		{
			int cnt = 1;
			if (val == currVal)
			{
				++cnt;
			}
			else
			{
				cout << currVal << " Occurs " << cnt << " times." << endl;
				currVal = val;
				cnt = 1;
			}
		}
	}
		cout << currVal << " occur 1 times." << endl;
*/