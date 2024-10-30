`#include<bits/stdc++.h>
using namespace std;
int flag = 0;
int main()
{
    int row , col, key;
    cout<<"Enter rows and columns of matrix :";
    cin>>row>>col;
    cout<<"\nEnter key eleme to search for :";
    cin>>key;
    int arr[row][col];
    //inputing array elements 
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            cin>>arr[i][j] ;
    
    //scanning array elements
    int bol = 0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(key == arr[i][j]){
                cout<<"\nat [Row: "<<i+1<<", Col: "<<j+1<<"]"<<endl;
                bol = 1; 
            }
        }
    }
    if(bol==0){
        cout<<"Element not found! \n";
    }
    else cout<<"Element found!\n";
    return 0;
}

//this is the program to 
//take input of 2-d array elements