#include<iostream>

using namespace std;

int power(int n,int p){
	if(p==0){
		return 1;
	}
	return n*power(n,p-1);
}

int main(void)
{
	int b,e;
	cin>>b>>e;
	cout<<power(b,e);
	return 0;
}

//Calculate n raised to power p