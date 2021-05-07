// TYPE= minimum operations to make all the elements of array -ve given we can subtract any element with a(given) and remaining with b(given)
// i/p= 4 
//      4 5 8 10
//        5 3
// o/p= 3


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
long countPairs(ll arr[], int n)
{
    long count = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
  
           
            if ((arr[j]-arr[i]) == (j-i))
                count++;
        }
    }
    return count;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
     int n;
     cin>>n;
      vector<int>v1;
      int y;
      
      map<int,int>mp;
     for(int i=0;i<n;i++)
     {
         cin>>y;
         v1.pb(y);
          mp[y]++;
         
     }
     int a,b;
     cin>>a>>b;
     int sub=0,diff=0;
     
      diff=a;
     
      sub=b;
     

     int cnt=0;
    
     std::vector<int>v;
  
     while((mp.rbegin()->first)>0)
     {
         cnt++;
         auto ip=mp.end();
         ip--;
          for(auto it=mp.begin();it!=ip;it++)
     {
         
        v.pb((it->first)-sub);
         mp[it->first]--;
        
     }
      if(mp[(mp.rbegin()->first)]>1)
      {
          while(mp[(mp.rbegin()->first)]!=1)
          {
               v.pb((mp.rbegin()->first)-sub);
               mp[(mp.rbegin()->first)]--;
              
          }
      }
     
         v.pb((mp.rbegin()->first)-diff);
             mp[(mp.rbegin()->first)]--;
  
             
      for(int i=0;i<n;i++)
      {
          if(mp.find(v1[i])!=mp.end() and mp[v1[i]]==0)
          {
              mp.erase(v1[i]);
          }
      }
      v1.clear();
      for(auto ix:v)
      {
          v1.pb(ix);
      }
  
      for(auto itr:v)
      {
         
          mp[itr]++;
      }
        v.clear();
             
         
        
     
    
     }
   
     cout<<cnt<<"\n";
    
     
}
