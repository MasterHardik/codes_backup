# include <iostream>

using namespace std ;
int main ()
{
	class student{
		public:
		int roll_no;
		char nam[20];
		{
			cout<<"Enter name "; cin>>roll_no;
			cout<<"Enter roll no ";cin>>nam>>roll_no;
		}
		
	};
	class student_mark : student {
    public :
    struct disp()
    {
    	cout <<"Student details as follows:"<<endl;
    	cout<<"Name of student :"<<student.nam<<endl;
    	cout<<"Roll no.of student"<<student.roll_no<<endl;
    }
	
	};
	
	student s1 ;
	student_mark sm;
	return 0;
}