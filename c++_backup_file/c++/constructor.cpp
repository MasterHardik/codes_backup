/*
 * 	** Compiler always make two constructor **
 *	1. Default constructer
 *	2. Copy constructer
 */


#include<iostream>
using namespace std;

class box
{
	public:
		int length;
		int breadth;
		//int void
//constructure name = class name 

		box()   // this is constructer   // no "int" ro " void" required  
		{
			cout<<"constructure is executed."<<endl;
		}   //if I write box b1; then it will print above as constructor is executed as soon as the object is created.
};

class student
{
	public :
	int std;
	int age;
	int roll;
	student()//this is constructor
	{
		std = 5;      //as soon as object of student made hence constructor executed and the values got initialized;
	}
};

 int main(int argc, char const *argv[])
{
	//main block
	// box b1;

	student prince;
	prince.std = 5;
	prince.age = 9;
	prince.roll = 44;

 cout<<"\nclass is : "<<prince.std<<"\nage is   : "<<prince.age<<"\nroll is  : "<<prince.roll<<endl;

 // cout<<"class is : "<<prince.std<<endl;
	return 0;
}
/*
 * It is a special type of function/
 * Its name is same as its class name 
 * It has not any return type
 * it must be instance memebr function not static.
 *It will be created as the class is made.
 *and executed as soon as the object is created.
 */
