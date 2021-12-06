//  LINK=https://leetcode.com/problems/house-robber/


class Solution {
public:
    int rob(vector<int>& nums) {
       vector<int>dp(nums.size()+1,0);
        
        for(int i=0;i<nums.size();i++){
            dp[i]=nums[i];
            for(int j=i-2;j>=0;j--){
                if(dp[j]+nums[i]>dp[i])
                dp[i]=max(dp[j]+nums[i],dp[j]);   
            }
        }
        return *max_element(dp.begin(),dp.end());
    }
};
