#include <bits/stdc++.h>
using namespace std;
int main()
{
    int dp[102][1002];
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}