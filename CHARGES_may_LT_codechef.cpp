// LINK=https://www.codechef.com/LTIME96B/problems/CHARGES


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
        int n,k;
        cin>>n>>k;
        string chef;
cin>>chef;
int Array[k]{0};
for(int i=0;i<k;i++)
    cin>>Array[i];
    
    int charge=0;
    for(int i=0;i<n-1;i++)
    {    if(chef.at(i)==chef.at(i+1))
             {charge+=2;}
             else
             charge++;
        
    }
  
   for(int i=0;i<k;i++)
    {   if(n==1)
          {
              cout<<"0"<<"\n";
          }
          else
          {
        
        int j=Array[i];
            j--;
        if(j==0)
        {     if(chef.at(1)==chef.at(0))
               {
                     charge-=2;
                     charge+=1;
               }
               else
               {   charge-=1;
                    charge+=2;
                   
               }
            
        }
        else if(j==n-1)
        {     if(chef.at(n-1)==chef.at(n-2))
                 {
                       charge-=2;
                    charge+=1;
                 }
                 else
                 {
                     charge-=1;
                     charge+=2;
                 }
            
        }
        else
        {      if(chef.at(j)==chef.at(j+1) and chef.at(j)==chef.at(j-1))
                  {
                        charge-=2;
                        charge-=2;
                        charge+=2;
                  }
                  else if(chef.at(j)!=chef.at(j+1) and chef.at(j)!=chef.at(j-1))
                     {
                          charge-=1;
                          charge-=1;
                          charge+=2;
                          charge+=2;
                          
                     }
        }
        cout<<charge<<"\n";
        
        if(chef.at(j)=='0')
            {
                  chef.at(j)='1';
            }
            else
            {
                chef.at(j)='0';
            }
          }    
            
        
        
        
    }
   
    

        
    }
     
    

	return 0;
}
