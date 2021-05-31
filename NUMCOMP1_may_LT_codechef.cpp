// LINK=https://www.codechef.com/LTIME96B/problems/NUMCOMP1


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
        bool seive[10000000+5];
    memset(seive,true,sizeof(seive));
    for(int i=2;i*i<=10000000+3;i++)
    {
    	    if(seive[i])
    	    {  for(int j=i*i;j<=10000000+3;j=j+i)
    	          {   seive[j]=false;
				  }
			}
    	
	}
	unordered_map<int,int>solve;
	int flag=0;
	for(int i=2;i<=10000000+1;i++)
	{
	      if(seive[i])
	      {
	           solve[i]=flag;
	            flag++;
	      }
	}
	int t;
	cin>>t;
	test{
	    int number;
	      cin>>number;
	      int ans=0;
	  if(number==2)
	  {
	       cout<<1<<"\n";
	  }
	  else if(number==3)
	  {
	       cout<<"2\n";
	  }
	  else
	  {  int i=0;  
	for( i=(number/2)+1;i<=number;i++)
	  {    if(seive[i])
	         {  
	             break; 
	         }
	  }
	  int j=number;
	  for(;j>=0;j--)
	  {
	        if(seive[j])
	        {
	            break;
	        }
	  }
	  ans=solve[j]-solve[i]+1;
	  cout<<ans+1<<"\n";
	  }
	}
    

	return 0;
}
