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
  // using property of bst we can search in O(h) time ...
   bool search_bst(Node* root,int target)
   {
       if(root==nullptr)
       return false;
       if(root->data==target)
       return true;
       if(target<=root->data)
       return search_bst(root->left,target);
       else
       return search_bst(root->right,target);
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
// deletion of a particular node.
   Node * delete_in_bst(Node* root, int data)
   {
       if(root==nullptr)
       return nullptr;

       if(data<root->data)
       {
            root->left=delete_in_bst(root->left,data);
            return root;
       }
       else if(root->data==data)
       {
         // if node is null then simply delete it and return null
                 if(root->left == nullptr and root->right==nullptr)
                 {
                     delete root;
                     return nullptr;
                 }
                 // if left child of root exists then first copy it and then delete it and then return copied node..
                 else if(root->left!=nullptr and root->right==nullptr)
                 {
                   Node * temp=root->left;
                   delete root;
                   return temp;
                 }
                 // if right child of root exists then first copy it and then delete it and then return copied node..
                 else if(root->right!=nullptr and root->left==nullptr)
                 {
                   Node * temp=root->right;
                   delete root;
                   return temp;
                 }
                 else
                 {
                   // if both the children are present then we will find either inorder successor or inorder predecessor , replace our node with it and then delete that  replacement data.
                      Node* rp=root->right;
                      while(rp->left!=nullptr)
                      {
                        rp=rp->left;
                      }
                      root->data=rp->data;
                      root->right=delete_in_bst(root->right,rp->data);
                      return root;
                 }
       }
       else
       {
         root->right=delete_in_bst(root->right,data);
         return root;
       }
   }
      bool checkBST(Node* root,int min,int max)
      {
        if(root==nullptr)
        return true;
        if(root->data>min and root->data<max and checkBST(root->left,min,root->data) and checkBST(root->right,root->data,max))
        {
          return true;
        }
        else
        return false;
      }

   void bfs(Node *root)
   {
     queue<Node*>q;
     q.push(root);
     q.push(NULL);
     while(!q.empty())
     {
       Node* fr=q.front();
       if(fr==NULL)
       {
            cout<<"\n";
            q.pop();
            if(!q.empty())
            {
             q.push(NULL);
           }
       }
       else
       {
         cout<<fr->data<<" ";
         q.pop();
           if(fr->left)
            q.push(fr->left);
           if(fr->right)
           q.push(fr->right);



       }
   }
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
     cout<<'\n';
     int ele;
     cin>>ele;
     // bool ans=search_bst(temp,ele);
     // if(!ans)
     // cout<<"Not present in BST \n";
     // else
     // cout<<"Present "<<"\n";
     temp=delete_in_bst(temp,ele);
     bfs(temp);

   return 0;
 }
