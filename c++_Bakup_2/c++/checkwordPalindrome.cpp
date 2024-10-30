#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool check = 1;

    for(int i=0;i<n;i++){
        if(arr[i] != arr[n-i-1]){
            check = 0;
            break;
        }
    }

    if(check == true)
        cout<<"Word is a palinrome"<<endl;
    else cout<<"word isn't a palindrome"<<endl;
    return 0;
}

//this is the program to check string is palindrome or not?