#include<iostream>
using namespace std;

bool isPowerOF2(int n){
	return (n && !(n & n-1));
}

int main()
{
	cout<<isPowerOF2(16)<<endl;
	return 0;
}