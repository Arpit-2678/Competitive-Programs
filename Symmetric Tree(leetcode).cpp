// LINK=https://leetcode.com/problems/symmetric-tree/


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
    
    bool ischeck(TreeNode* root1, TreeNode* root2)
    {
        if(root1==nullptr and root2==nullptr)
            return true;
        if(root1==nullptr or root2==nullptr)
            return false;
        return ((root1->val==root2->val) and ischeck(root1->right,root2->left) and ischeck(root1->left,root2->right)); 
        
    }
    bool isSymmetric(TreeNode* root) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        if(root==nullptr or (root->left==nullptr and root->right==nullptr))
            return true;
        
        return ischeck(root->left,root->right);
        
    }
};
