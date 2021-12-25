//  LINK=https://codeforces.com/contest/1060/problem/D

// // GCC Optimizations
// #pragma GCC optimize("Ofast")
// #pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
// #pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define pb emplace_back
#define pf first
#define ps second
#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()
#define Endl '\n'
#define codejam cout<<"Case #"<<t<<": ";
#define PI 3.141592653589793238462
#define sz(x) ((int)(x).size())
#define mod 1000000007
#define forn(i,n) for(ll i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double lld;

ll gcd(ll a,ll b) {if(b==0) return a;return gcd(b,a%b);}

//////////////////////////////////// JAI SHREE RAM /////////////////////////////////////
const ll N=1e5+5;

void JAISHREERAM()
{
    ll n,ans=0;
    cin>>n;
    vector<ll> a(n),b(n);
    forn(i,n) cin>>a[i]>>b[i];
    sort(all(a));
    sort(all(b));
    forn(i,n) ans+=max(a[i],b[i]);
    ans+=n;
    cout<<ans<<Endl;
}
int main()
{
    fast;
    int T=1;
    // cin>>T;
    for(int t=1;t<=T;t++)
    {
        // codejam
        JAISHREERAM();
    }
    return 0;
}
