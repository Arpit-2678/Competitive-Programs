//  LINK=https://codeforces.com/problemset/problem/1606/C

#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    k += 1;
    vector<int> a(n);
    for (int& x : a) {
      cin >> x;
      int cur = 1;
      while (x--) cur *= 10;
      x = cur;
    }
    long long res = 0;
    for (int i = 0; i < n; i++) {
      int cnt = k;
      if (i + 1 < n) cnt = min(cnt, a[i + 1] / a[i] - 1);
      res += a[i] * 1LL * cnt;
      k -= cnt;
    }
    cout << res << '\n';
  }
} 
