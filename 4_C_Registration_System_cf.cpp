// LINK=https://codeforces.com/problemset/problem/4/C

#include<bits/stdc++.h>
#define ll long long int
#define test while(t--)
#define pb push_back
#define ub upper_bound
#define lb lower_bound
#define mp make_pair
#define xxx exit(0)
#define ain(n,arr) for(int i=0;i<n;i++){ cin>>arr[i];}     
#define fs first
#define sec second
#define op(container) for(auto it: container) 
using namespace std;
const int inf = 1e9+7;

//   for calculating a to power b...
ll binpow(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
//  for calculating gcd.. 
ll gcd(ll a,ll b)
{
    if (b==0) return a;
    return gcd(b,a%b);
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


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
  
       int t;
       cin>>t;
        unordered_map<string,int>umap;
       test{
           string str;
           cin>>str;
           if(umap.find(str)!=umap.end())
           {
               cout<<str<<umap[str]<<"\n";
               umap[str]++;
           }
           else
           {
               cout<<"OK"<<"\n";
               umap[str]++;
           }
          
       }

   

    

	return 0;
}
