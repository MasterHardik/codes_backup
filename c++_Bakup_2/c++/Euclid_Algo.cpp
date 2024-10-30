#include<iostream>

using namespace std;

int gcd(int a,int b){
	while(b!=0){
	int rem = a%b;
	a=b;
	b=rem;
	}
	return a;

}

int main(int argc, char const *argv[])
{
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b);
	return 0;
}

//To find GCD (gretest common divisor)
/*

24 = 2 x 2 x 2 x 3
42 = 2 x 3 x 7            = 6

42 - 24  = 18
24 - 18 = 6
18 - 6 = 6
6 - 6 = 0

or

42 % 24 = 18
24% 18 = 6
18 % 6 = 0


*/