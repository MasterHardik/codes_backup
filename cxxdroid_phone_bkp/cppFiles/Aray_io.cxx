#include <iostream>
using namespace std ;
//Program to take inputs store them all in a array and then print all elements value and their contiguous alloted memory 
int main (){
	int a[5];
	cout<<"Enter 5 numbers : "<<endl;
	int i;
	int j;
	for(i=0;i<5;i++){
		cout<<"Enter number "<<i+1<<" : "<<endl;
		cin>>a[i];
		}
		cout<<"You Entered following numbers : "<<endl;
	for (j=0;j<5;j++){ 
		cout<<a[j]<<endl;
		
	}
	cout<<"\nThe size of array is "<<sizeof(a)<<"\n"<<endl;
	   //observe the size of the array acording to the int size as 4 byte i.e 4*5=20
	cout<<"The address of first element of the array is "<<&a[0]<<endl;
	cout<<"The address of second element of the array is "<<&a[1]<<endl;
	cout<<"The address of third element of the array is "<<&a[2]<<endl;	
	cout<<"The address of fourth element of the array is "<<&a[3]<<endl;					
	cout<<"The address of fifth element of the array is "<<&a[4]<<endl;	
	return 0;
	}