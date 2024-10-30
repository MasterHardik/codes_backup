#include<iostream.h>
#include<fstream>

int main ( ){
/*	
//	This is the program how we can open and write in a file name SampleFile.txt

	string ed = " File Successfuly created  " ;
	string ed2 = "This is line two";
	ofstream out("SampleFile.txt");
	out<<ed<<endl;
	out<<ed2;
	
	*/
	
	//Now program to read from a file 
	string str;
	ifstream in("SampleFile.txt");
	in>>str;
	getline(in,str);
	cout<<str;
	return 0;
	}