#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    // In this program I'am gonna make a week day chart using unordered map
    std::unordered_map<string, int> weekday;
    string arr[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    for (int i = 0; i < 7; i++)
    {
        string key = arr[i];
        weekday[key] += i + 1;
    }
    for (auto x : weekday)
    {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}
