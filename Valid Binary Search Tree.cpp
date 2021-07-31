// LINK=https://www.interviewbit.com/problems/valid-binary-search-tree/


/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 bool checkBST(TreeNode* root,int min,int max)
      {
        if(root==nullptr)
        return true;
        if(root->val>min and root->val<max and checkBST(root->left,min,root->val) and checkBST(root->right,root->val,max))
        {
          return true;
        }
        else
        return false;
      }
int Solution::isValidBST(TreeNode* A) {
    if(checkBST(A,INT_MIN,INT_MAX))
     return 1;
     else
     return 0;

}
