#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, m;
    cin >> n >> m;
    unordered_map<char, int> umap1, umap2;

    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        umap1[c]++;
    }
    for (int i = 0; i < m; i++)
    {
        char c;
        cin >> c;
        umap2[c]++;
    }
    cout << ((umap1 == umap2) ? "Equal" : "Not Equal") << endl;
    return 0;
}