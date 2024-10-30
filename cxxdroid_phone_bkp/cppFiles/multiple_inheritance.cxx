#include<iostream>
using namespace std ;
//This is a program to show multiple inheritance 
class A{
	public :
	int a;
	};
class B:public A{
	public :      //public canb be avoided here 
	int b;
	};
class C:public A{
	public:        //wells public here can be avoided 
	int c;
	};
	
int main(){
	B obj1 ;//class B object created 
	C obj2;//class C object created 
	obj1.a=9;//this value will be updated by 8
	obj1.a=8;
	obj2.a=7;//this is updated by 6
	obj2.a=6;
	cout<<"The  inheritance of  class A data member by class B give "<<obj1.a<<endl;
	cout<<"The inhritance of class A data member by class C gives  "<<obj2.a<<endl;
	return 0;
}