// LINK=https://leetcode.com/problems/increasing-order-search-tree/


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
     
    

     void tra(TreeNode* root,vector<int>&v)
     {
         if(root==NULL)
             return;
         tra(root->left,v);
          v.push_back(root->val);
         tra(root->right,v);
     }
    
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* temp=NULL;
        temp=new TreeNode(0);
        TreeNode* cur=temp;
        vector<int>v;
        tra(root,v);
        for(auto it:v)
        {
            cur->right=new TreeNode(it);
            cur=cur->right;
        }
        return temp->right;
        
    }
};
