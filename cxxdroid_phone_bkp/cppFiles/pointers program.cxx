#include <iostream>
using namespace std ;
int main()
{
	//pointer concept 
	int a = 6;
	int* b =&a;     //or can be int* b ; b=&a ;
	//taking the address amd value at that address 
	cout<<"Address of a is:"<<&a<<endl;
    cout<<"Address of a using pointer b is : "<<b<<endl;
    //value stored at that address 
    cout<<"Value stored in pointer b is :"<<*b<<endl;
    //pointer of pointer 
    int**c=&b;
    cout<<"address of address of a is :"<<c<<endl;
    cout<<"value stored in pointer of pointer is :"<<**c<<endl;
	return 0;
}