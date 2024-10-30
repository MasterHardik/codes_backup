#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	//    n%2==0 ? cout<<"even\n" : cout<<"odd\n";   //  <<--  one way
	cout << (n % 2 == 0 ? "even\n" : "odd\n");
	return 0;
}

/*
    program to check and print
    for even or odd number
    using conditional operator
    condtion ? expression 1 :expression 2
*/