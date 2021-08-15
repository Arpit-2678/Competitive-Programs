// LINK=https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/haunted/


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
	ll n,m;
	cin>>n>>m;
	unordered_map<ll,ll>ump;
	priority_queue<pair<ll,ll>>pq;
	ll x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		ump[x]++;
		pq.push({ump[x],x});
		cout<<pq.top().second<<" "<<pq.top().first<<"\n";

	}
	


	return 0;

}
