Link for Ques:
https://codeforces.com/contest/1622/problem/A


#include <bits/stdc++.h>
#ifdef LOCAL
#include "debug.hpp"
#else
#define debug(...) void(0);
#endif
using namespace std;
#define int long long
void solve() {

	vector<int> v(3);
	for (int i = 0; i < 3; ++i) {
		cin >> v[i];
	}
	int n = 3;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			for (int k = 0; k < n; ++k) {
				if (i != j && j != k && k != i) {
					if (v[i] == v[j] + v[k]) {
						cout << "YES\n";
						return;
					}
				}
			}
		}
	}
	sort(v.begin(), v.end());
	int ans = 0;
	if (v[0] == v[1] && v[2] % 2 == 0) {
		ans = 1;
	}
	if (v[1] == v[2] && v[0] % 2 == 0) {
		ans = 1;
	}
	cout << (ans ? "YES\n" : "NO\n");


}

int32_t main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n; while (n--) solve(); return 0;
}
