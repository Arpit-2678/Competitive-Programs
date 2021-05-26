// Link=https://leetcode.com/explore/challenge/card/may-leetcoding-challenge-2021/601/week-4-may-22nd-may-28th/3754/


class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A' and s[i]<='Z')
            {
                s[i]+=32;
            }
        }
        return s;
    }
};
