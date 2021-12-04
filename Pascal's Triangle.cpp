//  LINK=https://leetcode.com/problems/pascals-triangle/


class Solution {
public:
    vector<vector<int>> generate(int n) {
        int dp[n][n];
        
        for(int i=0;i<n;i++){
            dp[i][0]=1;
            for(int j=1;j<n;j++){
                if(i==j)dp[i][j]=1;
                else
                    dp[i][j]=0;
            }
        }

       if(n==1)
           return {{1}};
        if(n==2)
            return {{1},{1,1}};
        
        vector<vector<int>>v;
        v.push_back({1});
        v.push_back({1,1});
        
        vector<int>inner;
        for(int i=2;i<n;i++){
            inner.push_back(dp[i][0]);
        
        for(int j=1;j<n;j++){
            if(dp[i][j]==1){
               inner.push_back(dp[i][j]);
                break;
            }
            else{
                dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
                 inner.push_back(dp[i][j]);
            }
        }
        v.push_back(inner);
        inner.clear();
        }
        return v;
    }
    
};






















