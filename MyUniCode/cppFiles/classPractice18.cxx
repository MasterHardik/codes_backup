#include<iostream>
using namespace std ;
class A{
	public :
	void a(){
	cout<<"this is base/Parent class"<<endl;
	}
	}; //End of class A definition and declaration 
	class b:public A{
		public :
		void B(){ 
		cout<<"This is class b"<<endl;
		}
		};//End of class b definition 
		
//		class A:public b{};       //we can't do like this coz its not possible  but in java this can be done via using SUPER keword 


int main(){
	A obj1;    //Created the object of base class 
	obj1.a();  //called the function by object reference 
	b obj2;  //created the object of class b
	obj2.B();//called the child class funct.
	obj2.a(); //called the function of parent class by the use of object of child class 
	
	//was possible since child inharited the property of parent class 
	return 0;
	}