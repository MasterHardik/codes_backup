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

    ll reverse_binary(ll bin_num)
    {
        if (bin_num == 1 || bin_num == 0)
        {
            return bin_num;
        }
        else
        {
            return 10 * reverse_binary(bin_num / 10) + (bin_num % 10);
        }
    }

int main()
{
    ll deci_num;
    cin >> deci_num;
    ll bin_num = deci_to_binary(deci_num);
    ll reversed_binary = reverse_binary(bin_num);
    cout << reverse_binary;
    return 0;
}

/* ***************************************************************************
    This is a program to reverse  the  binary binary bits of a decimal number
                and print its equivalent decimal number
 *****************************************************************************/