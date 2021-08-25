// LINK=https://www.hackerrank.com/challenges/tree-level-order-traversal/problem

#include <bits/stdc++.h>

using namespace std;
	
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
                }

               return root;
           }
        }
/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/
 
    void levelOrder(Node * root) {
       
       queue<Node*>q;
       q.push(root);
       q.push(NULL);
       while(!q.empty())
       {
           Node* key=q.front();
           if(key==nullptr)
           {
               q.pop();
               if(!q.empty())
               q.push(nullptr);
           }
           else {
             cout<<key->data<<" ";
             q.pop();
             if(key->left)
             q.push((key->left));
             if(key->right)
             q.push(key->right);
           }
           
       }
    }

}; //End of Solution
