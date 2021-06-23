// LINK=https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/



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
        void bfs(TreeNode *root, vector<vector<int>>&v)
  {
    queue<TreeNode*>q;
    q.push(root);
    q.push(NULL);
            vector<int>ans;
            int cnt=1;
    while(!q.empty())
    {
      TreeNode* fr=q.front();
      if(fr==NULL)
      {
           if(cnt&1)
               v.push_back(ans);
          else
          {
              reverse(ans.begin(),ans.end());
              v.push_back(ans);
          }
          ans.clear();
          cnt++;
           q.pop();
           if(!q.empty())
           {
            q.push(NULL);
          }
      }
      else
      {
        ans.push_back(fr->val);
        q.pop();
          if(fr->left)
           q.push(fr->left);
          if(fr->right)
          q.push(fr->right);



      }
  }
  }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
           vector<vector<int>> v;
        if(root==nullptr)
            return v;
            bfs(root,v);
        return v;
    }
};
