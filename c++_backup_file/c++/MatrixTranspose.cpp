#include<bits/stdc++.h>
using namespace std;
int main()
{
    //matrix elem input 
    int row,col;
    cout<<"Enter row and columns :";
    cin>>row>>col;
    int mtx[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>mtx[i][j];
        }
    }

    //transpose logic
    for(int i=0;i<row;i++)
        for(int j=i;j<col;j++){
            int temp = mtx[i][j];
            mtx[i][j] = mtx[j][i];
            mtx[j][i] = temp;
        }
    //outputing the transpose with applied logic or it 
        cout<<"\nTranspose Matrix is :"<<
        endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<mtx[i][j]<<" ";
        }
        cout<<"\n";
    }


    return 0;
}
//This is the program for mtx transpose of same row and column