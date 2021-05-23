// LINk=https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/549/


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            ans^=nums[i];
        }
        return ans;

            
    }
};
