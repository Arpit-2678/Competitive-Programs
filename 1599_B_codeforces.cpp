// LINK=https://codeforces.com/contest/1559/problem/B



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

string convert(string str,char temp)
{
     char ch;
     int n=str.size();
       for(int i=0;i<n;i++)
       {    
           if(str.at(i)=='?' and i-1>=0 )
            {    ch=str.at(i-1);
                 if(ch!='?')
                 {
                if(ch=='R')
                   str.at(i)='B';
                 else if(ch=='B')
                  str.at(i)='R';
                 }
            }         
                 else if(str.at(i)=='?' and i+1<n and str.at(i+1)!='?')
                    { ch=str.at(i+1);
                        if(ch=='R')
                     str.at(i)='B';
                   else if(ch=='B')
                    str.at(i)='R';
                        
                    }else if(str.at(i)=='?') {
                        str.at(i)=temp;
                    }
                  
                 
            
       }
       return str;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
 int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       string str;
       cin>>str;
       string ans,ans1;
        
        ans=convert(str,'B');
        ans1=convert(str,'R');
        int cnt=0,cnt1=0;
        for(int i=0;i<n-1;i++)
        {
               if(ans.at(i)==ans.at(i+1))
                  {cnt++;}
                   if(ans1.at(i)==ans1.at(i+1))
                  {cnt1++;}
        }
        cnt1<cnt?cout<<ans1<<"\n" : cout<<ans<<"\n";
       
    }

	
  
	
	return 0;
}
