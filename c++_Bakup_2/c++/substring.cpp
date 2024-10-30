#include <bits/stdc++.h>
using namespace std;

string sub_str(int s, int e, string str)
{
    string ans = "";
    // cout << "Before --> " << ans << endl;
    for (int i = s; i < e; i++)
    {
        ans += str[i];
        // cout << str[i] << endl;
    }

    // cout << "After --> " << ans << endl;
    return ans;
}

int main()
{
    string str;
    cin >> str;
    cout << "Enter range for substring : ";
    int start, end;
    cin >> start >> end;
    cout << "--> " << str << endl;
    cout << sub_str(start, end, str) << endl;
    // std::string<<string::substr()
    return 0;
}