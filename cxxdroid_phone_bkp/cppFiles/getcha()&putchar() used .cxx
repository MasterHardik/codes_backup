/* Unformatted Console I/O Functions that should be used with stdio.h 
Library
this getchar() & putchar() are both Single Charactere Functions gets() &puts()are both string functions 
-->the simplest of the console I/O functions are getchar(),which reads the character from the keybosrd ,&
  -->putchar(//variable to be put ) prints the entered variable 
*/
#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int num;
	cout<<"Enter a number to display"<<endl; 
	num=getchar();
	cout<<"The Entered num is : "<<endl;
	putchar(num);

	return 0;
}