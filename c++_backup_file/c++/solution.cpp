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

int main()
{
	init_code();     // must call this to use
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n;
	cin>>n;
	cout<<"working : --->> "<<oct<<n<<endl;
	return 0;
}