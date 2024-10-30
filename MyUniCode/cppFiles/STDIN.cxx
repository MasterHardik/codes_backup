#include <iostream>
#include <fstream>

using namespace std;
int num;
//Function to read from the file
int check()
{
	char s[num];
	ifstream hin("STDOUT.txt");
	while(hin.eof()==0){
		hin>>s[num];
		}
	
	for (int i = 1 ; i <= num; i++)
	{
		int cnt = 0;
		for (int j = 1; j <= i; j++)
		{
			char f = s[i];
			if (f == s[j])
			{
				++cnt;
			}
		}
		cout << "\n"<< s[i] << "comes" << cnt << "times" << endl;
	}
}
	int main()
	{
		cout << "Enter number of character you want to enter :";
		cin >> num;
		char str[num];
		cout << "\nEnter Your Text here : ";
		cin >> str[num];

		ofstream hout("STDOUT.txt");
		hout << str[num];
	//	hout.close();
		check();
				/*
	if (check(str)==0){
		cout<<"Matching"<<endl;
		}
		
		*/

		return 0;
	}