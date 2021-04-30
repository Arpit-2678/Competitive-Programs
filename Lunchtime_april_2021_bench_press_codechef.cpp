// LINK=https://www.codechef.com/LTIME95B/problems/BENCHP


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
   test
   {
       ll n,weight,rod;
        cin>>n>>weight>>rod;
        unordered_map<ll,ll>ump;
        ll ele;
        for(ll i=1;i<=n;i++)
        {
            cin>>ele;
            ump[ele]++;
        }
        if(rod>=weight)
        {
            cout<<"YES"<<endl;
        }
        else
        {    
   
        ll  add=0,flag=0;
        add+=rod;
          for(auto itr:ump)
          {
              if(itr.second>1)
              {
                    if(itr.second%2==0)
                    {
                        add+=itr.second*itr.first;
                     
                        if(add>=weight)
                        {
                            cout<<"YES"<<endl;
                            flag++;
                            break;
                        }
                    }
                    else
                    {   ll u=itr.second/2;
                         add+=u*2*itr.first;
                         
                         if(add>=weight)
                         {
                             cout<<"YES"<<endl;
                            flag++;
                            break;
                         }
                       
                    }
              }
          }
          if(flag==0)
          {
              cout<<"NO"<<endl;
          }
           
           
           
        }
   }
    
    
  

   

    

	return 0;
}
