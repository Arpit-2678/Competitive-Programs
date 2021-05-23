// LINK=https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/674/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int flag=0;
       unordered_map<int,int>umap;
        vector<int>res;
        if(nums1.size()>nums2.size())
        {
            for(int i=0;i<nums1.size();i++)
        {
            umap[nums1[i]]++;
        }
            flag++;
            
        }
        else
        {
             for(int i=0;i<nums2.size();i++)
        {
            umap[nums2[i]]++;
        }
        }
        if(flag)
        {
              for(int i=0;i<nums2.size();i++)
        {
            if(umap.find(nums2[i])!=umap.end())
            {
                res.push_back(nums2[i]);
                umap[nums2[i]]--;
                if(umap[nums2[i]]==0)
                {
                    umap.erase(nums2[i]);
            }
            }
        }  
        }
        else
        {
              for(int i=0;i<nums1.size();i++)
        {
            if(umap.find(nums1[i])!=umap.end())
            {
                res.push_back(nums1[i]);
                umap[nums1[i]]--;
                if(umap[nums1[i]]==0)
                    umap.erase(nums1[i]);
            }
        }  
            
        }
        
        return res;
        
       
     
       
    }
};
