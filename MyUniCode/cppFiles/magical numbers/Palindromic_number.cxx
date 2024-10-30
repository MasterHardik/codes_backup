#include<iostream>
using namespace std;
//isPalindrom fun
bool isPalindrom(int n){
	int temp{n}, res{0};
	while(n>0){
		res = (res*10)+(n%10);
		n/=10;
	}
	if(res==temp)
		return 1;
	cout<<res;
	return 0;
}
//main
int main(){
	int n;
	cout<<"Enter a number to check palindrom : ";
	cin>>n;
	cout<<(isPalindrom(n)?"\nIs Palindrom":"Is not Palindrom");
	return 0;
}
//WAP to check palindrom