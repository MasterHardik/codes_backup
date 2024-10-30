#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // int psa[n];
    // now  we'll make unordered set
    unordered_set<int> us;
    int pre_sum{0};
    for (int i = 0; i < n; i++)
    {
        pre_sum += a[i];
        if (pre_sum == 0)
        {
            cout << "YES" << endl;
            return 0;
        }
        if (us.find(pre_sum) != us.end())
        {
            cout << "YES" << endl;
            return 0;
        }
        us.insert(pre_sum);
    }
    cout << "NO" << endl;
    // // now printing prefix sum array
    // for (int j = 0; j < n; j++)
    // {
    //     cout << psa[j] << " ";
    // }

    return 0;
}