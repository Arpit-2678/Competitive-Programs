// LINK=https://leetcode.com/problems/diameter-of-binary-tree/


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
    pair<int,int> fastdia(TreeNode* root)
    {
        pair<int,int>p,l,r;
        if(root==nullptr)
        {
            p.first=p.second=0;
            return p;
        }
        l=fastdia(root->left);
        r=fastdia(root->right);
        p.first=max(l.first,r.first)+1;
        p.second=max(l.first+r.first, max(l.second,r.second));
        return p;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        pair<int,int>res=fastdia(root);
        return res.second;    
    }
};
