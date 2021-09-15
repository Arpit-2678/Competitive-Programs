//  LINK=https://www.codechef.com/START11B/problems/POSSPEW

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

//  for checking whether the no is perfect square or not...
bool isPerfectSquare(long double x)
{
    if (x >= 0) {
 
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
     int t;
     cin>>t;
    test{
         ll n,k;
         cin>>n>>k;
         ll sum=0;
         
         std::vector<ll>arr(n,0);
         int zero_cnt=0;
         ll temp=0;
         for(int i=0;i<n;i++)
         {
              cin>>arr[i];
              if(arr[i]==0)
              {
                  zero_cnt++;
              }
              temp+=arr[i];
         }
         if(zero_cnt==n)
         {
             cout<<0<<endl;
         }
         else if(zero_cnt==0)
         {   
            cout<<(temp + n*2*1LL*k)<<endl;
         }
         else
         {    ll sum=0;
             int flag=0;
             ll temp=n;
               while(flag==0 and k>0)
               {   int zero=0;
                   
                 for(int i=0;i<temp;i++)
                {
                   if(i==0 and arr[0]>0)
                   {  
                        if(arr[i+1]==0)
                        {
                             arr[i+1]+=1;
                             i++;
                        }
                        else
                          arr[i+1]+=1;
                        
                      if(arr[n-1]==0)
                      {
                           temp--;
                             arr[n-1]+=1;
                      }
                      else
                       arr[n-1]+=1;
                   }
                   else if(i==n-1 and arr[n-1]>0)
                    {   
                         arr[n-2]+=1;
                         
                        
                    
                         arr[0]+=1;
                    }
                    else
                    {    if(arr[i]>0)
                         {
                        arr[i-1]+=1;
                        
                    if(arr[i+1]==0)
                    {
                        arr[i+1]+=1;
                        i++;
                    }
                     else
                        arr[i+1]+=1;
                    
                         }
                         }
                    
                    if(arr[i]==0)
                        zero++;
                 }
                 temp=n;
                 
                 if(zero==0)
                 {
                     flag++;
                 }
                 k--;
                 
               }
               
               sum=accumulate(arr.begin(),arr.end(),0);
            
            cout<<(sum + n*1LL*2*k)<<endl;
                
         }
        
           
     }
     
	return 0;
}
