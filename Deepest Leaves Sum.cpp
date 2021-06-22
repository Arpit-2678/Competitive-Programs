// LINK=https://leetcode.com/problems/deepest-leaves-sum/


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
      void bfs(TreeNode *root,int &sum)
  {
    queue<TreeNode*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
      TreeNode* fr=q.front();
      if(fr==NULL)
      {
           
           q.pop();
           if(!q.empty())
           {
              sum=0;
            q.push(NULL);
          }
      }
      else
      {
         sum+=fr->val;
        q.pop();
          if(fr->left)
           q.push(fr->left);
          if(fr->right)
          q.push(fr->right);



      }
  }
  }
    int deepestLeavesSum(TreeNode* root) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        int sum=0;
        bfs(root,sum);
        return sum;
    }
};
