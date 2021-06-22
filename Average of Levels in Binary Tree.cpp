// LINK=https://leetcode.com/problems/average-of-levels-in-binary-tree/



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
    void bfs(TreeNode *root,vector<double>&v)
  {
    queue<TreeNode*>q;
    q.push(root);
    q.push(NULL);
    double sum;
        int cnt=0;
    while(!q.empty())
    {
      TreeNode* fr=q.front();
      if(fr==NULL)
      {
           v.push_back(sum/cnt);
          sum=0;
          cnt=0;
           q.pop();
           if(!q.empty())
           {
            q.push(NULL);
          }
      }
      else
      {
        sum+=fr->val;
          cnt++;
        q.pop();
          if(fr->left)
           q.push(fr->left);
          if(fr->right)
          q.push(fr->right);



      }
  }
  }
    vector<double> averageOfLevels(TreeNode* root) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        vector<double>v;
        bfs(root,v);
        return v;
    }
};
