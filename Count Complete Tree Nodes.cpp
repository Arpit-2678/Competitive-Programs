// LINK=https://leetcode.com/problems/count-complete-tree-nodes/



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
    int height(TreeNode* root)
{
        if(root==nullptr)
          return 0;
        int ls=height(root->left);
        int rs=height(root->right);
        int ht=max(ls,rs)+1;
        return ht;
}
   void print_k_level(TreeNode *root,int k, int &nn)
{
       if(root==nullptr)
       {
          return;
       }
       if(k==1)
       {
         nn++;
         return;
       }
       print_k_level(root->left,k-1,nn);
       print_k_level(root->right,k-1,nn);

} 
    int countNodes(TreeNode* root) {
        // ios_base::sync_with_stdio(0);
        // cin.tie(0);cout.tie(0);
        int x=height(root);
        int nn=0;
        print_k_level(root,x,nn);
         return (pow(2,x-1)-1 + nn);
    }
};
