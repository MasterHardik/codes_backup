#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row , col;
    cin>>row>>col;
    int arr[row][col];
    //inputing array elements 
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            cin>>arr[i][j] ;
    
    //outputing array elements
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//this is the program to 
//take input of 2-d array elements
//and display the output