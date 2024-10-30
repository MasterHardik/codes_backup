#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int j=n;
    while(j){
        int i=n;
        while(i){
            cout<<"*";
            i--;
        }
        cout<<"\n";
        j--;
    }
}

/*
    program to print rectangle using while loop

    ****
    ****
    ****
    ****
*/