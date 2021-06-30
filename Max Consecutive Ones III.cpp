// LINK=https://leetcode.com/explore/challenge/card/june-leetcoding-challenge-2021/607/week-5-june-29th-june-30th/3796/


class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int i=0,j=0,ans=INT_MIN;
        unordered_map<int,int>ump;
        if(k==0)
        {
            int res=0,cnt=0;
            nums.push_back(0);
            for(auto it:nums)
            {
                if(it==0)
                {
                    res=max(res,cnt);
                    cnt=0;
                }
                else
                    cnt++;
            }
            return res;
        }
        while(j<nums.size())
        {
            ump[nums[j]]++;
            // if(ump[0]<k)
            // {
            //     j++;
            // }
             if(ump[0]<=k)
            {
                ans=max(ans,j-i+1);
                j++;
            }
            else
            {
                while(ump[0]>k)
                {
                    ump[nums[i]]--;
                    if(ump[nums[i]]==0)
                        ump.erase(nums[i]);
                    i++;
                }
                j++;
            }
        }
        if(ump.size()==1)
        {
            if((ump.begin()->first)==1)
                return ump.size();
            else
                return k;
        }
        return ans;
        
    }
};
