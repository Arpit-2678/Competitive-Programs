/*  LINK=  https://www.codechef.com/START2B/problems/COLGLF5  */

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
    ll t;
    cin>>t;
    test{
        ll f,c;
        cin>>f>>c;
        unordered_set<ll>ust_f;
        unordered_set<ll>ust_c;
        set<ll>ans;
        ll x;
        ll maxi_c=0,maxi_f=0;
        ll mini_c=INT_MAX,mini_f=INT_MAX;
        for(ll i=1;i<=f;i++)
        { cin>>x;
        ust_f.insert(x);
        ans.insert(x);
        }
        for(ll i=1;i<=c;i++)
        {
            cin>>x;
            ust_c.insert(x);
           ans.insert(x);
        }
        int fcnt=0;
        int ccnt=0;
        auto ip=ans.begin();
        ip++;
        int k=0,y=0;
        
        for(auto it:ans)
        {
            if(ust_f.find(it)!=ust_f.end() and y==0)
            {
               
            }
            else
            {
                if(ust_f.find(it)!=ust_f.end() and ust_c.find(*ip)!=ust_c.end())
                  {
                      k++;
                     
                      
                  }
                   if(ust_f.find(*ip)!=ust_f.end() and ust_c.find(it)!=ust_c.end())
                   {
                       k++;
                   }
                  y++;
            }
            ip++;
        }
        cout<<k+1<<"\n";
        
    }
    return 0;
}
