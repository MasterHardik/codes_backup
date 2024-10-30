#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<vector<int>> v{
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {6, 7, 8}};

    std::vector<vector<int>> v(5, vector<int>(9, 0));
    // memset(&v, -1, sizeof(v));
    for (int i = 0; i < v.size(); i++)
    {
        for (auto j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}