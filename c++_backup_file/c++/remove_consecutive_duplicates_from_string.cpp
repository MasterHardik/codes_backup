

#include<bits/stdc++.h>
using namespace std;
void solution(string s1)
{
	stack <char> s;
	for(int i=0;i<s1.size();i++)
	{
		if(s.empty())
			s.push(s1[i]);

		else if(s1[i]!=s.top()){
			s.push(s1[i]);
		}
		else{
			s.pop();
		}
	}
	string ans = "";
	while(!s.empty()){
		char ele = s.top();
		s.pop();
		ans+=ele;
	}
	reverse(ans.begin(),ans.end());
	cout<< ans;
}

int main()
{
	string s;
	cin>>s;
	solution(s);
	return 0;
}

// #include<stack>
// #include<string>
// #include<iostream>
// #include<bits/stdc++.h>

// using namespace std;

// void solution(string s1)
// {
// 	string res;
// 	stack <char> s,s2;
// 	for(int i=1;i<s1.size();i++)
// 	{
// 		if(s1[i]!=s.top()||s1.empty())
// 			s.push(s1[i]);
// 		else
// 			s.pop();
// 	}

// 	string ans = "";
// 	while(!s.empty()){
// 		char ele = s.top();
// 		s.pop();
// 		ans+=ele;
// 	}
// cout<<ans;
// 	reverse(ans.begin(),ans.end());
// 	cout<< ans<<endl;


// }

// int main(int argc, char const *argv[])
// {
// 	string s;
// 	cin>>s;
// 	solution(s);
// 	return 0;
// }