// LINK=https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/



/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans=nullptr;
     void ref(TreeNode* root,int data)
     {
         if(root==nullptr)
             return  ;
         if(root->val==data)
         {             ans=root;
         return;}
         
          ref(root->left,data);
          ref(root->right,data);
        
         
     }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
               int data=target->val;
             ref(cloned,data);
        return ans;
        
    }
};
