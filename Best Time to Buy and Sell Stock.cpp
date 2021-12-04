// LINK=https://leetcode.com/problems/best-time-to-buy-and-sell-stock/


class Solution {
public:
    int maxProfit(vector<int>& prices) {
       
        int mini=prices[0];
        int n=prices.size();
        int maxi=0;
        for(int i=1;i<n;i++){
            maxi=max(maxi,prices[i]-mini);
            mini=min(mini,prices[i]);
        }
        return maxi;
    }
};
