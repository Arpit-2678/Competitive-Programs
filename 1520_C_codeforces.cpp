// LINK=https://codeforces.com/contest/1520/problem/C

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
    test
{
  int n;
  cin>>n;
  if(n==1)
  {
      cout<<n<<endl;
     
  }
  else if(n==2)
  {
      cout<<"-1"<<endl;
     
  }
  else
  {
     
      std::vector<vector<int>>v;
      vector<int>v1;
      ll start=1;
      ll  end=n*n;
      int row=0;
      if(!(n&1))
      {
      for(int i=0;i<n;i++)
      {    v1.clear();
          for(int j=0;j<n;j++)
          {    if(!(j&1))
               {
                   v1.pb(start++);
               }
               else
               {
                   v1.pb(end--);
               }
             
          }
          v.pb(v1);
      }
      }
      else
      {    
          for(int i=0;i<n;i++)
        {    int row=i;
             v1.clear();
          for(int j=0;j<n;j++)
           {   if(!(row&1))
             {
               if(!(j&1))
               {
                    v1.pb(start++);
               }
               else
               {
                  v1.pb(end--);
               }
             }
             else
             { if((j&1))
               {
                    v1.pb(start++);
               }
               else
               {
                    v1.pb(end--);
               }
                 
             }
           }
           v.pb(v1);
        }
      }
      swap(v[n-1][n-1],v[0][0]);
      for(auto it:v)
      {
          for(auto ip:it)
          {
              cout<<ip<<" ";
          }
          cout<<"\n";
      }
  }
   
   
   
}
}
