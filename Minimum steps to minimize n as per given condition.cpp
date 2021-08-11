// LINK=https://practice.geeksforgeeks.org/problems/minimum-steps-to-minimize-n-as-per-given-condition0618/1#



#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int minSteps(int N) 
	{ 
	    int dp[N+1]{0};
	    dp[1]=0;
	    int x=INT_MAX,y=INT_MAX,z=INT_MAX;
	    for(int i=2;i<=N;i++)
	    {
	        x=dp[i-1];
	        
	        if(!(i&1))
	        y=dp[i/2];
	        else
	        y=INT_MAX;
	        
	        if(i%3==0)
	        z=dp[i/3];
	        else 
	        z=INT_MAX;
	        
	        dp[i]=min(min(x,y),z)+1;
	    }
	    return dp[N];
	} 
};


// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

       

	    Solution ob;
	    cout << ob.minSteps(n) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends
