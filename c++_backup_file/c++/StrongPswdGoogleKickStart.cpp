#include <bits/stdc++.h>
using namespace std;

bool isSpecialChar(char ch)
{
    if (ch == '#' || ch == '@' || ch == '*' || ch == '&')
        return true;

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int test = 1; test <= t; test++)
    {
        int n;
        string s;
        cin >> n >> s;
        bool upper, lower, digit, special;
        upper = lower = digit = special = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                lower = true;
            else if (s[i] >= 'A' && s[i] <= 'Z')
                upper = true;
            else if (s[i] >= '0' && s[i] <= '9')
                digit = true;
            else if (isSpecialChar(s[i]))
                special = true;
        }
        if (!lower)
            s.push_back('a');
        if (!upper)
            s.push_back('A');
        if (!digit)
            s.push_back('1');
        if (!special)
            s.push_back('#');

        int x = s.size();
        if (x < 7)
        {
            for (int i = 0; i < 7 - x; i++)
            {
                s.push_back('a');
            }
        }
        cout << "Case #" << test << ": "
             << s << endl;
    }

    return 0;
}