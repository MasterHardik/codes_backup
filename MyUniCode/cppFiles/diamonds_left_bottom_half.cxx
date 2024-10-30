#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    while(n){
        int i=n;
        while(i){
            cout<<"*";
            i--;
        }
        cout<<"\n";
        n--;
    }
}

/*
    program to print left bottom part of a diamond
    using while loop
    ****
    ***
    **
    *
*/