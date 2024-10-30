#include <iostream>

using namespace std;

// void increment(int a){
// 	a++;
// }

void increment(int* a){
	*a+=1;
}

int main()
{
	int a = 2;
	//increment(a);
	// cout<<a<<endl;  //since copy passed henge no change to value 
	increment(&a);
	cout<<a<<endl;
	return 0;
}