#include<iostream>

using namespace std;


int add(int x, int y, int z=0,int g=0,int f=0)
//int add(int x, int y)     //  ->> instead of this upper line will resolve the problem of making diff add fun with mire and more arguments
{
	return x+y+z+g+f;
}

//similarly
int mul(int a,int b,int c=1,int d=1,int f=1)
{
	return a*b*c*d*f;
}

/*
int add(int x, int y, int z)
{
	return x+y+z;
}

*/

//but the thing to note here is that we is't tedious 
//task to do same thing with augmented parameter so as 
//to reduce this OOPS brings new concept
 
int main(){

	int a = 5;
	int b = 2;
	int c = 3;
int result = add(a,b,c,7,8);
cout<<"Ans is : "<<result<<endl;

/*
int result1 = add(a,b,c);
cout<<"addition of 3 numbers is : "<<result1<<endl;
*/


return 0;
}
