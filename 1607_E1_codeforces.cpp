//  LINK=https://codeforces.com/contest/1607/problem/E

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;

        int bx = 0, by = 0;
        int min_bx = 0, max_bx = 0, min_by = 0, max_by = 0;
        for (char c: s) {
            if      (c == 'L') min_by = min(min_by, --by);
            else if (c == 'R') max_by = max(max_by, ++by);
            else if (c == 'U') min_bx = min(min_bx, --bx);
            else               max_bx = max(max_bx, ++bx);

            if (max_bx - min_bx >= n) {
                if (bx == min_bx) min_bx++;
                break;
            }
            if (max_by - min_by >= m) {
                if (by == min_by) min_by++;
                break;
            }
        }

        cout << 1 - min_bx << ' ' << 1 - min_by << '\n';
    }
}
