//  LINK=https://practice.geeksforgeeks.org/problems/number-of-unique-paths5339/1#


//Initial template for C++
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution
{
    public:
    int dp[30][30];
    int  gridtraveler(int m,int n)
    {
        if(dp[m][n]!=0)
        {
            return dp[m][n];
        }
        if(m==1 and n==1)
        return 1;
        if(m==0 or n==0)
        return 0;
        
        dp[m][n]=gridtraveler(m-1,n)+gridtraveler(m,n-1);
        return dp[m][n];
    }
    
    int NumberOfPath(int a, int b)
    {
        for(int i=0;i<30;i++)
        {
            for(int j=0;j<30;j++)
            dp[i][j]=0;
        }
        return gridtraveler(a,b);
    }
};


// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking dimensions of the matrix
        int a,b;
        cin>>a>>b;
        Solution ob;
        //calling NumberOfPath() function
        cout << ob.NumberOfPath(a,b) << endl;
    }
}

  // } Driver Code Ends
