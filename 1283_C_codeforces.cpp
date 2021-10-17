// LINK=https://codeforces.com/contest/1283/problem/C


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

typedef tree<pair<int,int>, null_type, less<pair<int,int>>, rb_tree_tag,
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
   set<int>st;
       
       int n;
       cin>>n;
       for(int i=1;i<=n;i++)
       {
            st.insert(i);
       }
       int arr[n]{0},brr[n]{0};
       vector<int>v;
       for(int i=0;i<n;i++)
       {
             cin>>arr[i];
             brr[i]=arr[i];
             if(st.find(arr[i])!=st.end())
               {
                   st.erase(arr[i]);
               }
               if(arr[i]==0)
                 v.push_back(i+1);
       }
       set<int>final=st;
       vector<int>res=v;
       sort(v.begin(),v.end(),greater<int>());
   
       for(int i=0;i<v.size();i++)
       {
       
           auto it=st.upper_bound(v[i]);
              if(it==st.end())
               {
               
                arr[v[i]-1]=(*st.begin());
                 st.erase(*st.begin());
               }
               else
               {
                      arr[v[i]-1]=(*it);
                      st.erase(*it);
               }
               
       }
        for(int i=0;i<res.size();i++)
       {
       
           auto it=final.upper_bound(res[i]);
              if(it==final.end())
               {
               
                brr[res[i]-1]=(*final.begin());
                 final.erase(*final.begin());
               }
               else
               {
                      brr[res[i]-1]=(*it);
                      final.erase(*it);
               }
               
       }
    //   for(auto it:arr)
    //   {
       
    //       cout<<it<<" ";
    //   }
    //   cout<<endl;
    //     for(auto it:brr)
    //   {
       
    //       cout<<it<<" ";
    //   }
    //   cout<<endl;
       
       int flag=0;
       for(int i=0;i<n;i++)
       {
              if(arr[i]==i+1)
               {
                   flag++;
                   break;
               }
       }
        if(flag==0)
       {
       for(int i=0;i<n;i++)
       {
             cout<<arr[i]<<" ";
       }
           
       }
      
       else
       {
           for(int i=0;i<n;i++)
       {
             cout<<brr[i]<<" ";
       }
       }
       
       
       
       
       
	return 0;
}
