// LINK=https://leetcode.com/problems/path-sum-ii/




/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
      void tra(TreeNode* root, int tsum, vector<vector<int>>&v, vector<int>&ans,int sum)
      {
             if(root==nullptr)
                 return ;
              ans.push_back(root->val);
    sum+=root->val;  // since we are passing sum by value so no need to backtrack sum..
          if(root->left==nullptr and root->right==nullptr and sum==tsum)
          {
              v.push_back(ans);
              
          }
          if(root->left!=nullptr)
          {
              tra(root->left,tsum, v,ans,sum);
              ans.pop_back(); //. backtracking step
          }
          if(root->right!=nullptr )
          {
               tra(root->right,tsum, v,ans,sum);
              ans.pop_back();  // backtracking step
          }
      }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        ios_base::sync_with_stdio(0);
        cout.tie(0);cin.tie(0);
        vector<vector<int>>v;
        vector<int>ans;
        tra(root,targetSum,v,ans,0);
        return v;
        
    }
};
