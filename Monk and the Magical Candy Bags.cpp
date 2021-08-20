// LINK=https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/


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
	 while(t--)
	 {
		  int n,k;
		  cin>>n>>k;
		  priority_queue<ll>pq;
		  ll x;
		  while(n--)
		  {    cin>>x;
			  pq.push(x);
		  }
		  ll sum=0;
		  while(k--)
		  {
             sum+=pq.top();
			  pq.push(pq.top()/2);
			  pq.pop();
		  }
		  cout<<sum<<endl;

	 }

	return 0;

}
