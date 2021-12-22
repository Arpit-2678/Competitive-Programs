// LINK=https://codeforces.com/contest/1619/problem/D


#include <bits/stdc++.h>
 
#define int long long
#define mp make_pair
#define x first
#define y second
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
 
/*#pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
#pragma GCC optimize("fast-math")
*/
typedef long double ld;
typedef long long ll;
 
using namespace std;
 
mt19937 rnd(143);
 
const int inf = 1e10;
const int M = 998244353;
const ld pi = atan2(0, -1);
const ld eps = 1e-4;
 
int n, m;
vector<vector<int>> p;
 
bool check(int x){
    vector<bool> abl(m);
    bool pair = false;
    for(int i = 0; i < n; ++i){
        int c = 0;
        for(int j = 0; j < m; ++j){
            if(p[i][j] >= x){
                abl[j] = true;
                c++;
            }
        }
        if(c > 1) pair = true;
    }
    if(!pair && m > 1) return false;
    bool ans = true;
    for(bool b: abl){
        ans = ans && b;
    }
    return ans;
}
 
void solve() {
    cin >> n >> m;
    p.assign(n, vector<int>(m));
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> p[i][j];
        }
    }
    int l = 1, r = 2;
    while (check(r)) r *= 2;
    while (r - l > 1){
        int mid = (r + l) / 2;
        if(check(mid)) l = mid;
        else r = mid;
    }
    cout << l;
}
 
bool multi = true;
 
signed main() {
    //freopen("in.txt", "r", stdin);
    //freopen("in.txt", "w", stdout);
    int t = 1;
    if (multi) {
        cin >> t;
    }
    for (; t != 0; --t) {
        solve();
        cout << "\n";
    }
    return 0;
}
