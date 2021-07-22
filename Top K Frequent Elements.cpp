// LINK=https://leetcode.com/problems/top-k-frequent-elements/


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        vector<int>v;
        unordered_map<int,int>ump;
        
        for(auto it:nums)
            ump[it]++;
        
        multimap<int,int,greater <int>>mp;
        for(auto it:ump)
        {
            mp.insert({it.second,it.first});
        }
        
        auto it=mp.begin();
        while(k--)
        {
            v.push_back((*it).second);
            it++;
        }
        
        return v;
    }
};
