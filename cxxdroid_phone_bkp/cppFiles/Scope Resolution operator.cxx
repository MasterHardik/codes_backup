#include<iostream>
using namespace std;
int a=10;                                      //global a with file scope.
int main(){
	cout<<"#This is the program of have better understanding of scope resolution operator"<<endl;
	int a=15;                                //a redeclared,local to main()
	cout<<"Main()"<<"\n";
	cout<<"a = "<< a <<"\n";       //local a(=15) printed.
	cout<<"::a = "<< ::a<<"\n";     //global a(=10) printed.
	{                                               //inner block within main()
		int a=25;                             // a again declared,loacal to inner block
		cout<<"Inner Block\n";   
		cout<<" a  "<<a<<"\n";       //local a(=25) printed.
		cout<<"::a"<<::a <<"\n";     //global a(=10) primted.
	}
	cout<<"Back to main()"<<"\n";
	cout<<"a = "<<a<<"\n";           //local a(=15) printed.
	cout<<"::a "<<::a<<"\n";           //global a(=10) printed.
	return 0;
	}
