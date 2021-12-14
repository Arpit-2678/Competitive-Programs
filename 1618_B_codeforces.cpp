//  LINK=https://codeforces.com/contest/1618/problem/B


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







void solve() {

	int n;
	cin >> n;

	string arr[n - 2];
	for (int i = 0; i < n - 2; i++) {
		cin >> arr[i];
	}

	string ans = "";

	ans += arr[0];

	int len = 2;
	string window = "";
	for (int i = 1; i < n - 2; i++) {
		char ch1 = arr[i].back();
		char ch2 = ans.back();
		window.pb(ch2);
		window.pb(ch1);

		if (window == arr[i])
		{
			ans.pb(ch1);
			len += 1;
		}
		else {
			ans += arr[i];
			len += 2;
		}

		window.clear();
		if (len == n)
			break;
	}
	if (len != n)ans.pb('a');
	cout << ans << "\n";


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
	cin >> t;

	while (t--) solve();

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << "\n";

	return 0;

}



