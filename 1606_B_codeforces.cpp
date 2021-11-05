// LINK=https://codeforces.com/contest/1606/problem/B


#include<bits/stdc++.h>
#define LL long long
using namespace std;
int T;
LL n,k;
LL p[69];

int main()
{
	p[0]=1LL;
	for(int i=1;i<63;i++)
		p[i]=p[i-1]*2ll;
	cin>>T;
	while(T--)
	{
		cin>>n>>k;
		int pos=upper_bound(p+1,p+1+62,k)-p;
		cout<<pos+(n-p[pos])/k+(n-p[pos]>=0&&(n-p[pos])%k!=0)<<endl;
	}
	return 0;
}
