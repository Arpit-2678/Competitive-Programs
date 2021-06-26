// LINK=https://leetcode.com/problems/binary-tree-right-side-view/



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
   void bfs(TreeNode* root,vector<int>&v)
   {
          queue<TreeNode*>q;
       q.push(root);
       q.push(NULL);
       int ele;
       while(!q.empty())
       {
              TreeNode* temp=q.front();
                if(temp==NULL)
                {v.push_back(ele);
                   q.pop();
                 if(!q.empty())
                 {
                      q.push(NULL);
                 }
               
                }
               else
               {  ele=temp->val;
                   q.pop();
                   if(temp->left)
                   { q.push(temp->left);}
                if(temp->right)
                {
                     q.push((temp->right));
                }
                   
               }
       }
   }
   vector<int> rightSideView(TreeNode* root) {
       vector<int>v;
       if(root==NULL)
           return v;
       bfs(root,v);
       return v;
       
   }
};
