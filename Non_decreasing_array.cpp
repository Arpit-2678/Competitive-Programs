// LINk=https://leetcode.com/explore/challenge/card/may-leetcoding-challenge-2021/598/week-1-may-1st-may-7th/3731/



class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
          int  cnt=0;
//          if(is_sorted(nums.begin(),nums.end()))
//              return true;
//          unordered_map<int,int>umap;
//         for(int i=0;i<nums.size();i++)
//         {
//               int x=nums[i];
//             if(umap.find(x)==umap.end())
//             {
//                 umap[x]=i;
//             }
//             else
//             {
//                 if(umap[x]!=(i-1) and umap[x]!=(i-2))
//                     return false;
//                 umap[x]=i;
                    
//             }
//         }
//         if(umap.size()<(nums.size()-1))
//             return false;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<nums[i-1])
            {
                if(i==1 or nums[i-2]<=nums[i])
                {
                    nums[i-1]=nums[i];
                    cnt++;
                }
            else{
                    nums[i]=nums[i-1];
                    cnt++;
                }
                
            }
             
        }
        return cnt<=1?true:false;
        
    }
};
