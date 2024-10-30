#include<iostream>

using namespace std;

class complex
{
public:
	int a,b;
public:
	complex(int x, int y)//  constructor -> basically function
	{a=x ; b=y;}

	complex(int x)  //parametrized constructor
	{ }

	complex(complex &c1)  //copy constructer  if we make then compiler doesn't make else it make it by default 
	{					  // i.e. copy constructer are made using reference variable
		a = c1.a;    //here "=" is assignment operator
		b = c1.b;
	}
};

int main(int argc, char const *argv[])
{
	complex c1(2,3)	;
	complex c2(c1);     //copy c1 into c2;
	complex c3(c2);
	// cout<<c2.a<<" "<<c2.b<<endl;
	// cout<<c3.a<<" "<<c3.b<<endl;
	return 0;
}

/*
 *		** Reference Variable in c++ **   //three types of variables n
 *	* Ordinary Variables   -> int x  =5;
 *	* Pointer Variables    -> int*p;
 *	* Reference Variables  -> int &y =x;  [ reference is another name of address ]
 *	
 *	* Reference Variable -> int &y=x;
 *	* Referecne Variable is : y;
 * 	* Reference variable is a iternal pointer.
 *	* Declaration is started with & symbol;
 * 	* It can be initialised with  already declared variable
 * 	* Initialisation is mandatory.
 */