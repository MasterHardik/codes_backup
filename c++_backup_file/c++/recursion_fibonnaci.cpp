#include<iostream>
using namespace std;

int fib(int n){
	if(n==0||n==1) return n;
	// if(n==0) return 0;
	// else if(n==1) return 1;
	else return fib(n-1) + fib(n-2);
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cout<<fib(n)<<endl; 
	return 0;
}

/*
 * WAP to print fibonacci number
 * -> 0,1,1,2,3,5,8,13,....
 * fib(n) = fib(n-1) + fib(n-2)
 *  fib(0) = 0; and fib(1) = 1;
 */