#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	int*p;
	p=&a;

	cout<<*p<<endl;  //10

	int **q =&p;

	cout<<*q<<endl;    //2000
	cout<<**q<<endl;   // 10  <-- two times dereference i.e. prints value of a as go to p then a;
	return 0;
}
