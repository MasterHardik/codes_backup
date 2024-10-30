#include<iostream>
using namespace std;

void fun(int x)
{
	if(x==0)return ;
	fun(--x);
	cout<<x<<" ";
}

int main(){
	fun(4);
	return 0;
}

//What will be the output ?