// LINK=https://codeforces.com/problemset/problem/1474/A


#include<bits/stdc++.h>
#define ll long long int
#define test while(t--)
#define pb push_back
#define ub upper_bound
#define lb lower_bound
#define mp make_pair
#define xxx exit(0)
#define ain(arr) for (auto &it : arr) cin >> it;     
#define fs first
#define sec second
#define op(container) for(auto it: container)  cout<<it<<" ";
#define clr  cin.ignore(numeric_limits<streamsize>::max(), '\n')
using namespace std;
const int inf = 1e9+7;

//   for calculating a to power b...
ll binpow(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = ((res%inf) * (a%inf))%inf;
        a = ((a%inf) * (a%inf))%inf;
        b >>= 1;
    }
    return (res%inf);
}
//  for calculating gcd.. 
// ll gcd(ll a,ll b)
// {
//     if (b==0) return a;
//     return gcd(b,a%b);
// }
//  for converting string to uppercase....
string to_upper(string a)
{
    for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A';
    return a;
}
//  for converting string to lowercase.... 
string to_lower(string a)
{
    for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A';
    return a;
}

bool cmp(int a, int b)
{
     
    if (a % 2 == 0 && b % 2 == 0)
        return a < b;
 
    if (a % 2 != 0 && b % 2 != 0)
        return b < a;
 

    if (a % 2 != 0)
        return true;
 
    return false;
}
ll  gcd(ll u, ll v)
{
    ll shift;
    if (u == 0) return v;
    if (v == 0) return u;
    shift = __builtin_ctz(u | v);
    u >>= __builtin_ctz(u);
    do {
        v >>= __builtin_ctz(v);
        if (u > v) {
          ll t = v;
            v = u;
            u = t;
        }  
        v = v - u;
    } while (v != 0);
    return u << shift;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    test{
          ll n;
          cin>>n;
          clr;
          string b;
          cin>>b;
          string res;
          string ans;
          ans.pb('1');
          int x=(b[0]-'0')+1;
          res.pb(char(x));
          for(size_t i=1;i<b.size();i++)
          {
              x=b[i]-'0';
              if(char(x+1)==res.back())
              {
                     x=x+0;
                     ans.pb('0');
                     res.pb(char(x));
                     
              }
              else
              {
                  x=x+1;
                  ans.pb('1');
                  res.pb(char(x));
              }
          }
          cout<<ans<<"\n";
    }
     
    

	return 0;
}
