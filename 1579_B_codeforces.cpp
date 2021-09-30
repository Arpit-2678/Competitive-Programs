// LINK=https://codeforces.com/contest/1579/problem/B


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

void solve(vector<int>&v,int start,int end)
{
    rotate(v.begin()+start, v.begin()+start+1,v.end()-end);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    test{
        int n;
        cin>>n;
        vector<int>v(n,0);
        ain(v)
        vector<vector<int>>ans;
        vector<int>subans;
        int k=0;
        if(is_sorted(v.begin(),v.end()))
        {
            cout<<0<<"\n";
        }
        else
        {
        while(!(is_sorted(v.begin(),v.end())))
        {
            int pos=-1;
            int maxi=INT_MIN;
            for(int i=0;i<n-k;i++)
            {
                 if(v[i]>maxi)
                 {
                    maxi=v[i];
                    pos=i;
                    
                 }
            }
            
            if(pos!=(n-k-1))
            {
            subans.pb(pos+1);
            subans.pb(n-k);
            subans.pb(1);
            ans.pb(subans);
            }
            subans.clear();
            solve(v,pos,k);
             k++;
            
        }
        cout<<ans.size()<<"\n";
        for(auto it:ans)
        {
            for(auto ip:it)
            cout<<ip<<" ";
            
            cout<<"\n";
        }
        }
    }
    
     
     
	return 0;
}
