#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m = 2;

    int n = 3;
    int arr[2][3] = {4, 5, 2,
                     9, 0, 6};
    // for (int i = 0; i < m; i++)
    // {

    //     for (int j = 0; j < n; j++)
    //     {

    //         std::cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    int row = sizeof(arr) / sizeof(arr[0]);
    int col = sizeof(arr[0]) / sizeof(arr[0][0]);
    // int col = arr[0].size();
    cout << "Number of rows are   : " << row << endl;
    cout << "Number if columns are  : " << col << endl;

    vector<vector<int>> v2(3, vector<int>(6, 3));
    for (int i = 0; i < v2.size(); i++)
    {
        for (int j = 0; j < v2[0].size(); j++)
        {
            cout << v2[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Rows in the vector is : " << v2.size() << endl;
    cout << "Cols in the vector is : " << v2[0].size() << endl;

    return 0;
}