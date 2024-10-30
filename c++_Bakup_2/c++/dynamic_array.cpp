#include<iostream>

using namespace std;

void way1(){
	int *array{ new int[5]{ 10, 7,15,3,11}};
	cout<<"Array elements: "<<endl;
	for(int x=0;x<5;x++){
		cout<<array[x]<<endl;
	}
}

void way2(){
	int x,n;
	cin>>n;
	int *arr = new int(n);
	for(x=0;x<n;x++){
		cin>>arr[x];
	}
	for(x=0;x<n;x++){
		cout<<arr[x]<<" ";
	}
}

int main(void)
{
	// way1();
	way2();
	return 0;
}