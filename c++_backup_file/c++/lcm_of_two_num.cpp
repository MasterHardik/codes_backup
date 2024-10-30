#include<iostream>

using namespace std;

int gcd(int a,int b){
	if(a==0)
		return b;
	return gcd(b%a,a);
}

int lcm(int a,int b){
	return (a*b)/gcd(a,b);
}

int main(int argc, char const *argv[])
{
	cout<<lcm(15,20);
	return 0;
}

/*

a*b = LCM(a,b)*GCD(a,b)
i.e we can use ->   LCM(a,b) = (a*b)/GCD(a,b)

*/