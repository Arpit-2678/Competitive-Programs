//  LINK=https://leetcode.com/problems/set-matrix-zeroes/


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>>vp;
       
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                    vp.push_back({i,j});
            }
        }
        for(auto it:vp)
        {
            int row=it.first;
            int col=it.second;
            // cout<<row<<" "<<col<<"\n";
            
            for(int i=0;i<matrix[row].size();i++)
                matrix[row][i]=0;
            
            for(int i=0;i<matrix.size();i++)
                matrix[i][col]=0;
            
        }
    }
};
