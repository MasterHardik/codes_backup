#include<iostream>

using namespace std;
int area(int a,int b){
	return a*b;
}

int area(int r){
	return 3.14*r*r;
}

int main(){
	int len;
	int b;
	cout<<"Enter lenght and breadth : ";
	cin>>len>>b;
	cout<<"\nEnter radius of circle : "<<endl;
	int r;
	cin>>r;
cout<<"Area of rectangle is  : "<<area(len,b)<<endl; //  ->her the fun name is same as "area" but the 
cout<<"Area of circle is     : "<<area(r);     //  ->parameters differ hence this is an example of function overloading 
return 0;

}