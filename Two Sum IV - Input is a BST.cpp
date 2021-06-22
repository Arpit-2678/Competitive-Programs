// LINK=https://leetcode.com/problems/two-sum-iv-input-is-a-bst/



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
      void inorder(TreeNode* root,vector<int>&v)
      {
          if(root==nullptr)
              return;
          inorder(root->left,v);
          v.push_back(root->val);
          inorder(root->right,v);
      }
    bool findTarget(TreeNode* root, int k) {
      ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        vector<int>v;
        inorder(root,v);
      // bool flag=false;
        int i=0,j=v.size()-1;
          while(i<j)
          {
               if(v[i]+v[j]>k)
                   j--;
              else if(v[i]+v[j]<k)
                  i++;
              else
                  return true;
          }
        return false;
    }
};
