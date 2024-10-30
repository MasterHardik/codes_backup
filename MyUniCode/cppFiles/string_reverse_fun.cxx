#include <bits/stdc++.h>

using namespace std;
int rev(string str,int s,int e ){
    for(int i=e;i>=s;i--){
        cout<<str[i];
    }
    return str.size();
}
int main() {
    string s;
    getline(cin,s);
    cout<<"String before reversing :"<<s<<endl;
    cout<<"String after reversing  :"<<rev(s,0,s.size())<<endl;
    return 0;
}
