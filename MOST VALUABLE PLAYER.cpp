//  LINK=https://www.codechef.com/CPCD2021/problems/MVP


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
    std::vector<pair<int,string>>v;
    test{
        string str,str2;
        cin>>str;
        clr;
        getline(cin,str2);
        str2.pb(' ');
        string temp;
        unordered_map<string,int>ump;
        for(int i=0;i<str2.size();i++)
        {
          
            if(str2.at(i)==' ')
            {
                ump[temp]++;
                temp.clear();
            }
            else
              temp.pb(str2.at(i));
        }
        int points=0;
        for(auto it:ump)
        {
            if(it.first=="LOOT")
            points+=(10*it.second);
            else if(it.first=="KILL")
            points+=(50*it.second);
            else if(it.first=="REVIVE")
            points+=(100*it.second);
            else if(it.first=="ASSIST")
            points+=(30*it.second);
        }
         v.pb({points,str});
    }
     sort(v.rbegin(), v.rend());
     cout<<v[0].second<<'\n';
    
	return 0;
}
