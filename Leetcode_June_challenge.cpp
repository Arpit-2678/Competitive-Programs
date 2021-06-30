// LINK=https://leetcode.com/explore/challenge/card/june-leetcoding-challenge-2021/607/week-5-june-29th-june-30th/3797/


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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
          if(root==NULL)
        return NULL;
        if(root==p or root==q)
        return root;
        TreeNode* lef=lowestCommonAncestor(root->left,p,q);
        TreeNode* rig=lowestCommonAncestor(root->right,p,q);
        if(lef!=NULL and rig!=NULL)
        return root;
        if(lef!=NULL)
        return lef;
        else
        return rig;
    }
};
