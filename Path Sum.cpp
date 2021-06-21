// LINK=https://leetcode.com/problems/path-sum/



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
       bool flag=false;
      void tra(TreeNode* root,int sum,int target)
      {
          if(root==NULL)
          {
              return ;
          }
          if(root->left==nullptr and root->right==nullptr)
          {
              sum+=root->val;
              if(sum==target)
                  flag=true;
              
          }
          sum+=root->val;
          tra(root->left,sum,target);
          tra(root->right,sum,target);
          //sum-=root->val;
      }
    bool hasPathSum(TreeNode* root, int targetSum) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        tra(root,0,targetSum);
        return flag;
    }
};
