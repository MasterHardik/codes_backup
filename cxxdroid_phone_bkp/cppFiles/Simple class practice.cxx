#include<iostream>
using namespace std;
class A{
	public :
	int sum(int a,int b){
		int Sum = a + b;
		return Sum;
		}
	};
int main(){
	A obj1;
	obj1.sum(3,4);
	int x =obj1.sum(3,4);
	cout<<"The sum is "<<obj1.sum(3,4)<<endl<<x;
	return 0;
	}