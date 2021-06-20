// LINK=https://leetcode.com/problems/n-repeated-element-in-size-2n-array/


class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        unordered_set<int>ust;
        for(auto it:nums)
        {
            if(ust.find(it)!=ust.end())
                return it;
            else
                ust.insert(it);
        }
        return 0;
       
    }
};



