// LINK=https://leetcode.com/problems/two-sum/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>ump;
        for(int i=0;i<nums.size();i++)
        {
            ump[nums[i]]=i;
        }
         vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(ump.find(target-nums[i])!=ump.end() and ump[target-nums[i]]!=i)
            {
                ans.push_back(i);
                ans.push_back(ump[target-nums[i]]);
                return ans;
            }
        }
        return ans;
       
       
    }
};
