#include<bits/stdc++.h>
using namespace std;
class Node{
public:
     int data;
     Node *left;
     Node *right;
     Node(int data)
     {
         this->data=data;
         left=nullptr;
         right=nullptr;
     }
};
   Node* build_tree()
   {
         int d;
         cin>>d;
         if(d==-1)
         {
          return nullptr ;
        }
          Node *temp=new Node(d);
          temp->left=build_tree();
          temp->right=build_tree();
          return temp;
   }
   // pre order traversal..
   void print_pre_T(Node * root)
   {
      if(root==nullptr)
      {
        return ;
      }
        cout<<root->data<<" ";
        print_pre_T(root->left);
        print_pre_T(root->right);
   }
   // inorder traversal....
   void print_in_T(Node * root)
   {
      if(root==nullptr)
      {
        return ;
      }

        print_in_T(root->left);
          cout<<root->data<<" ";
        print_in_T(root->right);
   }
   // post order traversal...
   void print_post_T(Node * root)
   {
      if(root==nullptr)
      {
        return ;
      }

        print_post_T(root->left);
        print_post_T(root->right);
        cout<<root->data<<" ";
   }
   // height of a tree.....
   int height(Node* root)
{
        if(root==nullptr)
          return 0;
        int ls=height(root->left);
        int rs=height(root->right);
        int ht=max(ls,rs)+1;
        return ht;
}
// print  k-th level
void print_k_level(Node *root,int k)
{
       if(root==nullptr)
       {
          return;
       }
       if(k==1)
       {
         cout<<root->data<<" ";
         return;
       }
       print_k_level(root->left,k-1);
       print_k_level(root->right,k-1);

}
// level order traversal using recursion O(n^2).....
    void print_level_order_T(Node *root)
    {
             int x=height(root);
             for(int i=1;i<=x;i++)
             {
                 print_k_level(root,i);
                 cout<<"\n";
             }
    }
// level order traversal using queue BFS O(n)
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
  // count nodes of tree....
  int count_tree(Node *root)
  {
       if(root==nullptr)
          return 0;
      return 1+count_tree(root->left)+count_tree(root->right);
  }
  // sum of all nodes of tree....
  int sum_tree(Node *root)
  {
       if(root==nullptr)
          return 0;
      return root->data+sum_tree(root->left)+sum_tree(root->right);
  }

  // diameter of a tree in O(n^2)...
  int diameter(Node *root)
  {
      if(root==nullptr)
         return 0;
      int lh=height(root->left);
      int rh=height(root->right);
      int ld=diameter(root->left);
      int rd=diameter(root->right);
      return max((lh+rh),max(ld,rd));
  }
  // diameter of tree in 0(n)...
  class Pair{
    public:
        int height;
        int diameter;
};

Pair fastDiameter(Node*root){
    Pair p;
    if(root==NULL){
        p.diameter = p.height = 0;
        return p;
    }
    //Otherwise
    Pair left = fastDiameter(root->left);
    Pair right = fastDiameter(root->right);

    p.height = max(left.height,right.height) + 1;
    p.diameter = max(left.height+right.height, max(left.diameter,right.diameter));
    return p;
}

// check whether tree is balanced  or not...
class HBPair{
public:
    int height;
    bool balance;
};

HBPair isHeightBalance(Node *root){
    HBPair p;
    if(root==NULL){
        p.height = 0;
        p.balance = true;
        return p;
    }
    //Recurisve Case
    HBPair left = isHeightBalance(root->left);
    HBPair right = isHeightBalance(root->right);

    p.height = max(left.height,right.height) + 1;

    if(abs(left.height-right.height)<=1 && left.balance && right.balance){
        p.balance = true;
    }
    else{
        p.balance = false;
    }
    return p;
}
   int main(int argc, char const *argv[]) {
       Node *root=build_tree();
    //  cout<<(*root)<<"\n";
       print_pre_T(root);
       cout<<"\n";

       print_in_T(root);
       cout<<"\n";

       print_post_T(root);

       cout<< '\n'<<height(root);
        cout<<"\n";

        //print_k_level(root,3);
       //print_level_order_T(root);
       bfs(root);

       cout<<"\n"<<count_tree(root)<<"\n"<<sum_tree(root);

       cout<<"\n"<<diameter(root);

       Pair p=fastDiameter(root);
       cout<<p.diameter<<"\n";

       if(isHeightBalance(root).balance){
       cout<<"Balanced";
   }
   else{
       cout<<"Not a Balanced Tree"<<endl;
   }

     return 0;
   }
//    8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 40 50 60 -1 -1 -1 70 -1 -1
