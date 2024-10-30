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
    unordered_map<int, int> umap;
    for (int i = 0; i < n; i++)
    {
        umap[a[i]]++;
    }

    for (int j = 0; j < n; j++)
    {
        auto temp = umap.find(a[j]);
        if (temp->second >= 2)
        {
            cout << "The first repeating element is : " << temp->first << endl;
            return 0;
        }
    }

    /* short hand for printing unordered map */

    // for (auto x : umap)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }

    /* or we can use itrator for printing unordered map */
    // keyword auto is used to resolve the complex data types like pointere to object or fuction etc.*/

    // for (auto itr = umap.begin(); itr != umap.end(); itr++)
    // {
    //     cout << itr->first << " " << itr->second << endl;
    // }
    return 0;
}