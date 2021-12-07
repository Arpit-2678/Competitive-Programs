//  LINK=https://atcoder.jp/contests/dp/tasks/dp_c


#include<bits/stdc++.h>
using namespace std;

// #define ll long long int
#define int long long int
#define pb push_back
#define xxx exit(0)
#define ain(arr) for (auto &it : arr) cin >> it;
#define op(container) for(auto it: container)  cout<<it<<" ";
#define clr  cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define sortv(arr) sort(arr.begin(),arr.end())
#define sorta(arr,n) sort(arr,arr+n)
#define helper(arr) arr.begin(),arr.end()
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)

const int inf = 1e9 + 7;


template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr (names + 1, ',');
	cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}


int ways(std::vector<std::vector<int>>&v, std::vector<std::vector<int>>&dp, int n, int i, int j) {


	if ( i >= n or j >= 3)
		return 0;

	if (dp[i][j] != -1)
		return dp[i][j];

	int op1 = v[i][j];
	if (i + 1 < n and j - 1 >= 0 and j + 1 < 3)
		return dp[i][j] = op1 + max(ways(v, dp, n, i + 1, j - 1), ways(v, dp, n, i + 1, j + 1));
	else if (i + 1 < n and j + 2 < 3)
		return dp[i][j] = op1 + max(ways(v, dp, n, i + 1, j + 1), ways(v, dp, n, i + 1, j + 2));
	else
		return dp[i][j] = op1 + max(ways(v, dp, n, i + 1, j - 1), ways(v, dp, n, i + 1, j - 2));

}







void solve() {

	int n;
	cin >> n;
	std::vector<std::vector<int>>v, dp(n, std::vector<int>(3, -1));
	for (int i = 0; i < n; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		v.pb({a, b, c});
	}

	int op1 = ways(v, dp, n, 0, 0);
	int op2 = ways(v, dp, n, 0, 1);
	int op3 = ways(v, dp, n, 0, 2);

	cout << max(op1, max(op2, op3));




}


signed main(int argc, char const * argv[])
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	clock_t z = clock();

	int t = 1;
	// cin >> t;

	while (t--) solve();

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << "\n";

	return 0;

}
