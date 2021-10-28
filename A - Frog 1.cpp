//  LINK=https://atcoder.jp/contests/dp/tasks/dp_a


#include <bits/stdc++.h>
using namespace std;

//  failing due to recursive overhead 
/* int min_cost(int arr[], int n, int j, int dp[])
 {
     if(j>=n)
     return 0;
     
     if(dp[j]!=0)
     return dp[j];
     
     int op1=abs(arr[j]-arr[j+1]) + min_cost(arr,n,j+1,dp);
     int op2=abs(arr[j]-arr[j+2]) + min_cost(arr,n,j+2,dp);
     
     return dp[j]=min(op1,op2);
 }   */
 
 
 int min_cost(int arr[], int n)
 {
     int dp[n]{0};
     dp[0]=0;
     
     for(int i=1;i<=n;i++)
     {
         int op1= abs(arr[i]-arr[i-1]) + dp[i-1];
         int op2= (i==1)? 1000000000 : abs(arr[i]-arr[i-2]) + dp[i-2];
         
         dp[i]=min(op1,op2);
    }
    return dp[n];
 }


int main() {
   int n;
   cin>>n;
   int arr[n]{0};
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   cout<<min_cost(arr,n-1);
   
   
}
