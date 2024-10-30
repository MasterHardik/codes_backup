#include<iostream>

using namespace std;

inline int add(int a,int b){   //this keyword  "inline " make the function in one line hence reducing the time of function call
								//"inline "is a request hence its all the compilers wish to accept it or not 
	return a + b;
}

int main(){

	int a,b;
	cin>>a>>b;
	int res = add(a,b);
	cout<<"sum is : "<<res<<endl;
return 0;

}