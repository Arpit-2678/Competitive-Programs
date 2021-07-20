//  LINK=https://leetcode.com/problems/missing-number/


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        if(n%4==0)
            ans=n;
        else if(n%4==1)
            ans=1;
        else if(n%4==2)
            ans=n+1;
        else 
            ans=0;
        int res=0;
        for(auto it:nums)
            res^=it;
        return (res^ans);
    }
};
