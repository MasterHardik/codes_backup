// Program to count number of characters entered.
#include<iostream>
using namespace std;
int main(){
	int chcount = 0;
	const char ent = '\n';
	char ch ;
	cout<<"Enter character \n";
	cin.get(ch);
	while(ch!=ent){
		chcount++ ;
		cout.put(ch);
		cin.get(ch);
		}	
		
		cout<<"\nThe number of characters = "<<chcount<<"\n";

	return 0 ;
	}