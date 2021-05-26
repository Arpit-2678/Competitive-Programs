// LINK=https://leetcode.com/problems/flipping-an-image/submissions/



class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(auto &it:image)
        {
            reverse(it.begin(),it.end());
            transform(it.begin(),it.end(),it.begin(),[](auto x){return !x;});
        }
        return image;
        
        
    }
};
