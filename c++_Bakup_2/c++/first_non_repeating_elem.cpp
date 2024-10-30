// First non repeating element in an array
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int si;
    cout << "Enter size of array : ";
    cin >> si;
    int arr[si];
    for (int i = 0; i < si; i++)
    {
        cin >> arr[i];
    }

    unordered_map<int, int> umap;
    for (int i = 0; i < si; i++)
    {
        umap[arr[i]]++;
        // int key = arr[i];
        // umap[key]++;
    }
    // for (auto itr = umap.begin(); itr != umap.end(); itr++)
    // {
    //     cout << itr->first << " " << itr->second << endl;
    // }
    for (int i = 0; i < si; i++)
    {
        int key = arr[i];
        auto temp = umap.find(key);
        if (temp->second == 1)
        {
            cout << key << endl;
            // return 0;
        }
        // way 2

        // int key = arr[i];
        // if (umap.find(key) != umap.end())
        // {
        //     auto temp = umap.find(key);
        //     if (temp->second == 1)
        //     {
        //         cout << "First non-repeoting elem: " << temp->first << endl;
        //         break;
        //     }
        // }
    }
    // cout << 0 << endl;
    return 0;
}