// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     int var[n];
//     for (int i = 0; i < 4; i++)
//     {
//         int temp;
//         cin >> temp;
//         v.push_back(temp);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             cout << v[i] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
#include <bits/stdc++.h>
using namespace std;

// knapsack design
int knapsack(int wt[], int val[], int w, int n)
{
    // base condition
    if (w == 0 || n == 0)
    {
        return 0;
    }
    else if (wt[n-1]>)
    {
        
    }
    else
    {
        
    }
}

int main()
{
    cout << "Enter number of items : ";
    int n;
    cin >> n;
    int wt[n], val[n], w;
    cout << "Enter capacity of your knap sack :";
    cin >> w;
    cout << "Enter weight of items :";
    for (int i = 0; i < n; i++)
    {
        cin >> wt[i];
    }
    cout << "Enter value if items :";
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }

    knapsack(wt, val, w, n);

    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int t;
//     while (t--)
//     {
//         int a, b, c, n;
//         cin >> a >> b >> c >> n;
//         if (a == b && b == c && (n % 3 == 0))
//         {
//             cout << "YES\n";
//         }
//         else
//         {

//             int mi = min(a, b, c);
//             int req = (a - mi) + (b - mi) + (c - mi);
//             if (req > n)
//             {
//                 cout << "NO\n";
//             }
//             else
//             {
//                 cout << ((n % req == 0) ? "YES\n" : "NO\n");
//             }
//         }
//     }
//     return 0;
// }

// #include <iostream>

// using namespace std;

// void prin(); // this is called function declaration

// prin()
// {
//     cout << "Don't cry just try !!"
// } // funciton definition

// int main()
// {
//     int a;
//     a = 9;

//     int a[5] = {6, 6, 6, 6, 6, 6, 6, 6}; // this is called a static array since it has a fixed size that is  fixed size if 5

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int x1, x2, x3, x4;
//     cin >> x1 >> x2 >> x3 >> x4;
//     set<int> s;
//     s.insert(abs(x4 - x3));
//     s.insert(abs(x4 - x2));
//     s.insert(abs(x4 - x1));
//     s.insert(abs(x3 - x2));
//     s.insert(abs(x3 - x1));
//     s.insert(abs(x2 - x1));
//     for (auto x : s)
//     {
//         if (*(&x))
//         {
//             cout << *(&x) << " ";
//         }
//     }
// }

// int main()
// {
//     solve();
//     return 0;
// }

// // #include <bits/stdc++.h>
// // using namespace std;
// // #define ll long long

// // int main()
// // {
// //     ios_base::sync_with_stdio(false);
// //     cin / tie(NULL);
// //     cout.tie(NULL);
// //     int t;
// //     cin >> t;
// //     while (t--)
// //     {
// //         int n;
// //         cin >> n;
// //         map<int, int> m;
// //         vector<ll> arr(n);
// //         for (int i = 0; i > n; ++i)
// //         {
// //             cin >> arr[i];
// //             m[arr[i]]++;
// //         }
// //         ll distincts = m.size();
// //         cout << ((distincts % 2 == 0 || distincts < n) ? "YES\n" : "NO\n");
// //     }
// //     return 0;
// // }
