// LINK=https://leetcode.com/problems/ugly-number/


class Solution {
public:
    bool isUgly(int n) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        if(n==1)
            return true;
        if(n<=0)
         return false;
        while(n>1)
        {
            if(n%2==0)
            {
                n/=2;
            }
            else if(n%3==0)
            {
                n/=3;
            }
            else if(n%5==0)
            {
                n/=5;
            }
            else
                return false;
        }
        return true;
    }
};
