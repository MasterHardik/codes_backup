#include<iostream>
using namespace std;
//base class created 
class Parent{ 
public :
int id_p;
};
//sub class inheriting from the base class (parent)
class Child :public Parent 
{
	public:         //public can be avoided here
	int id_c;
	};
	//main function  
int main(){	
Child obj1;
//An object of class child has all data members and member functions of class parent 
obj1.id_c=7;
obj1.id_p=10;
cout<<"Parent id is "<<obj1.id_p<<endl;
cout<<"Child id is "<<obj1.id_c<<endl;
	return 0;
}

/*Output :
Parent id is 10
Child id is 7




