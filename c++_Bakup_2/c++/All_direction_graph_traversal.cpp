#include <bits/stdc++.h>

using namespace std;

int main()
{
    int mtx[3][3] = {
        {2, 4, 5},
        {7, 6, 4},
        {9, 1, 3}};

    for (int i = -1; i <= 1; i++)
    {
        for (int j = -1; j <= 1; j++)
        {
            cout << "NextX : " << i << " "
                 << "NextY : " << j << "  -> " << mtx[1 + i][1 + j] << endl;
        }
    }
    return 0;
}