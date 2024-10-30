#include<iostream>

using namespace std;

int gcd(int a,int b){
	if(a==0)
		return b;
	return gcd(b%a,a);
}


int main(int argc, char const *argv[])
{
	//cout<<gcd(15,20);
	return 0;
}