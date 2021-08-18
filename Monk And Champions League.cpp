//LINK=https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-champions-league/

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
    int m,n;
	cin>>m>>n;

	priority_queue<int>pq;
	int x;
	while(m--)
	{  cin>>x;
	   pq.push(x);

	}
	int sum=0;
	while(n--)
	{
		sum+=pq.top();
		int x=pq.top()-1;
		pq.pop();
		pq.push(x);
	}
	cout<<sum<<endl;

	return 0;

}
