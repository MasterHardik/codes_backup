#include<iostream>
using namespace std;
//THIS IS A PROGRAM TO SHOW THE INCREAMENTING TRIANGLE OF STARS 
int main(){
	int i;
	int j;
	int c;
	int a;
	cout<<"Enter the number of lines you want : "<<endl;
	cin>>c;
	a=c+1;
	for (i=1;i<a;++i)
	{
		cout<<"\n" ;
		for (j=1;j<=i; ++j)
		cout<<"*";
		}
	return 0;
	}