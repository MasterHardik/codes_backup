#include<iostream>

using namespace std;

int main()
{
	int a=10;
	int* aptr = &a;

	cout<<"Value of *aptr : "<<*aptr<<endl;
	*aptr = 20;
	cout<<"Value of a=20 "<<a<<endl;

	int arr[]={100,2,30};
	//method1 for array itr

	// for(int i=0;i<3;i++){
	// 	cout<<*(arr+i)<<endl;   	//<--since points to indexing
	// 	arr++;             			//illegal
	// }    					   //  <-- issue coming?

	int *ptr=arr;
	for(i=0;i<3;i++){
		cout<<*ptr<<endl;
		ptr++;
	}
	return 0;
}