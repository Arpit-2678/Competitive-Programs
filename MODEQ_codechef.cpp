// LINK=https://www.codechef.com/MAY21C/problems/MODEQ/


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
//using namespace std;
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
//  for converting string to uppercase....
std::string to_upper(std::string a)
{
    for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A';
    return a;
}
//  for converting string to lowercase.... 
std::string to_lower(std::string a)
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

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);std::cout.tie(0);
     ll t;
     std::cin>>t;
     test{
         ll n,m;
        std::cin>>n>>m;
         //ll ans=(n-1);
         if(n<=1000)
         {
         std::vector<ll>vec(n+1,1) ;
             
             ll my_ans=0;
             for(ll i=2;i<=n;i++)
             {
                 ll q=(m%i);
                 my_ans+=vec[q];
                 for(ll j=q;j<=n;j+=i)
                 {
                     vec[j]++;
                 }
             }
             std::cout<<my_ans<<"\n";
         }
         else
         {
              std::vector<ll>vec(n+1,1) ;
             
             ll my_ans=0;
             for(ll i=2;i<=n;i++)
             {
                 ll q=(m%i);
                 my_ans+=vec[q];
                 for(ll j=q;j<=n;j+=i)
                 {
                     vec[j]++;
                 }
             }
             std::cout<<my_ans<<"\n";
         }
         }
     
    

	return 0;
}
