// LINK=https://leetcode.com/problems/univalued-binary-tree/



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
      bool flag=true;
    void tra(TreeNode* root,int x)
    {
        if(root==NULL)
            return ;
         int y=root->val;
        if(x!=y)
        {
            flag=false;
            return ;
        }
        else
        {
            tra(root->left,y);
            tra(root->right,y);
        }
            
    }
    bool isUnivalTree(TreeNode* root) {
        tra(root,root->val);
        return flag;
    }
};
