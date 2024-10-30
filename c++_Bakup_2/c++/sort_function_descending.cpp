#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int container[n];
    for (int i = 0; i < n; i++)
    {
        cin >> container[i];
    }

    sort(container, container + n, greater<int>());

    for (int i = 0; i < n; i++)
    {
        cout << container[i] << " ";
    }

    return 0;
}