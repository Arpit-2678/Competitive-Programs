// LINK=https://codeforces.com/contest/1114/problem/B


#include <bits/stdc++.h>
#ifdef LOCAL
#include "debug.hpp"
#else
#define debug(...) void(0);
#endif
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> v(n);
	map<int, int> freq;
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	vector<int> b = v;
	sort(b.rbegin(), b.rend());
	for (int i = 0; i < k * m; ++i) {
		freq[b[i]]++;
	}

	vector<int> ans;
	int cnt = 0;
	int res = 0;
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		if ((k - 1) * m <= ((n - i) - 1) && cnt < m || k == 1) {
			if (freq[v[i]] > 0) {
				freq[v[i]]--;
				sum += v[i];
				cnt++;
			}
		}
		else {
			ans.push_back(i);
			cnt = 0;
			if (freq[v[i]] > 0) {
				freq[v[i]]--;
				sum += v[i];
				cnt++;
			}
			k--;
		}
	}
	cout << sum << endl;
	for (auto &x : ans) {
		cout << x << " ";
	}

	return 0;
}
