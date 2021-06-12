// LINK=https://leetcode.com/problems/balanced-binary-tree/



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
    pair<int,bool> bal(TreeNode* root)
    {
        pair<int,bool>p,l,r;
        if(root==nullptr)
        {
            p.first=0;
            p.second=true;
            return p;
        }
        l=bal(root->left);
        r=bal(root->right);
        p.first=max(l.first,r.first)+1;
        if(abs(l.first-r.first)<=1 and l.second and r.second)
        {
            p.second=true;
        }
        else
            p.second=false;
        return p;
    }
    bool isBalanced(TreeNode* root) {
        if(bal(root).second)
            return true;
        else
            return false;
        
        
    }
};
