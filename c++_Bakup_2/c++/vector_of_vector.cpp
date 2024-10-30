#include<bits/stdc++.h>

using namespace std;
int main()
{
    std::vector<vector<int>> v(5,vector<int>(9,0));
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            // v[i][j] = j;
            // v[i][j] = i;
            // v[i][j] = i+j;
            cout<<v[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0;
}