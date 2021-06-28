// LINK=https://leetcode.com/problems/check-if-all-the-integers-in-a-range-are-covered/



class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        int arr[52]{0};
       for(auto it:ranges)
       {
          arr[it.at(0)]++;
           arr[it.at(1)+1]--;
       }
        int sum=0;
        for(size_t i=1;i<=right;i++)
        {
            sum+=arr[i];
            if(i>=left and sum==0)
                return false;
        }
        return true;
        
    }
};
