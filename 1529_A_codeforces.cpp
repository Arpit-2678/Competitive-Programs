// LINK=https://codeforces.com/problemset/problem/1529/A


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
    int t;
    cin>>t;
    test{
        int n;
        cin>>n;
        std::vector<int>v,v1;
        int y;
        for(int i=0;i<n;i++)
        {
            cin>>y;
            v.pb(y);
        }
        int sum=accumulate(v.begin(),v.end(),0);
        int avg=sum/n;
        sum=0;
        int flag=0;
        int x=n,cnt=0;
        A:
          // int x=v1.size();
        for(int i=0;i<x;i++)
        {
            if(v[i]<=avg)
            { flag++;
             sum+=v[i]; 
             
             v1.pb(v[i]);
            }
            else
            cnt++;
        }
        v.clear();
        x=v1.size();
        v=v1;
        if(flag==0)
        cout<<"0\n";
        else
        {
            avg=sum/v1.size();
            if(avg<(*(max_element(v1.begin(),v1.end()))))
            {
                 v1.clear();
                 flag=0;
                 sum=0;
                 goto A;
            }
            else
            cout<<cnt<<"\n";
            
        }
        
        
        
    }
     
    

	return 0;
}
