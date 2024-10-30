#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string s;
	cin>>s;

	//TO LowerCase
	for(int i=0;i<s.length();i++){
		if(s[i]>='A'&&s[i]<='Z'){
			s[i]=s[i]+32;
		}
	}
	cout<<"String in LowerCase : "<<s<<endl;

	//TO UpperCase
	// for(int i=0;i<s.length();i++){
	// 	if(s[i]>='a'&&s[i]<='z'){
	// 		s[i]=s[i]-32;
	// 	}
	// }
	// cout<<"String in UpperCase : "<<s<<endl;


	//Other method

	transform(s.begin(),s.end(),s.begin(),::toupper);
	cout<<s<<endl;

	transform(s.begin(),s.end(),s.begin(),::tolower);
	cout<<s<<endl;
	return 0;
}