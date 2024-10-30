#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a1[n], a2[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> a2[j];
    }
    map<int, int> umap;
    // for (int k = 0; k < n; k++)
    // {
    //     umap[a1[k]]++;
    // }
    for (auto x : a1)
    {
        umap[x]++;
    }
    // for (auto x : umap)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }
    for (auto x : a2)
    {
        auto temp = umap.find(x);
        if (umap.find(x) != umap.end())
        {
            for (int j = 0; j < temp->second; j++)
            {
                cout << (x) << " ";
            }
            umap.erase(x);
        }
    }

    for (auto x : umap)
    {
        cout << x.first << " ";
    }

    return 0;
}