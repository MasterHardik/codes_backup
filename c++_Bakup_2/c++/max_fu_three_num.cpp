#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll max(ll a, ll b, ll c)
{
    if (a > b)
    {
        return (a > c) ? a : c;
    }
    else
    {
        return (b > c) ? b : c;
    }
}

// way two more compound
//  return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

ll max_one_liner(ll a, ll b, ll c)
{
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    cout << max(a, b, c) << endl;           // used ternary operator ones
    cout << max_one_liner(a, b, c) << endl; // used ternary operator twice
    cout << max(a, max(a, b)) << endl;
    return 0;
}