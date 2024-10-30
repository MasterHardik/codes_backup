#include<iostream>
using namespace std;

int numberofones(int n){
	int count=0;
	while(n){
		n = n & (n-1);
		count++;
	}
	return count;
}

int main()
{
	cout<<numberofones(19)<<endl;
	return 0;
}
//WAP to count the number of 1 in binary representaton of a number.