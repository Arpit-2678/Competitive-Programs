// LINK=https://leetcode.com/problems/sort-colors/


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt_0=0,cnt_1=0,cnt_2=0;
        for(auto it:nums)
        {
            if(it==0)
                cnt_0++;
            else if(it==1)
                cnt_1++;
            else
                cnt_2++;
        }
         nums.clear();
        while(cnt_0>0 or cnt_1>0 or cnt_2>0)
       {
             if(cnt_0>0)
             { nums.push_back(0);
                cnt_0--;
             }
              else if(cnt_1>0)
              {    nums.push_back(1);
                 cnt_1--;
              }else
              { nums.push_back(2);
                  cnt_2--;
              }
        }
    }
};
