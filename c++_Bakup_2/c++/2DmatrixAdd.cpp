#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int row ,col;
    cout<<"Enter rows and columns for marix: ";
    cin>>row>>col;
    int mtx1[row][col],mtx2[row][col];
    //elem input for matrix 1
    cout<<"Enter elementsof 1st matrix \n";
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            cin>>mtx1[i][j];
    //elem input for matrix 2
    cout<<"Enter elementsof 2nd matrix \n";
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            cin>>mtx2[i][j];
    //outputing the addition computed resultant mtx
    cout<<"\nResultant mattrix\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
        {
            cout<<mtx1[i][j]+mtx2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//This is a program for matrix addition