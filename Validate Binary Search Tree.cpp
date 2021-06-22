// LINK=https://leetcode.com/problems/validate-binary-search-tree/


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

 const long long inf = 1e10;
class Solution {
public:
     bool check(TreeNode* root, long long min , long long max)
     {
            if(root==nullptr)
                return true;
           if((root->val>min and root->val<max) and check(root->left,min,root->val) and check(root->right, root->val,max))
           {
               return true;
           }
         else
             return false;
         //return false;
     }
    bool isValidBST(TreeNode* root) {
        if((root->left==nullptr and root->right==nullptr) or root==nullptr)
            return true;
      return check(root,-inf,inf);
    }
};
