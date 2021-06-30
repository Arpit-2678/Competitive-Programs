// LINK=https://leetcode.com/explore/challenge/card/june-leetcoding-challenge-2021/607/week-5-june-29th-june-30th/3796/


class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int i=0,j=0,ans=INT_MIN;
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
        int z_cnt=0;
        while(j<nums.size())
        {
              if(nums[j]==0)
                  z_cnt++;
             if(z_cnt<=k)
            {
                ans=max(ans,j-i+1);
                j++;
            }
            else
            {
                while(z_cnt>k)
                {
                    if(nums[i]==0)
                        z_cnt--;
                    i++;
                }
                j++;
            }
        }
        return ans;
        
    }
};
