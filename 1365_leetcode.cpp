// LINK=https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/



class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
         vector<int>v,ans;
        v=nums;
        sort(v.begin(),v.end());
        for(auto it:nums)
        {
            auto ip=lower_bound(v.begin(),v.end(),it);
            ans.push_back(ip-v.begin());
        }
        return ans;
        
    }
};
