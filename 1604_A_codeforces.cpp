//  LINK=https://codeforces.com/contest/1604/problem/A


#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
      int k; cin >> k;
      ans = max(ans, k - i);
    }
    cout << ans << '\n';
  }
  return 0;
}
