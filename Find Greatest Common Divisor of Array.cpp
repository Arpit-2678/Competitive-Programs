// LINK=https://leetcode.com/contest/weekly-contest-255/problems/find-greatest-common-divisor-of-array/


class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return __gcd(nums.front(),nums.back());
        
    }
};
