#include<iostream>
using namespace std; 
int main(){
	int choice;
	float temp,countemp;
	cout<<"------------------------------------------------------------"<<"\n"<<"The conversion Menu"<<"\n"<<endl;
	cout<<"1. Fahrenheit to Celcius"<<"\n"<<endl;
	cout<<"2. Celcius to Fehrenheit"<<"\n"<<endl;
	cout<<"Enter your choice :"<<endl;
	cin>>choice;
	if(choice ==1 )
	{
		cout <<"\n"<<"Enter temperature in Fehrenheit :"<<endl;
		cin>>temp;
		countemp=(temp-32)/1.8;
		cout<<"The temprature in celcius is : "<<countemp<<"\n"<<endl;
	}
	else 
	{
		cout<<"\n"<<"Enter temperautre in centigrade :"<<endl;
		cin>>temp;
		countemp=1.8*temp+32;
		cout<<"The temperature in Fehrenheit is: "<<countemp<<"\n"<<endl;
	}
			return main();
}