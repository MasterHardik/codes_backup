//  ****************    https://www.codechef.com/users/heno239    ***************************//

#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
#include <functional>
#include <iomanip>
#include <queue>
#include <ciso646>
#include <random>
#include <map>
#include <set>
#include <bitset>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <cassert>
#include <complex>
#include <numeric>
#include <array>
#include <chrono>
using namespace std;

//#define int long long
typedef long long ll;

typedef unsigned long long ul;
typedef unsigned int ui;
constexpr ll mod = 998244353;
// constexpr ll mod = 1000000007;
const ll INF = mod * mod;
typedef pair<int, int> P;

#define rep(i, n) for (int i = 0; i < n; i++)
#define per(i, n) for (int i = n - 1; i >= 0; i--)
#define Rep(i, sta, n) for (int i = sta; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
#define per1(i, n) for (int i = n; i >= 1; i--)
#define Rep1(i, sta, n) for (int i = sta; i <= n; i++)
#define all(v) (v).begin(), (v).end()
typedef pair<ll, ll> LP;

template <typename T>
void chmin(T &a, T b)
{
    a = min(a, b);
}
template <typename T>
void chmax(T &a, T b)
{
    a = max(a, b);
}
template <typename T>
void cinarray(vector<T> &v)
{
    rep(i, v.size()) cin >> v[i];
}
template <typename T>
void coutarray(vector<T> &v)
{
    rep(i, v.size())
    {
        if (i > 0)
            cout << " ";
        cout << v[i];
    }
    cout << "\n";
}
ll mod_pow(ll x, ll n, ll m = mod)
{
    if (n < 0)
    {
        ll res = mod_pow(x, -n, m);
        return mod_pow(res, m - 2, m);
    }
    if (abs(x) >= m)
        x %= m;
    if (x < 0)
        x += m;
    // if (x == 0)return 0;
    ll res = 1;
    while (n)
    {
        if (n & 1)
            res = res * x % m;
        x = x * x % m;
        n >>= 1;
    }
    return res;
}
// mod should be <2^31
struct modint
{
    int n;
    modint() : n(0) { ; }
    modint(ll m)
    {
        if (m < 0 || mod <= m)
        {
            m %= mod;
            if (m < 0)
                m += mod;
        }
        n = m;
    }
    operator int() { return n; }
};
bool operator==(modint a, modint b) { return a.n == b.n; }
bool operator<(modint a, modint b) { return a.n < b.n; }
modint operator+=(modint &a, modint b)
{
    a.n += b.n;
    if (a.n >= mod)
        a.n -= (int)mod;
    return a;
}
modint operator-=(modint &a, modint b)
{
    a.n -= b.n;
    if (a.n < 0)
        a.n += (int)mod;
    return a;
}
modint operator*=(modint &a, modint b)
{
    a.n = ((ll)a.n * b.n) % mod;
    return a;
}
modint operator+(modint a, modint b) { return a += b; }
modint operator-(modint a, modint b) { return a -= b; }
modint operator*(modint a, modint b) { return a *= b; }
modint operator^(modint a, ll n)
{
    if (n == 0)
        return modint(1);
    modint res = (a * a) ^ (n / 2);
    if (n % 2)
        res = res * a;
    return res;
}

ll inv(ll a, ll p)
{
    return (a == 1 ? 1 : (1 - p * inv(p % a, a)) / a + p);
}
modint operator/(modint a, modint b) { return a * modint(inv(b, mod)); }
modint operator/=(modint &a, modint b)
{
    a = a / b;
    return a;
}
const int max_n = 1 << 20;
modint fact[max_n], factinv[max_n];
void init_f()
{
    fact[0] = modint(1);
    for (int i = 0; i < max_n - 1; i++)
    {
        fact[i + 1] = fact[i] * modint(i + 1);
    }
    factinv[max_n - 1] = modint(1) / fact[max_n - 1];
    for (int i = max_n - 2; i >= 0; i--)
    {
        factinv[i] = factinv[i + 1] * modint(i + 1);
    }
}
modint comb(int a, int b)
{
    if (a < 0 || b < 0 || a < b)
        return 0;
    return fact[a] * factinv[b] * factinv[a - b];
}
modint combP(int a, int b)
{
    if (a < 0 || b < 0 || a < b)
        return 0;
    return fact[a] * factinv[a - b];
}

ll gcd(ll a, ll b)
{
    a = abs(a);
    b = abs(b);
    if (a < b)
        swap(a, b);
    while (b)
    {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}
using ld = long double;
// typedef long double ld;
typedef pair<ld, ld> LDP;
const ld eps = 1e-10;
const ld pi = acosl(-1.0);
template <typename T>
void addv(vector<T> &v, int loc, T val)
{
    if (loc >= v.size())
        v.resize(loc + 1, 0);
    v[loc] += val;
}
/*const int mn = 2000005;
bool isp[mn];
vector<int> ps;
void init() {
    fill(isp + 2, isp + mn, true);
    for (int i = 2; i < mn; i++) {
        if (!isp[i])continue;
        ps.push_back(i);
        for (int j = 2 * i; j < mn; j += i) {
            isp[j] = false;
        }
    }
}*/

//[,val)
template <typename T>
auto prev_itr(set<T> &st, T val)
{
    auto res = st.lower_bound(val);
    if (res == st.begin())
        return st.end();
    res--;
    return res;
}

//[val,)
template <typename T>
auto next_itr(set<T> &st, T val)
{
    auto res = st.lower_bound(val);
    return res;
}
using mP = pair<modint, modint>;
mP operator+(mP a, mP b)
{
    return {a.first + b.first, a.second + b.second};
}
mP operator+=(mP &a, mP b)
{
    a = a + b;
    return a;
}
mP operator-(mP a, mP b)
{
    return {a.first - b.first, a.second - b.second};
}
mP operator-=(mP &a, mP b)
{
    a = a - b;
    return a;
}
LP operator+(LP a, LP b)
{
    return {a.first + b.first, a.second + b.second};
}
LP operator+=(LP &a, LP b)
{
    a = a + b;
    return a;
}
LP operator-(LP a, LP b)
{
    return {a.first - b.first, a.second - b.second};
}
LP operator-=(LP &a, LP b)
{
    a = a - b;
    return a;
}

mt19937 mt(time(0));

const string drul = "DRUL";
string senw = "SENW";
// DRUL,or SENW
// int dx[4] = { 1,0,-1,0 };
// int dy[4] = { 0,1,0,-1 };
//-----------------------------------------

int calc(vector<int> a, vector<int> b)
{
    int n = a.size();
    vector<int> rev(n);
    rep(i, b.size()) rev[b[i]] = i;
    vector<int> dp(n);
    rep(i, n)
    {
        int loc = rev[a[i]];
        rep(j, loc) chmax(dp[loc], dp[j] + 1);
        chmax(dp[loc], 1);
    }
    int res = 0;
    rep(i, n) chmax(res, dp[i]);
    return res;
}

const int mn = 6;
using ar = array<vector<int>, 3>;
ar ans[mn + 1][mn + 1][mn + 1][mn + 1];
bool ansexi[mn + 1][mn + 1][mn + 1][mn + 1];
void expr()
{
    for (int n = 1; n <= mn; n++)
    {
        vector<vector<int>> ps;
        vector<int> v(n);
        rep(i, n) v[i] = i;
        do
        {
            ps.push_back(v);
        } while (next_permutation(all(v)));
        vector<vector<int>> pre(ps.size(), vector<int>(ps.size()));
        rep(i, ps.size()) Rep(j, i, ps.size())
        {
            pre[i][j] = calc(ps[i], ps[j]);
        }
        rep(i, ps.size()) rep(j, ps.size()) rep(k, ps.size())
        {
            int a = pre[i][j];
            int b = pre[i][k];
            int c = pre[j][k];
            if (!ansexi[n][a][b][c])
            {
                ansexi[n][a][b][c] = true;
                ans[n][a][b][c] = {ps[i], ps[j], ps[k]};
            }
        }
    }
}
ar sol(int n, int a, int b, int c)
{
    if (n <= 6)
        return ans[n][a][b][c];
    ar res;
    if (c == n)
    {
        if (a != b)
        {
            return res;
        }
        rep(j, n) res[0].push_back(j);
        for (int i = n - 1; i >= a; i--)
        {
            res[1].push_back(i);
        }
        rep(i, a) res[1].push_back(i);
        res[2] = res[1];
        return res;
    }
    if (a == 1)
    {
        vector<int> v;
        v.push_back(b);
        int rest = n - b;
        while (rest > 0)
        {
            int chk = 0;
            for (int ad = 1; ad <= min(rest, b); ad++)
            {
                if (v.size() + 1 + rest - ad >= c)
                {
                    chk = ad;
                }
                else
                    break;
            }
            if (chk == 0)
                return res;
            v.push_back(chk);
            rest -= chk;
        }
        if (v.size() != c)
            return res;
        int cur = n - 1;
        rep(i, n) res[0].push_back(i);
        per(i, n) res[1].push_back(i);
        for (int cnt : v)
        {
            for (int i = cur - cnt + 1; i <= cur; i++)
            {
                res[2].push_back(i);
            }
            cur -= cnt;
        }
    }
    return res;
}
void solve()
{
    int n, a, b, c, ope;
    cin >> n >> a >> b >> c >> ope;
    ar ans = sol(n, a, b, c);
    if (ans[0].size())
    {
        cout << "YES\n";
        if (ope)
        {
            rep(i, 3)
            {
                vector<int> v = ans[i];
                rep(j, n) v[j]++;
                coutarray(v);
            }
        }
    }
    else
    {
        cout << "NO\n";
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // cout << fixed << setprecision(10);
    // init_f();
    // init();
    expr();
    // while(true)
    int t;
    cin >> t;
    rep(i, t)
        solve();
    return 0;
}
