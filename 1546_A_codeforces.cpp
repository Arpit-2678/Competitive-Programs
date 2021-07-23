//  LINK=https://codeforces.com/contest/1546/problem/A



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
#define yes cout<<"Yes\n";
#define no cout<<"No\n";
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
 bool check(unsigned ll num)
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



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    test{
        int n;
        cin>>n;
        int arr[n]{0};
        int brr[n]{0};
        int sum_a=0,sum_b=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum_a+=arr[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>brr[i];
            sum_b+=brr[i];
        }
        if(sum_a!=sum_b)
        {
            cout<<-1<<"\n";
        }
        else
        {
            int cnt=0;
            int k=0;
            int i=-1,j=0;
            std::vector<pair<int,int>>vp ;
            for(int k=0;k<n;)
            {
                if(arr[k]>brr[k])
                {
                    i=k;
                    arr[i]-=1;
                    for( j=i+1;j<n;j++)
                    {
                        if(arr[j]<brr[j])
                           {
                               arr[j]+=1;
                               break;
                           }
                    }
                    vp.push_back({i+1,j+1});
                    k=0;
                    i=0;
                    j=0;
                    
                }
                else if(arr[k]<brr[k])
                {
                    j=k;
                    arr[j]+=1;
                     for( i=j+1;i<n;i++)
                    {
                        if(arr[i]>brr[i])
                           {
                               arr[i]-=1;
                               break;
                           }
                    }
                    vp.push_back({i+1,j+1});
                    k=0;
                    i=0;
                    j=0;
                    
                }
                else
                k++;
            }
            cout<<vp.size()<<"\n";
            for(auto it:vp)
            cout<<it.first<<" "<<it.second<<"\n";
            cout<<"\n";
        }
    
    }
    return 0;
}