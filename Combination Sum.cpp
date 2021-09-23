//  LINNK=https://leetcode.com/problems/combination-sum/


class Solution {
public:
    
      void tra(int i,int sum, int n,vector<int>&v,vector<vector<int>>&vv,vector<int>&arr)
      {
          if(i==n)
          {
              if(sum==0)
                 vv.push_back(v);
              
              return ;
              
          }
          if(arr[i]<=sum)
          {
              sum-=arr[i];
              v.push_back(arr[i]);
              tra(i,sum,n,v,vv,arr);
              sum+=arr[i];
              v.pop_back();
          }
              tra(i+1,sum,n,v,vv,arr);
      }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>v;
        int n=candidates.size();
        tra(0,target,n,v,res,candidates);
        return res;
        
    }
};
