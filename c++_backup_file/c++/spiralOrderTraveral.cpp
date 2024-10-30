#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int row,col;
    cin>>row>>col;
    int arr[row][col];
    //matrix elements input 
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    //four variables
    int row_start{0},col_start{0};
    int row_end{row-1},col_end{col-1};
    while(row_start<=row_end&&col_start<=col_end){
        //printing the first row
        for(int i=col_start;i<=col_end;i++){
            cout<<arr[row_start][i];
        }
        row_start++;
        //printing the last col
        for(int i=row_start;i<=row_end;i++){
            cout<<arr[i][col_end];
        }
        col_end--;
        //printing last row
        for(int i=col_end;i>=col_start;i--){
            cout<<arr[row_end][i];
        }
        row_end--;
        //printing the first col
        for(int i=row_end;i>=row_start;i--){
            cout<<arr[i][col_start];
        }
        col_start++;
        
    }
    
    return 0;
}


//This is the program for spiral order traversal of a matrix