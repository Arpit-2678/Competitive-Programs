//  LINK=https://leetcode.com/problems/jump-game-ii/


class Solution {
public:
    int ways(vector<int>&arr, int n,vector<int>&dp, int i)
{

	if (i == n - 1 )
		return 0;
	if (i >= n)
		return INT_MAX;

	if (dp[i] != 0)
		return dp[i];
	int maxi = INT_MAX;

	for (int j = 1; j <= arr[i]; j++)
	{
        int subproblem=ways(arr, n, dp, i + j);
        if(subproblem!=INT_MAX)
		maxi = min(subproblem+ 1, maxi);
	}
	dp[i] = maxi;
	return maxi;
}
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+5,0);
        return ways(nums,n,dp,0);
    }
};
