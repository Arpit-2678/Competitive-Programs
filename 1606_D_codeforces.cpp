//  LINK=https://codeforces.com/contest/1606/problem/D


#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
int T,n,m,mp[1000006],id[500005],ms[4][1000006];
char x[500006];
int main()
{
	scanf("%d",&T);
	bg:
	while(T--)
	{
		scanf("%d%d",&n,&m);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
				scanf("%d",&mp[i*m+j]);
			id[i]=i;
		}
		sort(id,id+n,[](int a,int b){return mp[a*m]<mp[b*m];});
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				ms[0][i*m+j]=max(max(i     ?ms[0][(i-1)*m+j]:0         ,j     ?ms[0][i*m+j-1]:0         ),mp[id[i]*m+j]);
		for(int i=n-1;i>=0;i--)
			for(int j=0;j<m;j++)
				ms[1][i*m+j]=min(min(i!=n-1?ms[1][(i+1)*m+j]:0x3f3f3f3f,j     ?ms[1][i*m+j-1]:0x3f3f3f3f),mp[id[i]*m+j]);
		for(int i=0;i<n;i++)
			for(int j=m-1;j>=0;j--)
				ms[2][i*m+j]=min(min(i     ?ms[2][(i-1)*m+j]:0x3f3f3f3f,j!=m-1?ms[2][i*m+j+1]:0x3f3f3f3f),mp[id[i]*m+j]);
		for(int i=n-1;i>=0;i--)
			for(int j=m-1;j>=0;j--)
				ms[3][i*m+j]=max(max(i!=n-1?ms[3][(i+1)*m+j]:0         ,j!=m-1?ms[3][i*m+j+1]:0         ),mp[id[i]*m+j]);
		for(int i=0;i<n-1;i++)
			for(int j=0;j<m-1;j++)
				if(ms[0][i*m+j]<ms[1][(i+1)*m+j]&&ms[2][i*m+j+1]>ms[3][(i+1)*m+j+1])
				{
					printf("YES\n");
					for(int si=0;si<=i;si++)
						x[id[si]]='B';
					for(int si=i+1;si<n;si++)
						x[id[si]]='R';
					x[n]='\0';
					printf("%s %d\n",x,j+1);
					goto bg;
				}
		printf("NO\n");
	}
	return 0;
}
