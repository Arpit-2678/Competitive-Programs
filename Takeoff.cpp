// LINK=https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/no-sharing-capillary-82ed3fe2/


#include<bits/stdc++.h>
#define ll long long int
#define test while(t--)
#define pb push_back
#define ain(arr) for (auto &it : arr) cin >> it;
using namespace std;
const int inf = 1e9+7;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	test{
		ll n,p,q,r;
		cin>>n>>p>>q>>r;
		unordered_map<ll,int>ump;
		int flag=0;
		ll i,j,k;
		i=j=k=0;
		for(i=p,j=q,k=r;(i<=n or j<=n or k<=n);i+=p,j+=q,k+=r)
		{
			  ump[i]++; 
			  ump[j]++;
			  ump[k]++;
		}
		ll ans=0;
		for(auto it:ump)
		{
	
			if(it.second==1 and it.first<=n)
			ans++;
		}
		cout<<ans<<"\n";


	}


	return 0;

}
