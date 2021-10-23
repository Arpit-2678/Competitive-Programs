//  LINK=https://codeforces.com/contest/1027/problem/A


#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<bits/stdc++.h>
#define int long long int
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

typedef tree<int, null_type, less<int>, rb_tree_tag,
			tree_order_statistics_node_update>
	         PBDS;
const int inf = 1e9+7;

//   for calculating a to power b...
int binpow(int a, int b)
{
    int res = 1;
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
int  gcd(int u, int v)
{
    int shift;
    if (u == 0) return v;
    if (v == 0) return u;
    shift = __builtin_ctz(u | v);
    u >>= __builtin_ctz(u);
    do {
        v >>= __builtin_ctz(v);
        if (u > v) {
          int t = v;
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
 bool checkPowerOfTwo(unsigned int num)
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
int nCr(int n,int k)
{
    int ans=1;
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
    std::vector<char>pre;
    for(char ch='a';ch<'z';ch++)
    pre.pb(ch);
    
   
    test{
      int n;
      cin>>n;
      string str;
      cin>>str;
      int start=0,end=n-1;
      
      bool flag=true;
      for(;start<n/2;start++,end--)
      {
          int x=str.at(start)-'a';
          int y=str.at(end)-'a';
          if(str.at(start)!=str.at(end))
          {
              if(abs(x-y)<2)
              {
                  flag=false;
                  break;
              }
              else if((str.at(start)=='a' and str.at(end)=='z')  or (str.at(start)=='z' and str.at(end)=='a'))
              {
                 flag=false;
                 break;
              }
              else if(str.at(start)=='a' and (str.at(end)!='c' and str.at(end)!='b'))
              {
                  flag=false;
                  break;
              }
              else if(str.at(start)=='z' and (str.at(end)!='y' and str.at(end)!='x'))
              {
                  flag=false;
                  break;
              }
              else if(pre[x+1]!=pre[y+1] and pre[x-1]!=pre[y+1] and pre[x-1]!=pre[y-1] and pre[x+1]!=pre[y-1])
              {
                  flag=false;
                  break;
              }
          }
      }
      if(flag)
      cout<<"YES\n";
      else
      cout<<"NO\n";
    }
   
   
	return 0;
}
