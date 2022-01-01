//  LINK=https://codeforces.com/contest/1616/problem/A


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



int opposite(int num) {
	return (num * (-1));
}


void solve() {

	int n;
	cin >> n;
	unordered_map<int, int>ump;
	unordered_set<int>visited;

	int x;
	int arr[n] {0};
	ain(arr);
	// bug(ump.size());
	int ans = 0;

	for (int i = 0; i < n; i++) {
		ump[arr[i]]++;
	}

	for (int i = 0; i < n; i++) {

		int freq = ump[arr[i]];
		if (visited.find(arr[i]) == visited.end()) {
			if (arr[i] == 0)
				ans += 1;
			else if (freq >= 2) {
				ans += 2;
				int val = opposite(arr[i]);

				if (ump.find(val) != ump.end()) {
					visited.insert(val);
				}
			}
			else {
				int val = opposite(arr[i]);
				if (ump.find(val) != ump.end()) {
					ans += 2;
					visited.insert(val);
				}
				else
					ans += 1;
			}
		}

		visited.insert(arr[i]);

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



