#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> umap;
    umap["Hardy"] = 69;
    umap["gfg"] = 56;
    umap["helloworld"] = 90;

    // for (auto x : umap)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }

    for (auto itr = umap.begin(); itr != umap.end(); itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }
    cout << "--->>" << endl;
    string key = "Hardy";

    if (umap.find(key) != umap.end())
    {
        cout << key << " <-- found" << endl;
    }
    else
    {
        cout << "key not found" << endl;
    }

    cout << "--->>" << endl;
    if (umap.find(key) != umap.end())
    {
        auto temp = umap.find(key);
        cout << "key is : " << temp->first << endl;
        cout << "value is : " << temp->second << endl;
    }

    cout << "--->>" << endl;
    umap.insert(make_pair("mobile", 17000));
    for (auto iter = umap.begin(); iter != umap.end(); iter++)
    {
        cout << iter->first << " " << iter->second << endl;
    }

    cout << "--->>" << endl;
    key = "helloworld";
    for (auto it = umap.begin(); it != umap.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    cout << "--->>" << endl;
    umap.erase(key);
    cout << umap.size() << endl;

    cout << "--->>" << endl;
    int arr[] = {7, 1, 0, 3, 5, 0, 1, 3, 2, 5, 7, 3, 8, 9, 9};
    unordered_map<int, int> umaped;
    for (int i = 0; i < 15; i++)
    {
        int key = arr[i];
        umaped[key]++;
    }
    for (auto itt = umaped.begin(); itt != umaped.end(); itt++)
    {
        cout << itt->first << " " << itt->second << endl;
    }
    cout << "--->>" << endl;
    return 0;
}

/*  PRACTICED the next day

#include <iostream>
// #include<bits/stdc++.h>
#include<unordered_map>

using namespace std;
int main() {
    unordered_map<string,int> umap;
    umap["gfg"]  = 20;
    umap["sub"]  = 23;
    umap["NameValue"] = 1;

// 	for(auto x : umap)
// 	{
// 	    cout<<x.first<<" "<<x.second<<endl;
// 	}


    //  Way 2
for (auto itr = umap.begin(); itr != umap.end(); itr++)
{
    cout << itr->first << " " << itr->second << endl;
}
cout << "--->>" << endl;
string key = "gfg";
if (umap.find(key) != umap.end())
{
    cout << "key found" << endl;
}
else
    cout << "key not found" << endl;
cout << "--->>" << endl;

if (umap.find(key) != umap.end())
{
    auto temp = umap.find(key);
    cout << "Key is   : " << temp->first << endl;
    cout << "Value is : " << temp->second << endl;
}
cout << "--->>" << endl;
return 0;
}
*/