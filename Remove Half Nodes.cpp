// LINK=https://www.interviewbit.com/problems/remove-half-nodes/



/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */  
   
TreeNode* Solution::solve(TreeNode* a) {
               if(a==NULL)
return NULL;

a->left=solve(a->left);
a->right=solve(a->right);

if(a->left==NULL&&a->right==NULL)
return a;



if(a->left==NULL){
    return a->right;
}

if(a->right==NULL){
    return a->left;
}

return a;    
}
