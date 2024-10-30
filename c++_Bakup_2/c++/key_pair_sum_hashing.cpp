#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> umap;
bool res(int x)
{
    for (auto itr = umap.begin(); itr != umap.end(); itr++)
    {
        int key = itr->first;
        int val = itr->second;
        int pair = x - key;
        if (pair == key)
        {
            if (val > 1)
            {
                return 1;
            }
        }
        else
        {
            if (umap.find(pair) != umap.end())
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x, i = 0;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        umap[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (res(x - a[i]))
        {
            cout << a[i] << " &  " << x - a[i] << endl;
        }
        else
            cout << "Not possible" << endl;
    }
}
// for (auto itr = umap.begin(); itr != umap.end(); itr++)
// {
//     cout << itr->first << " " << itr->second;
// }