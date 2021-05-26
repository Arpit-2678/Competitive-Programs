// LINK=https://leetcode.com/explore/challenge/card/may-leetcoding-challenge-2021/598/week-1-may-1st-may-7th/3730/


class Solution {
public:
    vector<int> runningSum(vector<int>& v) {
          for(int i=1;i<v.size();i++)
          {
              v[i]=v[i]+v[i-1];
          }
        return v;
    }
};
