#include<iostream>
// #include<string>

using namespace std;

int main(int argc, char const *argv[])
{
	string str;
	cin>>str;
	cin.ignore(100,'\n'); 
	int it{0};
	it = 0;
	while(str[it]!='\0'){
		if(str[it]>='a'&&str[it]<='z')cout<<str[it];
		++it;
	}

	return 0;
}