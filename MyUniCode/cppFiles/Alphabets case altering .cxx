//This is a program to convert uppercase char input to lowercase & vice versa 
#include<iostream>
using namespace std;
void main(){           //Whats the difference if i put here int main()?
	char ch;
	do{
		cout<<"\n Enter a character to print its oppposite case : "<<endl;
		ch=getchar();     //instead we can even use cin>>ch;
		if(ch=='\n')
		ch=getchar();
		cout<<endl;
		if(ch>=65&&ch<=90)
			ch=ch + 32 ;         //65-90 is for uppper case Alphabets & 97-122 is for lower case alphabets 			
		else
		if(ch>=97&&ch<=122)
			ch=ch - 32 ;
			putchar(ch);
			cout<<endl;
	}while(ch!='0');
		
	}