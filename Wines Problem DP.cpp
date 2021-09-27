 /* Problem Statement-: Imagine you have a collection of N wines placed next to each other on a shelf. For simplicity, let's number the wines from left to right as they are standing on the shelf with integers from 1 to N, respectively. The price of the ith wine is pi. (prices of different wines can be different).

Because the wines get better every year, supposing today is the year 1, on year y the price of the ith wine will be y*pi, i.e. y-times the value that current year.

You want to sell all the wines you have, but you want to sell exactly one wine per year, starting on this year. One more constraint - on each year you are allowed to sell only either the leftmost or the rightmost wine on the shelf and you are not allowed to reorder the wines on the shelf (i.e. they must stay in the same order as they are in the beginning).

You want to find out, what is the maximum profit you can get, if you sell the wines in optimal order?   */


//  It's a psuedo code for i/p and test cases you can try it yourself 

#include<bits/stdc++.h>
using namespace std;

// we need a 2D dp because two variables are changing there states....

int profit(int i,int j,int cy,int *arr,int dp[][100])
{
  if(i>j)
  return 0;
  if(dp[i][j]!=0)
  return dp[i][j];

  int x=arr[i]*cy+profit(i+1,j,cy+1,arr,dp);
  int y=arr[j]*cy+profit(i,j-1,cy+1,arr,dp);

  return dp[i][j]=max(x,y);
}
int main()
{
  int arr[4]={1,4,2,3};
  int dp[100][100]{0};
  cout<<profit(0,3,1,arr,dp);
}
