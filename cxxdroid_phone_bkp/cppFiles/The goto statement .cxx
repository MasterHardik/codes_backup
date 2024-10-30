//Goto statement following code fragmentn example 
#include<iostream>
using namespace std;
int main(){
	int a = 0;
	start : 
	cout<<"\n"<<++a;
	if(a<50) goto start ;
	return 0;
	}