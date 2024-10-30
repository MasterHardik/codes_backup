//WAP to return factorial of a number using recurssion

#include <iostream>
using namespace std;
//function
int fact(int num)
{
	int fact_value = num;
	--num;
	fact_value *= (num - 1);
	if (num >= 1)
	{
		fact(fact_value);
	}
	return fact_value;
}
//main
int main()
{
	cout << "Enter a number : ";
	int n;
	cin >> n;
	cout << "The factotrial of " << n << " is " << fact(n) << "\n";
	return 0;
}