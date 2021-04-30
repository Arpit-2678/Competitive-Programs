// LINK=https://www.codechef.com/LTIME95B/problems/CCHEAVEN


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
    int t;
    cin>>t;
    test
   {
     int len;
     cin>>len;
     cin.ignore(numeric_limits<streamsize>::max(), '\n');
     string s;
     cin>>s;
     if(s[0]=='1')
     {
         cout<<"YES"<<endl;
        
     }
     else
     {
 
    int cnt_z=0,cnt_o=0,flag=0;
    for(int i=0;i<len;i++)
    {
          if(s[i]=='1')
          {
              cnt_o++;
              if(cnt_o>=cnt_z)
              {    flag++;
                   cout<<"YES"<<endl;
                  break;
              }
          }
          else
          {
              cnt_z++;
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

