// #include <iostream>
// #include <string.h>
// #include <unordered_map>
#include <string.h>
#include <iostream>
#include <unordered_map>
#include <vector>
// #include <bits/stdc++.h>

using namespace std;
int main()
{
    string Name[15] = {"A", "A", "B", "B", "A", "B", "C", "C", "C", "A", "B", "B", "C", "A", "C"};
    unordered_map<string, int> umap;
    for (int i = 0; i < 15; i++)
    {
        umap[Name[i]]++;
    }
    string name = "";
    int max_vote = 0;
    for (auto itr = umap.begin(); itr != umap.end(); itr++)
    {
        string key = itr->first;
        int val = itr->second;

        if (val > max_vote)
        {
            max_vote = val;
            name = key;
        }
        else if (val == max_vote)
        {
            if (key < name)
            {
                name = key;
            }
        }
    }

    vector<string> ans;
    ans.push_back(name);
    string temp = to_string(max_vote);
    ans.push_back(temp);
    cout << "Winner of election is : ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
    return 0;
}

// Since we wanted ans to be lexicographically smaller hence A5 is ans inspite B5 also exist;

// Question was to find out the person that was winner in election wiht greater votes if same vote then use lexicographical way.