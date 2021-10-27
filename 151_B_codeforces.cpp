// LINK=https://codeforces.com/contest/151/problem/B


#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, nn, i, o;
	cin>>n;
	int o1[n]={0}, o2[n]={0}, o3[n]={0};
	char c;
	string b[n], a;
	for(o=0; o<n; o++)
	{
		cin>>nn>>b[o];
		while(nn--)
		{
			cin>>a;
			for(c=a[0],i=1; i<8&&(a[i]=='-'||a[i]==c); i++);
			if(i==8)
				o1[o]++;
			else
			{
				if(a[0]>a[1]&&a[1]>a[3]&&a[3]>a[4]&&a[4]>a[6]&&a[6]>a[7])
					o2[o]++;
				else
					o3[o]++;
			}
		}
	}
	for(o=-1,i=0; i<n; i++)
		if(o1[i]>o)
			o=o1[i], nn=i;
		cout<<"If you want to call a taxi, you should call: "<<b[nn];
	for(o1[nn]=-1,i=0; i<n; i++)
		if(o1[i]==o)
		cout<<", "<<b[i];
	for(o=-1,i=0; i<n; i++)
		if(o2[i]>o)
			o=o2[i], nn=i;
	cout<<'.'<<"\n"<<"If you want to order a pizza, you should call: "<<b[nn];
	for(o2[nn]=-1,i=0; i<n; i++)
		if(o2[i]==o)
		cout<<", "<<b[i];
	for(o=-1,i=0; i<n; i++)
		if(o3[i]>o)
			o=o3[i], nn=i;
	cout<<'.'<<"\n"<<"If you want to go to a cafe with a wonderful girl, you should call: "<<b[nn];
	for(o3[nn]=-1,i=0; i<n; i++)
		if(o3[i]==o)
		cout<<", "<<b[i];
	cout<<'.';
        return 0;
}
