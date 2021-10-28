//  LINK=https://atcoder.jp/contests/dp/tasks/dp_b


#include <bits/stdc++.h>
using namespace std;

 
 int min_cost(int arr[], int n, int k)
 {
     int dp[n]{0};
     dp[0]=0;
     
     for(int i=1;i<=n;i++)
     {
        dp[i]=1000000000;
        for(int j=i-1; j>=0 and (i-j)<=k; j--)
        {
            dp[i]= min(dp[i], abs(arr[i]- arr[j])+ dp[j]);
        }
         
        
    }
    return dp[n];
 }


int main() {
   int n,k;
   cin>>n>>k;
   int arr[n]{0};
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   cout<<min_cost(arr,n-1,k);
   
   
}
