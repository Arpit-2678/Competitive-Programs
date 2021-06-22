// Creation of BST from scratch


#include<bits/stdc++.h>
using namespace std;
class Node{
public:
  Node* left;
  Node* right;
  int data;
  Node(int data)
  {
    this->data=data;
    left=nullptr;
    right=nullptr;
  }
};
// building BST : if data is small traverse left else traverse right and attach and return root;
 Node* buid_bst(Node* root,int data)
 {
   if(root==nullptr)
   return new Node(data);
   if(root->data<=data)
   {
     root->right=buid_bst(root->right,data);
   }
   else
   {
     root->left=buid_bst(root->left,data);
   }
   return root;
 }

// inorder traversal of BST is always a sorted array...
   void inorder(Node* root)
   {
     if(root==nullptr)
     return;
     inorder(root->left);
     cout<<root->data<<" ";
     inorder(root->right);
   }


 int main(int argc, char const *argv[]) {
    Node * temp=nullptr;
    int n;
    cin>>n;
    int x;
     for(int i=1;i<=n;i++)
     {
       cin>>x;
       temp=buid_bst(temp,x);
     }
     inorder(temp);

   return 0;
 }
