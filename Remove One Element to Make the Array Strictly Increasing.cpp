// LINK=https://leetcode.com/problems/remove-one-element-to-make-the-array-strictly-increasing/


class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int len=nums.size();
        if(len<=2)
            return true;
        int cnt=0,ind=-1;
        for(int i=1;i<len;i++)
        {
            if(nums[i-1]>nums[i])
            {
                if(ind==-1)
                {
                    ind=i;
                }
                else
                    return false;
            }
            else if(nums[i]==nums[i-1])
                return false;
            
        }
        if(ind<=1 or ind==len-1)
            return true;
        if(nums[ind-1]<nums[ind+1] or nums[ind-2]<nums[ind])
            return true;
        return false;
        
    }
};
