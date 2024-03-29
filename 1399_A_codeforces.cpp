// LINK=https://codeforces.com/problemset/problem/1399/A


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


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    test{
        int n;
        cin>>n;
        unordered_set<int>ust;
        
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int x;
        for(int i=1;i<=n;i++)
        {
           cin>>x;
           ust.insert(x);
           if(x<mini)
           {
               mini=x;
           }
           if(x>maxi)
           maxi=x;
            
        }
        int flag=0;
       for(int i=mini+1;i<maxi;i++)
       {
           if(ust.find(i)==ust.end())
           {
               flag++;
               break;
           }
       }
       if(flag)
       cout<<"NO\n";
       else
       cout<<"YES\n";
    }
    
    
    
    
  

   

    

	return 0;
}
