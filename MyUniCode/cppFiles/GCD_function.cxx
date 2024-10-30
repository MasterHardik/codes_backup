#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll gcd(ll a,ll b){
	if(a==0){
		return b;
	}
	return gcd(b%a,a);
}
ll findGCD(ll arr[],ll n){
	ll res =arr[0];
	for(ll i = 1;i<n;i++){
		res =gcd(arr[i],res);
	}
	return res;
}
int main(){
	ll t;
	cin>>t;
	ll num[t],i{0};
	cout<<"\nInput loop exec.   - - >\n";
	for(ll j=0;j<t;j++){
		cin>>num[j];
	}
	cout<<"\nInput loop exec. finish   - - >\n";
	cout<<"\n0-->\n"<<num[0];
	cout<<"\n1-->\n"<<num[1];
	ll g=findGCD(num,t);
	cout<<g;
	return 0;
}