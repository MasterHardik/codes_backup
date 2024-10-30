#include<iostream>
using namespace std ;
//program for Hierarchial inheritance 
class Z{
	public :
	int z;
	
	};
class W:public Z{
	public :
	int w ;
	
	};
class X:public Z{
	int x;
	};
class Y :public Z{
	int y;
	};
int main(){
	W obj1;
	X obj2;     //Q.Can same object be in different class ?i.e. X obj1
	Y obj3;
	obj1.z=9;
	obj2.z=8;
	obj3.z=7;
	cout<<"Class W inheritd class Z data member gives "<<obj1.z<<endl;
	cout<<"Class X inherited class Z data member gives "<<obj2.z<<endl;
	cout<<"Class Y inherited class Z data member gives "<<obj3.z<<endl;
	return 0;
}