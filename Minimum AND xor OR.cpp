// LINK=https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/minimum-and-xor-or-6a05bbd4/


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
		int n;
		cin>>n;
		ll arr[n]{0};
		ain(arr)
		sort(arr,arr+n);
		ll ans=inf;
		
		for(ll i=0;i<n-1;i++)
		{
			ans=min(ans,((arr[i]&arr[i+1])^((arr[i]|arr[i+1]))));
			
		}
		cout<<ans<<"\n";
	}

	return 0;

}
