//  LINK=https://leetcode.com/problems/subsets/


class Solution {
public:
    
       void tra(int i,vector<int>&v,int n,vector<vector<int>>&vv,vector<int>&arr)
       {
           if(i==n)
           {
               vv.push_back(v);
               return;
           }
           
           v.push_back(arr[i]);
           tra(i+1,v,n,vv,arr);
           v.pop_back();
           tra(i+1,v,n,vv,arr);
           
       }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>v;
        int n=nums.size();
        tra(0,v,n,res,nums);
        return res;
        
    }
};
