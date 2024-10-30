#include<iostream>
using namespace std;
class Account{ 
char name[31];
int acc_no;
char act;
float balance;
public:
void initial()
{
	cout<<"Name : "<<endl;
	cin.getline(name,31);
	cout<<"Account Number : "<<endl;
	cin>>acc_no;
	int cc =1 ;
	while(cc)
	{
		cout<<"Account type saving/Current (S/C) : ";
		cin>>act;
		if ((toupper(act) == 'S'||toupper(act)=='C'))
		break; 
		else 
		cout<<"Enter S or C only!\n"<<endl;
		}
		act=toupper(act);
		cout<<"Balance : ";
		cin>>balance ;
		cout <<endl;
		}
		void deposit (float amt);
		void withdraw(float amt);
		void display();
		int getacno(){return acc_no;}
};
void Account :: deposit(float amt )
{
	balance += amt;
	cout<<"\n Amount Deposit \n";
}
void Account:: withdraw(float amt)
{ if ((balance - amt >=100 ))
{balance -= amt;
cout<<"\n Amount Withdraw \n"<<endl;
}
else 
{
	cout<<"Minimum balance has to be Rs. 1000/-"<<endl;
	cout<<"You can withdraw only "<< balance-1000<< " Rupees"<<endl;
	}
	}
void Account::display()
{
	cout<<"Acount Number : " << acc_no <<endl;
	cout<<"Account Holder : ";
	cout.write(name,31);
	cout<<"\nAccount type : "<<act<<endl;
	cout<<"Balance(Rs.) : "<< balance<<endl;
}
int main(){
	/*#2. Define a class to represent Bank account of 10 customers with the following data members.Name of the depositor account number ,type of account ,(S for savings and C current ),Balance amount. The class also contains member functions top do the following : */
	cout<<"Bank record protopype"<<endl;
	Account acc;         //acc is object of Account class 
	acc.initial();
	acc.deposit(7500);
	acc.withdraw(8000);
	acc.withdraw(800);
	acc.display();
	}	
	