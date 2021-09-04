//  LINK=https://practice.geeksforgeeks.org/problems/reverse-alternate-levels-of-a-perfect-binary-tree/1/?category[]=Tree&category[]=Tree&problemStatus=unsolved&problemType=functional&difficulty[]=0&page=1&sortBy=submissions&query=category[]TreeproblemStatusunsolvedproblemTypefunctionaldifficulty[]0page1sortBysubmissionscategory[]Tree#

void tra(Node* root1,Node* root2, int lev)
{
    if(root1==nullptr or root2==nullptr)
    return;
    
    if(!(lev&1))
    swap(root1->data,root2->data);
    tra(root1->left,root2->right,lev+1);
    tra(root1->right,root2->left,lev+1);
}
void reverseAlternate(Node *root)
{
    if(root==nullptr)
    return;
    
    tra(root->left,root->right,0);
}
