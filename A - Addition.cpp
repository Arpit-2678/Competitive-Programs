// LINK=https://atcoder.jp/contests/agc010/tasks/agc010_a

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
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
     int  n;
     cin>>n;
     int e_freq=0,o_freq=0;
     int x;
     for(int i=0;i<n;i++)
     {
         cin>>x;
         if(x&1)
         o_freq++;
         else
         e_freq++;
     }
     if(o_freq&1)
     cout<<"NO\n";
     else
     cout<<"YES\n";
     
	
  
	
	return 0;
}
