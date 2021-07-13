// LINK=https://leetcode.com/problems/continuous-subarray-sum/


class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        if(nums.size()<2)
            return false;
        unordered_map<int,int>ump;
        ump[0]=-1;
        int pre=0;
        for(int i=0;i<nums.size();i++)
        {
            pre+=nums[i];
            if(k!=0)
            {
                pre%=k;
            }
            if(ump.find(pre)!=ump.end())
            {
                if(i-ump[pre]>1)
                    return true;
            }
            else
                ump[pre]=i;
        }
        return false;
    }
};
