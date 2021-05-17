// LINK=https://www.codechef.com/MAY21C/problems/ISS

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
 // for calculating gcd.. 
// ll gcd(ll a,ll b)
// {
//     if (b==0) return a;
//     return gcd(b,a%b);
// }
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

bool is_prime(ll num)
{      if(num==1)
      return false;
      if(num==2 || num==3)
	      return true;
		if(num%2==0 || num%3==0)
		     return false;
	 for(int i=5;i*i<=num;i=i+6)
	   {      if(num%i==0 || num%(i+2)==0)
	              return false;
		   }
		return true;       
}
 ll pre=4e6+5;
  std::vector<ll>v1(pre,0),v2(pre,0) ;
 void pre_compute()
 {
      for(size_t i=0;i<v1.size();i++)
    {
        v1.at(i)=i;
        v2.at(i)=0;
    }
    for(size_t j=2;j<v1.size();j++)
    {
        if(v1.at(j)==j)
        {
            v1.at(j)=j-1;
            for(size_t k=2*j;k<v1.size();k+=j)
            {
                v1.at(k)=(v1[k]/j)*(j-1);
            }
        }
    }
    for(size_t j=1;j<v1.size();j++)
    {
        v2[j]+=j-1;
        for(size_t k=2*j;k<v1.size();k+=j)
        {
            v2[k]+= j *((1+v1[k/j])/2);
        }
    }
     
 }

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
   
     pre_compute();
    ll t;
    cin>>t;
    test{
        ll k;
        cin>>k;
       
        cout<<v2.at(4 * k +1)<<"\n";
        
    }
     
    

	return 0;
}
