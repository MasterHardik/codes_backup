#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int j=n;
    //for rows
    while(j){
        //for columns
        int i=j;
        int k=n-j;
        while(i){
            cout<<" ";
            i--;
        }
        while(k){
            cout<<"*";
            k--;
        }
        cout<<"\n";
        j--;
    }
}

/*
    program to print left bottom part of a diamond
    using while loop
        *
       **
      ***
     ****
*/