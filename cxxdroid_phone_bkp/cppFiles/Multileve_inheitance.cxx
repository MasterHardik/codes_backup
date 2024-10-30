#include <iostream>
using namespace std;
//This will be the program to show multilevel inheritance 

//parent class 
class X{
	public:
	int x;
	};
class Y :public X{
	public:
	int y;
	};
class Z :public Y{
	int z;
	};	
	
int main(){
	Y obj1;
	Z obj2;
	obj1.x;
	obj2.y;
	cout<<"Class Y inherited class X data member gives "<<obj1.x<<endl;
	cout<<"Class Z inherit class Y data member gives "<<obj2.y<<endl;
	return 0;
	 
	}
	/*here Output values will be Zero
	since no value is passed so, by default its zero ok?
	
	we can pass value as
	obj1.x=9
	obj2.y=8*/