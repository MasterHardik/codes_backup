//#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2){
        cout<<"SUCCESS\n";
    }
    else cout<<"FAILED\n";
    
    return 0;
}