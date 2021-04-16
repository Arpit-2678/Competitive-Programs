// LINK=https://leetcode.com/explore/interview/card/top-interview-questions-easy/96/sorting-and-searching/587/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        vector<int>v;
        while(i<m and j<n)
        {
            if(nums1[i]<nums2[j])
            {
                v.push_back(nums1[i++]);
            }
            else
                v.push_back(nums2[j++]);
        }
        while(i<m)
            v.push_back(nums1[i++]);
        while(j<n)
            v.push_back(nums2[j++]);
        nums1.clear();
        for(auto it:v)
         nums1.push_back(it);
       
    }
};
