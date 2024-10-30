#include<iostream>

using namespace std;
//object ki life me sbse last tk  jeene vala member destructor
class complex
{
	public :
	int a,b;
	complex()
	{
		cout<<"Hii I am constructor"<<endl;
	}
	~complex()
	{
		cout<<"Bye I am destructor"<<endl;
	}

	void set_data(int x,int y)
	{a=x; b=y;}

	void show_data()
	{cout<<"Value of a : "<<a<<endl<<"Value of of b : "<<b<<endl;}

};

class box
{
public:
	int a;
	~box()
	{
		cout<<"Bye I am box destructor"<<endl;
	}
};

int main(int argc, char const *argv[])
{

	complex c1;
	c1.set_data(2,3);
	c1.show_data();
	complex c2;
	box b1;

	return 0;
}
/*
OUTPUT:
Hii I am constructor
Value of a : 2
Value of of b : 3
Hii I am constructor
Bye I am box destructor   // since stack frames hence it is destructed first 
Bye I am destructor
Bye I am destructor


/*
 *			** DESTRUCTOR **
 *	* It is a special member function
 * 	* It has same name as a class but with a tilde ( ~ ) symbol 
 *	* It has Not any return type
 *	* It doesn't pass arguments.
 */	