//This is the program to compare the Entered numbers
#include <iostream>
using namespace std;
int main()
{
	long long int a;
	long long int b;
	cout << "\n#This is the program to Compare the Entered numbers#" << endl;
	cout << "\nEnter a number: " << endl;
	cin >> a;
	cout << "\nEnter another number: " << endl;
	cin >> b;
	if (a == b)
	{
		cout << "\nBoth the numbers " << a << " and " << b << " are equal.\n---------------------------------" << endl;
	}
	if (a > b)
	{
		cout << "\n"
			 << a << " is greater than " << b << "\n---------------------------------" << endl;
	}
	if (a < b)
	{
		cout << "\n"
			 << a << " is smaller than " << b << "\n---------------------------------" << endl;
	}
	return main();
}