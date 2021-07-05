// LINK=https://leetcode.com/problems/contains-duplicate-ii/


class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        unordered_map<int,int>ump;
      for(int j=0;j<nums.size();j++)
        {
             if(ump.find(nums[j])!=ump.end())
             {
                 if(abs(ump[nums[j]]-j)<=k)
                     return true;
                 else
                     ump[nums[j]]=j;
             }
            else
                 ump[nums[j]]=j;
        }
        return false;
    }
};
