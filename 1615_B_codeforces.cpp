// LINK=https://codeforces.com/contest/1615/problem/B

#include<bits/stdc++.h>
using namespace std;
int F(int x,int j)
{
	return (x>>j+1<<j)+min(x%(1<<j+1),1<<j);
} 
void solve()
{
	int l,r; 
	cin>>l>>r;
	int z=r;
	for(int j=0;j<18;j++)
	{
		z=min(z,F(r+1,j)-F(l,j));
	}
	cout<<z<<endl;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}
