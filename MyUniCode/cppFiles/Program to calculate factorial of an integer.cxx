#include<iostream.h>
#include <conio.h>
int main ()
{clrscr();
int i,num,fact=1;
cout <<"\nEnter integer :";
cin>>num;
i=num;
while (num)
{ fact *= num;
--num;
}
cout<<"The factorial of "<<i<<" is "<<fact<<"\n";
	return 0;
}