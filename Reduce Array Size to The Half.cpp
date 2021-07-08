// LINK=https://leetcode.com/explore/featured/card/july-leetcoding-challenge-2021/608/week-1-july-1st-july-7th/3804/


class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>ump;
        multimap<int,int>mmp;
        int cnt=0,sum=0;
        for(auto it:arr)
        {
            ump[it]++;
        }
        for(auto it:ump)
        {
            mmp.insert({it.second,it.first});
        }
        for(auto it = mmp.crbegin(); it != mmp.crend(); ++it)
        {
            sum+=it->first;
            cnt++;
            if(sum>=arr.size()/2)
                return cnt;
        }
        return 0;
        
        
        }
};
