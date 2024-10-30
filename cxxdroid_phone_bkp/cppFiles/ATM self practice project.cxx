#include<iostream>
using namespace std ;
class Account{ 
char name[31];
int acc_no;
char act;
float balance;
public:
void initial()
{
	cout<<"Name : "<<endl;
	//cin.getline(name,31); or we can use following 
	cin>>name;
	cout<<"Account Number : "<<endl;
	cin>>acc_no;
	
	if (acc_no==485447474008){
		cout<<"Hey,/n "<<name<<" Succesfully loged in!!!"<<endl;
        cout<<"Program Under maintainance \visit after some days."<<endl;
		}
	else {
		cout<<name<<" Entered Data doesn't matched !!\n check again.." <<endl;
		}
}
};
int main(){
	/*public:
	Account check;
	check.acc_no;
	check:acc_no;
	friend int acc_no(check);*/
	
	Account obj;	
	obj.initial();
	return 0; 
}
