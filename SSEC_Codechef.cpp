// LINK=https://www.codechef.com/SCC82021/problems/SSEC0131



#include<bits/stdc++.h>
#define ll long long int
#define test while(t--)
#define pb push_back
#define ub upper_bound
#define lb lower_bound
#define mp make_pair
#define xxx exit(0)
#define ain(n,arr) for(int i=0;i<n;i++){ cin>>arr[i];}     
#define fs first
#define sec second
#define op(container) for(auto it: container) 
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
    int n,k;
    cin>>n>>k;
    int arr[n]{0};
    ain(n,arr)
    int i=0,j=0,cnt=0;
    int max_cnt=0;
    unordered_map<int,int>umap;
    while(j<n)
    {
         umap[arr[j]]++;
         if(j-i+1==k)
         {
              cnt=umap.size(); 
              max_cnt=max(cnt,max_cnt);
              umap[arr[i]]--;
              if(umap[arr[i]]==0)
              {
                  umap.erase(arr[i]);
              }
              i++;
              j++;
             }
             else if(j-i+1<k)
               j++;
             
               
    }
    cout<<max_cnt<<"\n";
    
    

   

    

	return 0;
}
