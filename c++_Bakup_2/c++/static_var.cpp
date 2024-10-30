#include<isotream>

/*
class amount {
	public : 
	int balance;
	static int roi;

	void set_data(int x){
		balance = =x;
	}
}

*/

class amount {
private : 
	int balance;    //balance is an instance variable and it wont be created untill and unless it used.
	static int roi; //roi is a static member i.e. it will be created for certain not matter used/unused;
public:
	void set_data(int x)
	{
		balance = =x;
	}

	void display()
	{
		balance = balance + roi * 0.01*balance;
		cout<<"Our New balance is :"<<balance<<endl;
	}

};

//   :: scope resolution operator
int amount :: roi = 2;
int main()
{
	amount a1;
	//a1.balance = 25000;
	a1.set_data(25000)
	a1.display();
	// static int a ; // by default value --> 0
	// int b;
	// cout<<" "<<b<<endl;
	return 0;
}


/*
 *static variables has by default value = 0										| Instancec has not fixed value
 *
 * If you create a static variable inside Class then , it must be declared		| Declared its value anywhere
 *outside the clas 
 *
 *it has validity .. till program ends											| It has validity .. till the variable endss
 */