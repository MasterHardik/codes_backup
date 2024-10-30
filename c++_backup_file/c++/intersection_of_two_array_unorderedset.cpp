#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter size of two array  :";
    cin >> n >> m;
    int a1[n], a2[m];
    unordered_set<int> us;
    cout << "Enter 1st array elem : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
        us.insert(a1[i]);
    }
    cout << "Enter 2nd array elem : ";
    for (int i = 0; i < m; i++)
    {
        cin >> a2[i];
    }

    // checking and printing out the intersecting elements in both the array
    int cnt{0};
    for (int j = 0; j < m; j++)
    {
        auto temp = us.find(a2[j]);
        if (us.find(a2[j]) != us.end())
        {
            cout << (*temp) << " " << endl;
            // cout << *(us.find(a2[j])) << " " << endl;
            cnt++;
            us.erase(a2[j]); // we need to do this coz it count the element frequence twice as in a1 = {4 ,4}&a2 = {4} Ans : 1 but gave 2  so we removed elem 4 from set;
        }
    }
    cout << "Total intersecting : " << cnt << endl;
}