#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int

using namespace std;
int memo[1000][1000];
int lcs(string a,string b,int m,int n )
{
       int dp[m+1][n+1];
       for(int i=0;i<=m;i++)
       {
           dp[i][0]=0;
       }
       for(int i=0;i<=n;i++)
       {
           dp[0][i]=0;
       }
       for(int i=1;i<=m;i++)
       {
           for(int j=1;j<=n;j++)
           {     if(a[i-1]==b[j-1])
                  {
                      dp[i][j]=dp[i-1][j-1]+1;
                  }
                  else
                  {
                      dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                  }
               
           }
       }
       return dp[m][n];
                 
}  
int main()
{    fastio;
   string a,b;
   cin>>a>>b;
   int m=a.length(),n=b.length();
   //int memo[m+1][n+1]={0};
   memset(memo,-1,sizeof(memo));
   cout<<lcs(a,b,m,n);
   
   
    
   
    
}
