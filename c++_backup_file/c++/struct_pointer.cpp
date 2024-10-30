#include<iostream>

using namespace std;

strut student {
	int sno;
	char sname[30];
	float marks;
};

int main()
{
	struct student s;
	struct student *st;

	cout<<("Enter sno,sname,smarks : ")	;
	cin>>s.sno>>s.name>>s.marks);
	st = &s;
	cout<<("details of the student are");
	cout<<("Number = %d\n",st -> sno);
	cout<<("name = %s\n",st -> sname;);
	cout<<("Number = %d\n",st -> marks);
	
	// printf("Enter sno,sname,smarks : ")	;
	// scanf("%d%s%f",&s.sno,s.name,&s.marks);
	// st = &s;
	// printf("details of the student are");
	// printf("Number = %d\n",st -> sno);
	// printf("name = %s\n",st -> sname;);
	// printf("Number = %d\n",st -> marks);

	return 0;
}