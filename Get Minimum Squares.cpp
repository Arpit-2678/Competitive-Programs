//  LINK=https://practice.geeksforgeeks.org/problems/get-minimum-squares0538/1


//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
	public:
	
	int ways( int n, int*dp) {

	if (sqrt(n) - floor(sqrt(n)) == 0)
		return 1;
	if (n <= 3)
		return n;

	int ans = INT_MAX;
	if (dp[n] != 0)
		return dp[n];

	for (int i = 1; i * i <= n; i++) {

		ans = min(ans, 1 + ways(n - (i * i), dp));

	}
	return dp[n] = ans;
}

	int MinSquares(int n)
	{
	    int dp[n+5] {0};
    	dp[0] = 1;
    	dp[1] = 1;
    	dp[2] = 2;
    	dp[3] = 3;
    	return ways(n, dp);
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.MinSquares(n);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends
