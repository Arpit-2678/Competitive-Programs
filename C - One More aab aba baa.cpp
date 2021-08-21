// LINK=https://atcoder.jp/contests/abc215/tasks/abc215_c

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
int main()
{
   string str;
   ll k;
   cin>>str>>k;
   vector<string>v;
   sort(str.begin(),str.end());
   do{
	   v.pb(str);
   }while (next_permutation(str.begin(), str.end()));

   if(k>v.size())
   cout<<v[v.size()-1]<<"\n";
   else
   cout<<v[k-1]<<"\n";

}
