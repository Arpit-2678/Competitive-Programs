// LINK=https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/notebook-pages-dbad75a5/


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
	const int len=1e6;
    int pre[len];
    memset(pre,0,sizeof(pre));
    for(int i=2 ; i<=len ; i++) {

        for(int j=2 ; j<=(len/i) ; j++) {
             pre[i*j]++ ;
        }
    }
    ll n;
    cin>>n;
    int arr[n];
    ain(arr)
    unordered_map<ll,ll>ump;
    for(auto it:arr)
    {
        ump[pre[it]]++;
    }
    ll pairs=0;
    for(auto it:ump)
    {
        pairs+=((it.second)*1LL*(it.second-1))/2;
    }
    cout<<pairs<<"\n";



	return 0;

}
