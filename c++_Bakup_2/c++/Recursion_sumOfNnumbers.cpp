#include<iostream>
#define ll long long
using namespace std;

ll sum(ll n){

	if(n==0){
		return 0;
	}

	ll prevSum = sum(n-1);
	return n + prevSum;
}

int main()
{
	ll n;
	cin>>n;
	cout<<sum(n)<<endl;
	return 0;
}