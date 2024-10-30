#include<bits/stdc++.h>
#define ll long long
#define MAX INT_MIN
#define MIN INT_MAX
using namespace std;

void init_code() {
#ifndef ONLINE_JUDGE
freopen("Input.txt", "r", stdin);
freopen("Output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}

class Solution {
 public:
  int strongPasswordChecker(string password) {
    bool lower = false;
    bool upper = false;
    bool number = false;
    vector<int> repeat;
    for (int i = 0, len = 1; i < password.size(); ++i) {
      lower = lower || islower(password[i]);
      upper = upper || isupper(password[i]);
      number = number || isdigit(password[i]);
      if (i > 0 && password[i] == password[i - 1]) ++len;
      if (i + 1 >= password.size() || password[i] != password[i + 1]) {
        if (len > 2) repeat.push_back(len - 2);
        len = 1;
      }
    }

    int n = repeat.size();
    int len = password.size();
    int delete_count = max(0, len - 20);
    int count = !lower + !upper + !number;
    if (len < 6) return max(6 - len, count);
    vector<vector<int>> dp(n + 1, vector<int>(delete_count + 1, INT_MAX));
    iota(dp[0].begin(), dp[0].end(), 0);
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j <= delete_count; ++j) {
        for (int k = 0; k <= min(repeat[i], j); ++k) {
          dp[i + 1][j] = min(dp[i + 1][j], dp[i][j - k] + (repeat[i] - k + 2) / 3 + k);
        }
      }
    }
    return max((dp[n][delete_count] - delete_count), count) + delete_count;
  }
};


int main()
{
	init_code();
	string  s;
	getline(cin,s);
	Solution sol;

	cout<<sol.strongPasswordChecker(s)<<endl;
	
}