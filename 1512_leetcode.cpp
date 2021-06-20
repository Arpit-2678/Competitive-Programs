// LINK=https://leetcode.com/problems/number-of-good-pairs/



class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>ump;
        int cnt=0;
        for(auto it:nums)
        {
            ump[it]++;
        }
        for(auto it:ump)
        {
            cnt+=(it.second*(it.second-1))/2;
        }
        return cnt;

        }
};
