// LINK=https://leetcode.com/problems/sum-of-all-odd-length-subarrays/


class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
          int start=0,end=0, nos=0,res=0;
          int len=arr.size();
        for(int i=0;i<len;i++)
        {
            start=len-i;
            end=i+1;
            nos=(start*end);
            if(nos&1)
            {
                nos/=2;
                nos+=1;
            }
            else
            {
                nos/=2;
            }
            res+=(nos*arr[i]);
        }
        return res;
    }
};
