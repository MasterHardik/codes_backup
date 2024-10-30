/*		Thia is the program of binaryToDecimal 			*/

#include <iostream>
using namespace std;

// bianry to decimal function
int binToDecimal(int num)
{
	int digit, ans{0}, x{1};
	while (num > 0)
	{
		digit = num % 10;
		num /= 10;
		ans += digit * x;
		x *= 2;
	}
	return ans;
}

//Main body
void main()
{
	
	cout << "Enter a Binary Number : ";
	int binNum;
	cin >> binNum;
	cout << "The decimal of  " << binNum << " is " << binToDecimal(binNum);
}

//In this program in future i can add functionality that will show msg if the input number contains the digit other than zero or one 