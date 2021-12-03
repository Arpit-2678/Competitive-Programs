//  LINK=https://leetcode.com/problems/min-cost-climbing-stairs/


class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
       
        int i=cost.size()-2;
         cost.push_back(0);
        
        for(;i>=0;i--){
            int x=min(cost[i]+cost[i+1], cost[i]+cost[i+2]);
            cost[i]=x;
        }
        return min(cost[0],cost[1]);
        
    }
};
