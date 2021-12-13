// LINK=https://codeforces.com/contest/1591/problem/C


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

	int n, k;
	cin >> n >> k;

	int x;
	std::vector<int> pos, neg;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x < 0)neg.pb(-x);
		else if (x > 0) pos.pb(x);
	}
	sortv(pos);
	sortv(neg);

	int pos_size = pos.size();
	int neg_size = neg.size();


	int rem = pos_size % k;
	int ans = 0;
	if (pos_size > 0) {
		if (rem != 0 and rem != pos_size)
			ans = (2 * 1LL * pos[rem - 1]);

		for (int i = rem; i < pos_size; i += k) {
			if ((i + k - 1) != (pos_size - 1))
				ans += (2 * 1LL * pos[i + k - 1]);
			else if ((i + k - 1) == (pos_size - 1))
				break;
		}
	}

	if (neg_size > 0) {
		rem = neg_size % k;
		if (rem != 0 and rem != neg_size)
			ans = (2 * 1LL * neg[rem - 1]);

		for (int i = rem; i < neg_size; i += k) {
			if ((i + k - 1) != (neg_size - 1))
				ans += (2 * 1LL * neg[i + k - 1]);
			else if ((i + k - 1) == (neg_size - 1))
				break;
		}


	}

	if (pos_size > 0 and neg_size > 0) {
		ans += max(pos[pos_size - 1], neg[neg_size - 1]);
		ans += (2 * 1LL * min(pos[pos_size - 1], neg[neg_size - 1]));
	}
	else if (pos_size > 0) {
		ans += pos[pos_size - 1];
	}
	else if (neg_size > 0) {
		ans += neg[neg_size - 1];
	}

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



