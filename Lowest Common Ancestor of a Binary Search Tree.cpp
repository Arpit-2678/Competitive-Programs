// LINK=https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/


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
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        if(root==nullptr)
            return nullptr;
        if(root->val==p->val or root->val==q->val)
            return root;
        TreeNode* lef=lowestCommonAncestor(root->left,p,q);
        TreeNode* rig=lowestCommonAncestor(root->right,p,q);
        if(lef!=nullptr and rig!=nullptr)
            return root;
        if(lef!=nullptr and rig==nullptr)
          return lef;
        else
            return rig;
        
    }
};
