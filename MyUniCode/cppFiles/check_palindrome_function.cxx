//Write a function to check   whether a inputed number is a palindrom or not?

#include <iostream>
using namespace std;

//check_palinrome function
int check_palindrome(int num)
{
	int new_num = 0;
	int digit = 0;
	do
	{
		digit = num % 10;
		new_num = (new_num * 10) + digit;
		num /= 10;
	} while (num != 0);
	return new_num;
}
//print function
int _print(void)
{
	cout << "Enter a number here : ";
	int num;
	cin >> num;
	int value = check_palindrome(num);
	cout << "The number " << num << " is ";

	if (num == value)
	{
		cout << "Palindrome. \n";
	}
	else
		cout << "not Palindrome.\n";
	cout << "\n";
}
//main

void main()
{
	_print();
}