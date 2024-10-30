#include <bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> nums = {1, 1, 2, 2, 2, 3};
    unordered_map<int, int> umap;
    for (auto x : nums)
    {
        umap[x]++;
    }
    sort(nums.begin(), nums.end(), [&](int a, int b)
         { return umap[a] != umap[b] ? umap[a] < umap[b] : a > b; });
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i];
    }
    return 0;
}