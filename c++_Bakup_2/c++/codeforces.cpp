#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool isComposite(ll num)
{
    if (num == 0)
    {
        return 1;
    }
    else if (num == 1)
    {
        return 0;
    }
    else
    {

        for (ll i = 2; i < num; i++)
        {
            if (!(num % i))
            {
                return false;
            }
        }
        return true;
    }
}

int main()
{

    ll n;
    cin >> n;
    for (int i = n / 2; i < n; i++)
    {
        if ((!isComposite(i) && !isComposite(n - i)))
        {
            cout << i << " " << n - i << endl;
            return 0;
        }
    }
    cout << isComposite(7);

    return 0;
}
// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;

// bool checkPrime(ll num)
// {
//     if (num == 0 || num == 1)
//     {
//         return false;
//     }
//     else
//     {

//         for (ll i = 2; i < num; i++)
//         {
//             if (!(num % i))
//             {
//                 return false;
//             }
//         }
//         return true;
//     }
// }

// int main()
// {

//     ll n, m;
//     cin >> n >> m;
//     bool found{false};
//     for (int i = n + 1; i < m; i++)
//     {
//         if (checkPrime(i))
//         {
//             found = true;
//         }
//     };
//     if (found)
//     {
//         cout << "NO\n";
//     }
//     else if (checkPrime(m))
//     {
//         cout << "YES\n";
//     }
//     else
//         cout << "NO\n";
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void solve(){
//     int x1,x2,x3,x4;
//     cin>>x1>>x2>>x3>>x4;
//     set<int>s;
//     s.insert(abs(x4-x3));
//     s.insert(abs(x4-x2));
//     s.insert(abs(x4-x1));
//     s.insert(abs(x3-x2));
//     s.insert(abs(x3-x1));
//     s.insert(abs(x2-x1));
//     for(auto x:s){
//         if(*(&x)){
//         cout<<*(&x)<<" ";
//         }
//     }

// }

// int main() {
// 	solve();
// 	return 0;
// }

/*

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int c{0};
string f;

set<char>s;
bool ans(){
    sort(s.cbegin(),s.cend());
    sort(f.begin(),f.end());
    int i=0;
    for(auto x:s){
        if(*(&x)!=f[i]){
            return false;
        }
        ++i;
    }
    return true;
}

void solve(){
    string g,h;
    cin>>g;cin>>h;cin>>f;
    int a,b;
    a = g.size();
    b = h.size();
    c = f.size();
    int m = max(a,b);
    if(a+b==c){
    for(int i=0;i<m;i++){
        if(i<a-1){
            s.insert(g[i]);
        }
        if(i<b-1){
            s.insert(h[i]);
        }
    }
    }
if(ans()){
    cout<<"YES\n";
}
else cout<<"NO\n";
}

int main() {
    solve();
    return 0;
}

*/

// #include <bits/stdc++.h>
// using namespace std;
// // map<int,int>map;

// void solve()
// {
//     int n;
//     cin >> n;
//     int min = INT_MAX;
//     int max = INT_MIN;
//     int k = 0;
//     int l = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int t;
//         cin >> t;
//         if (t <= min)
//         {
//             min = t;
//             k = i;
//         }
//         if (t >= max)
//         {
//             max = t;
//             l = i;
//         }
//     }
//     cout << k << " " << l << endl;
//     cout << (abs((n - 2) - k)) + (abs(l));
// }

// int main()
// {
//     solve();
// }

// #include <iostream>
// #define ll long long int
// using namespace std;

// bool b{true};

// ll sum(int n) {
//     ll s{0};
//     for(ll i=1;i<=n;i++){
//         if(!b){
//             s+=i;
//             b=true;
//         }
//         else {
//             s-=i;
//             b=false;
//         }
//     }
//     return s;
// }

// int main() {
//     ll n;
//     cin>>n;
//     cout<<sum(n);
// 	return 0;
// }

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// set<int>s;

// int len(int a){
//     a = sizeof(a)/ sizeof(int);
//     return a;
// }

// bool unique(int n){

//     while(n){
//     s.insert(n%10);
//     n/=10;
//     }
//     if(s.size()==len(n)){
//         return 1;
//     }
//     return false;
// }

// void solve(){
//     ll n;
//     cin>>n;
//     while(!unique(n)){
//         ++n;
//     }
//     cout<<n;
// }

// int main() {
//    solve();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++){
//         if(a[i]<n){
//         cout<<a[a[i]]<<" ";
//         }
//         else{
//             cout<<a[a[i]%n]<<" ";
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int ans{0};

// void solve()
// {
//     int k, n, w;
//     cin >> k >> n >> w;
//     for (int i = 1; i <= w; i++)
//     {
//         ans += k * i;
//     }
//     ans = abs(ans - n);
//     cout << ans;
// }

// int main()
// {
//     solve();
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int ans{0};
// void solve()
// {
//     int limak, bob;
//     cin >> limak >> bob;
//     if (limak > bob)
//     {
//         cout << "0";
//     }
//     else
//     {
//         while (limak <= bob)
//         {
//             ++ans;
//             limak *= 3;
//             bob *= 2;
//         }
//     }
//     cout << ans;
// }

// int main()
// {
//     solve();
//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;
// int arr[3];
// int getNum(char  c){
//     if(c=='1')return 1;
//     else if(c=='2')return 2;
//     else return 3;
// }
// void solve()
// {
//     string s;
//     cin >> s;
//     if (s.size() == 1)
//     {
//         cout << s;
//     }
//     else
//     {
//         for (int i = 0; i < s.size(); i++)
//         {
//             if (getNum(s[i])&&s[i]!='+')
//             {
//                 // cout<<getNum(s[i])<<endl;
//                 ++arr[getNum(s[i])-1];
//                 // cout << arr[0] << arr[1] << arr[2] << endl;
//             }
//         }
//     }
//     for (int j = 0; j < 3; j++)
//     {
//         if (arr[j] != 0)
//         {
//             for (int k = 0; k < arr[j]; k++)
//             {
//                 if(j==2&&k==arr[j]-1){

//                 cout << j +1;
//                 }
//                 else cout << j +1<< "+";
//             }
//         }
//     }
// }

// int main()
// {
//     solve();
//     return 0;
// }