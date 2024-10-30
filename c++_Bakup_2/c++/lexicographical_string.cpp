
#include <bits/stdc++.h>

using namespace std;
int main()
{
    string str1 = "Hardik";
    string str2 = "Harsh";
    if (str1 < str2)
        cout << str1 << endl;
    else
        cout << str2 << endl;

    // Other use
    string a[5] = {"a", "b", "a", "e", "d"};
    sort(a, a + 5);
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}

// when we compare string then they get compared owing lexicograapy
// i.e. Dictionary pattern