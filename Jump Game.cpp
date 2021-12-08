//  LINK=https://leetcode.com/problems/jump-game/


class Solution {
public:
    
     
     bool ways(vector<int>&arr, int n,int i,vector<bool>&dp){
         
    
        if(i>=n-1)
            return dp[i]=true;
          
         if(dp[i]==false)
             return false;
        for(int j=1;j<=arr[i];j++)
        {
            if(ways(arr,n,i+j,dp))
                return dp[i]=true;
        }
        return dp[i]=false;
    }
    bool canJump(vector<int>& nums) {
        int n=nums.size();
          vector<bool>dp(nums.size()+5, true);
        bool res=ways(nums,n,0,dp);
        return res;
    }
};






















