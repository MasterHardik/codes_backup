#include<iostream>

using namespace std;

int main(){
	int i=3;
	int *p = &i;
	cout<<i<<endl;
	cout<<&i<<endl;
	cout<<*&i<<endl;
	cout<<p<<endl;
	cout<<*p<<endl;
	cout<<&p<<endl;

return 0;
}