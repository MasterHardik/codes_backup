#include<iostream>

using namespace std;

int fact(int n){
	if(n==0) return 1;
	return n*fact(n-1);
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cout<<fact(n)<<endl;
	return 0;
}

/* WAP to find factorial of a number */