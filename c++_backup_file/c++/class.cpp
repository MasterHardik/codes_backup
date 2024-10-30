#include<iostream>

using namespace std;


//class is like a blue print 


class student {
public:			//access specifier -> pirvate ,public and protected;
	string name;
	int age;
	int roll;


	void display_details(){
		cout<<"Name is    : "<<name<<endl; 
		cout<<"Age is     : "<<age<<endl; 
		cout<<"Roll no is : "<<roll<<endl; 
		cout<<endl;
	}
};    // alike structure semicolon is necessary


class box{
public:
	int l;
	int b;
	int h;
};
int main(){
student s1;  // student 1 -->> object -->>class = student 

s1.name  = "Master Hardik"; // .operator is --->>. access use
s1.age   = 20;
s1.roll  = 201069;
s1.display_details();
// cout<<"Name is    : "<<s1.name<<endl; 
// cout<<"Age is     : "<<s1.age<<endl; 
// cout<<"Roll no is : "<<s1.roll<<endl; 
// cout<<endl;


student s2;

s2.name  = "Master Harsh"; // .operator is --->>. access use
s2.age   = 21;
s2.roll  = 201071;

cout<<"Name is    : "<<s2.name<<endl; 
cout<<"Age is     : "<<s2.age<<endl; 
cout<<"Roll no is : "<<s2.roll<<endl; 


box b1;
b1.l = 1;
b1.b = 2;
b1.h = 3;

int vol = b1.l * b1.b * b1.h;

cout<<"\nThe volume of box b1 is  : "<<vol<<endl;

return 0;

}