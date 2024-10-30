#include <bits/stdc++.h>
using namespace std;

int fibbo(int n)
{
    if (n == 1 || n == 2 || n == 3)
    {
        return n;
    }
    else
        return fibbo(n - 1) + fibbo(n - 2);
}

int main()
{

    int dp[102][1002];
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    cout << fibbo(n);
    return 0;
}

// int dp[1002][1002];
// memset(dp, -1, sizeof(dp));
// for (int i = 0; i < 10; i++)
// {
//     for (int j = 0; j < 10; j++)
//     {
//         cout << dp[i][j] << " ";
//     }
//     cout << endl;
// }