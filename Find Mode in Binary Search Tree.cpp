// LINK=https://leetcode.com/problems/find-mode-in-binary-search-tree/




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
            return ;
        tra(root->left,v);
        v.push_back(root->val);
        tra(root->right,v);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int>v;
        tra(root,v);
        int cnt=1;
        int max_cnt=INT_MIN;
        
        for(int i=1;i<v.size();i++)
        {
            if(v.at(i-1)!=v.at(i))
            {
                max_cnt=max(max_cnt,cnt);
                cnt=1;
            }
            else
                cnt++;
        }
        max_cnt=max(max_cnt,cnt);
        int x=v.size();
        cnt=1;
        for(int i=1;i<x;i++)
        {
            if(v.at(i-1)!=v.at(i))
            {
                 if(cnt==max_cnt)
                     v.push_back(v.at(i-1));
                cnt=1;
            }
            else
                cnt++;
        }
        if(cnt==max_cnt)
        v.push_back(v.at(x-1));
        v.erase(v.begin(),v.begin()+x);
        return v;
        
    }
};
