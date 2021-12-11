// LINK=https://atcoder.jp/contests/abc231/tasks/abc231_c


#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<bits/stdc++.h>
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


using namespace std;
using namespace __gnu_pbds;

typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag,
        tree_order_statistics_node_update>
        PBDS;
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
	PBDS ds;
	int n, q;
	cin >> n >> q;
	int x;
	for (int i = 0; i < n; i++) {
		cin >> x;
		ds.insert({x, i});
	}
	while (q--) {

		cin >> x;

		int pos = n - ds.order_of_key({x, -inf}) ;
		cout << pos << "\n";
	}



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



