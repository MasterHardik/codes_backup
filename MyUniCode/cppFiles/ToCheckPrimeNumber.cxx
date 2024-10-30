//How why will happen to this program output if i enter a negative value?
//Ans for this we will use <cmath>library so that even the negaitve number too become +ve and the program runs fine .
#include<cmath>
#include<iostream>
using namespace std;
int main(){
	//Write a program to find if the number is a prime number or not 
	int n;
	cout<<"Enter number to check for prime of not :  "<<endl;
	cin>>n;
	bool flag;
	int i;
	if(n==1){
		cout<<"The number 1 is neither prime nor composite:"<<endl;
		return main();
		}
	for(i=2;i<n;i++){    //instead of this i will use for(i=2;i<sqrt(n);i++)
		if (n%i==0){
			flag = 1;
			cout<<"The number is not a prime number ."<<endl;
			break;
			}
		}
	if(flag == 0){
		cout<<"The number is Prime."<<endl;
		}
	return main(); 
	}