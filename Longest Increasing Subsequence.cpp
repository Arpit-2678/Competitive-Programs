//  LINK=https://leetcode.com/problems/longest-increasing-subsequence/


class Solution {
public:
    int lengthOfLIS(vector<int>& arr) {
        int n=arr.size();
        vector<int>dp(n,0);
        dp[0]=1;
        
        for(int i=1;i<n;i++)
        {
            int maxi=0;
            for(int j=0;j<=i;j++)
            {
                if(arr[j]<arr[i])
                {
                    maxi=max(dp[j],maxi);
                }
            }
            dp[i]=maxi+1;
        }
        int ans=*max_element(dp.begin(),dp.end());
        return ans;
    }
};
