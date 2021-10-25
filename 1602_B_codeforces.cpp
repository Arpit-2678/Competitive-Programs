// LINK=https://codeforces.com/contest/1602/problem/B


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

  void tra(unordered_map<int,int>&ump,vector<int>v)
  {
      for(int i=0;i<v.size();i++)
      ump[v[i]]++;
  }
  
 vector<int> dist(unordered_map<int,int>&ump,vector<int>v,set<vector<int>>&st)
  {
      vector<int>temp;
      for(int i=0;i<v.size();i++)
            {
                temp.pb(ump[v[i]]);
            }
           
            
            return temp;
  }


signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
     int t;
     cin>>t;
    test{
            int n;
            cin>>n;
            vector<int>inp(n,0);
            unordered_map<int,int>ump;
            for(int i=0;i<n;i++)
            {
                cin>>inp[i];
                ump[inp[i]]++;
            }
            std::vector<int>v;
            vector<vector<int>>dp;
            
            set<vector<int>>st;
            int len=st.size();
            dp.pb(inp);
            st.insert(inp);
            for(int i=0;i<n;i++)
            {
                v.pb(ump[inp[i]]);
            }
            
            st.insert(v);
            while(true)
            {
                
                dp.pb(v);
                ump.clear();
                tra(ump,v);
                v=dist(ump,v,st);
                if(st.find(v)!=st.end())
                break;
                else
                st.insert(v);
                
            }
            
           int q;
           cin>>q;
           while(q--)
           {
               int x,y;
               cin>>x>>y;
               if(y<dp.size())
               cout<<dp[y][x-1]<<'\n';
               else
               cout<<dp[dp.size()-1][x-1]<<'\n';
           }
           
     }
	return 0;
}
