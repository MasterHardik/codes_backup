#include <bits/stdc++.h>
#define ll long long
using namespace std;

// using reccuresion
ll deci_to_binary(ll num)
{
    if (num == 1)
    {
        return num;
    }
    else
    {
        return 10 * (deci_to_binary(num / 2)) + (num % 2);
    }
}

int main()
{
    ll deci_num;
    cin >> deci_num;
    ll bin_num = deci_to_binary(deci_num);
    cout << bin_num;
    return 0;
}

//*********** this is a program to convert a decimal to binary number  ****************************//