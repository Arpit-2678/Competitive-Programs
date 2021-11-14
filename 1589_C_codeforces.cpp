//  LINK=https://codeforces.com/contest/1589/problem/C

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<bits/stdc++.h>
#define ll long long int
#define test while(t--)
#define pb push_back
#define xxx exit(0)
#define ain(arr) for (auto &it : arr) cin >> it;     
#define op(container) for(auto it: container)  cout<<it<<" ";
#define clr  cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define sortv(arr) sort(arr.begin(),arr.end())
#define sorta(arr,n) sort(arr,arr+n)
#define helper(arr) arr.begin(),arr.end()
using namespace std;
using namespace __gnu_pbds;

typedef tree<ll, null_type, less<ll>, rb_tree_tag,
			tree_order_statistics_node_update>
	         PBDS;
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
// for checking whether the number is power of two or not...
 bool checkPowerOfTwo(unsigned ll num)
   {
       if(!(num&(num-1)))
		 return true;
		 else
		 return false;	 
   }
   
// for calculating the no of set bits in a number   
inline int setBitCount(int i) {
    i = i - ((i >> 1) & 0x55555555);
    i = (i & 0x33333333) + ((i >> 2) & 0x33333333);
    i = (i + (i >> 4)) & 0x0f0f0f0f;
    i = i + (i >> 8);
    i = i + (i >> 16);
    return i & 0x3f;
}

//  calculating ncr value... 
ll nCr(int n,int k)
{
    ll ans=1;
    k=k>n-k?n-k:k;
    int j=1;
    for(;j<=k;j++,n--)
    {
        if(n%j==0)
        {
            ans*=n/j;
        }else
        if(ans%j==0)
        {
            ans=ans/j*n;
        }else
        {
            ans=(ans*n)/j;
        }
    }
    return ans;
}

//  for checking whether the no is perfect square or not...
bool isPerfectSquare(long double x)
{
    if (x >= 0) {
 
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}



signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    test{
      int n;
      cin>>n;
      std::vector<ll>v1(n,0),v2(n,0);
      ain(v1)
      ain(v2)
      
      sortv(v1);
      sortv(v2);
      
      unordered_map<int,ll>ump1,ump2;
      for(int i=0;i<n;i++)
      {
          ump1[i]=v1[i];
          ump2[i]=v2[i];
      }
      
      
      if(v1==v2)
      cout<<"YES\n";
      
      
      else
      {
        int flag=0;
          vector<pair<ll,int>>vp;
          
          for(int i=0;i<v2.size();i++)
          {
              if(v1[i]!=v2[i])
                vp.pb({v1[i],i});
              else
              {
                  ump1.erase(i);
                  ump2.erase(i);
              }
          }
          
          unordered_map<ll,int>calc;
          
          for(auto it:ump2)
          {
              calc[it.second]++;
          }
          
          for(auto it:vp)
          {
              ll x=it.first;
               
              if(calc.size()==0)
              {
                  cout<<"NO\n";
                  flag++;
                  break;
              }
               
               if(calc.find(x+1)==calc.end())
               {
                   cout<<"NO\n";
                   flag++;
                   break;
               }
               else
               {
                   calc[x+1]--;
                   if(calc[x+1]==0)
                   calc.erase(x+1);
               }
              
              
          }
          if(flag==0)
          cout<<"YES\n";
          
          
          
          
        }
    }
   
	return 0;
}
