// LINK=https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/



class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
         int cnt=0;
       if(grid[0][0]<0)
       {
            cnt=grid.size()*grid[0].size();
       }
       else
       {
              int i=0,j=grid[0].size()-1;
       for(;j>=0 and i<grid.size();)
       {
          if(grid[i][j]<0)
          {
              cnt+=grid.size()-i;
              j--;
          }
           else if(grid[i][j]>=0)
           {
               i++;
           }
       
       }
       }
       return cnt;
        
        
    }
};
