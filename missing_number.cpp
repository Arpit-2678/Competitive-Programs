#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int x;
	    int sum=0;
	    for(int i=1;i<n;i++)
	    {
	        cin>>x;
	        sum+=x;
	    }
	    int msum=(n*(n+1)/2);
	   cout<<msum-sum<<"\n";
	}
}
