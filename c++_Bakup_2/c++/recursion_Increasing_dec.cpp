#include<iostream>

using namespace std;

void dec(int n){
	if(n==0)
	{
		return ;
	}
	cout<<n<<endl;
	dec(n-1);
}
// int i=1;
// void inc(int n){
// 	if(i>n)
// 	{
// 		return ;
// 	}
// 	cout<<i++<<endl;
// 	inc(n);
// }

void inc(int n){
	if(n==1){
		cout<<1<<endl;
		return ;
	}
	inc(n-1);
	cout<<n<<endl;
}

int main()
{
	int n;
	cin>>n;
	// dec(n);
	inc(n);
	return 0;
}