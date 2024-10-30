#include <iostream>
using namespace std ;
int main(){
	int age[9 ];
	cout <<"Enter ages : "<<endl;
	int i ;
	for (i=1;i <10;i+=1){
		cin>>age[i];
	};
		
	cout<<"Arr stored ages"<<age[5];
	return 0;
}