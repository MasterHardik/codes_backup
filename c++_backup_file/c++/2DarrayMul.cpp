#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int m1[n1][n2];
    int m2[n2][n3];
    //inputing first matrix(n1xn2) elements
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>m1[i][j];
        }
    }
    //inputing second matrix(n2xn3)
    for(int i=0;i<n2;i++){
        for(int j=0;j<n3;j++){
            cin>>m2[i][j];
        }
    }

    int ans[n1][n3];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            ans[i][j] =0;
        }
    }

    //main logic
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3; j++){
            for(int k=0;k<n2;k++){
                ans[i][j] += m1[i][k]*m2[k][j];
            }
        }
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl; 
    }
   
    return 0;
}

// This is the program for matrix multiplication
/*
          3 4 
m1(3x2)=  3 1 
          1 1 


m2(2x3)= 1 2 3
         1 3 2

res(3x3)

*/