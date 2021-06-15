// LINK=https://www.hackerrank.com/challenges/binary-search-tree-insertion/problem


#include <iostream>
#include <cstddef>
	
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
  
    void preOrder(Node *root) {

          if( root == NULL )
              return;

          std::cout << root->data << " ";

          preOrder(root->left);
          preOrder(root->right);
      }

/* you only have to complete the function given below.  
Node is defined as  

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


   
    Node * insert(Node * root, int data) {
          if(root==nullptr)
             return new Node(data);
           if(data<root->data)
          {
              root->left=insert(root->left,data);
          }
          else
          root->right=insert(root->right,data);
          
          return root;
    }

}; //End of Solution
