//Q. This is a Program to test whether input is a alphabet or not ?
#include<iostream>
using namespace std;
int main(){
	int i;
	char Alpha,A[4];
//	A[26]={'A','B','C',D','E','F','G',H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e',',f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    A[4]={"A","B","C","D"};
	cout<<"Enter a input to test for an Alphabet or not : ";
	cin>>Alpha;
	for(i=0;i<5;i++){
	if (Alpha==A[i]){
	cout<<"Yes its an Alphabet"<<endl<<endl;
	}
	}
	else
	{
		cout<<"The input is not an Alphabet : "<<endl;
		}
	return 0;
	}
