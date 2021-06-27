// LINK=https://www.codechef.com/LTIME97B/problems/UNONE



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
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    test{
         int n;
     cin>>n;
     int val;
     vector<int>v,v1;
     for(int i=1;i<=n;i++)
     {
           cin>>val;
           if(val%2==1)
           {
               v.pb(val);
           }
           else
           v1.pb(val);
     }
   
     
     
     if(v1.size()>0 and v.size()>0)
     {     vector<int>res;    
      sort(v.begin(),v.end());
          sort(v1.begin(),v1.end());
         
        int reserve=v[0];
         v.erase(v.begin());
         for(int i=1;i<n;i++)
         {    
               if((i%2==1 or v1.size()==0) and v.size()>0)
               {
                    res.pb(v[v.size()-1]);
                      v.pop_back();
               }
               else if((i%2==0 or v.size()==0) and v1.size()>0)
               {
                    res.pb(v1[v1.size()-1]);
                      v1.pop_back();
               }
                 
         }
         res.pb(reserve);
          for(int i=0;i<res.size();i++)
         {
             cout<<res[i]<<" ";
         }
         cout<<"\n";
         
     }
     
     else if(v.size()>0 and v1.size()==0)
     { sort(v.begin(),v.end(),greater<int>());
     
   for(int i=0;i<v.size();i++)
         {
             cout<<v[i]<<" ";
         }
         cout<<"\n";
         
     }
     else
     {  
       sort(v1.begin(),v1.end(),greater<int>());
         for(int i=0;i<v1.size();i++)
         {
             cout<<v1[i]<<" ";
         }
         cout<<"\n";
     }
    }
     
    

	return 0;
}
