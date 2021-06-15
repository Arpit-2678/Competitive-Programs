// LINK=https://www.interviewbit.com/problems/path-to-given-node/


/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
      bool path(TreeNode* root, int data, vector<int>&v)
      {
          if(root==NULL)
          return false;
          if(root->val==data)
          {
              v.push_back(root->val);
              return true;
          }
          if(path(root->left,data,v))
          {
              v.push_back(root->val);
              return true;
          }
          if(path(root->right,data,v))
          {
              v.push_back(root->val);
              return true;
          }
          return false;
      }
vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int>ans;
    bool x=path(A,B,ans);
    reverse(ans.begin(),ans.end());
    return ans;
}
