// LINK=https://leetcode.com/problems/coin-change/




class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {

       vector<int>dp(amount+1, amount+5);
        dp[0]=0;
       
        for(int i=1;i<=amount;i++)
        {
            
            for(auto it:coins)
            {
                if(it<=i)
                {
                  dp[i]=min(dp[i],1+dp[i-it]);
                }
              
            }
            
           
        }
        return dp[amount]>amount?-1:dp[amount];
        
    }
};
