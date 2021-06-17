#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* left,*right;
};
Node * newNode(int x){
    Node *n = new Node();
    n->data = x;
    n->left=NULL;
    n->right=NULL;
    return n;
}
Node * inOrderSuccessor(Node *root,Node *x){
    //root is root of the tree
    //x is pointer to the node whose succesor
    // is to be find
    if(root==NULL){
        return NULL;
    }
    if(root->right !=NULL){
        Node *temp = x->right;
        while(temp->left!=NULL){
            temp = temp->left;
        }
        return temp;
    }
    else {
        Node * res=NULL;
        Node * current = root;
        while(current!=x){
            if(current->data>x->data){
                res=current;
                current=current->left;
            }
            else{
                current=current->right;
            }
        }
        return res;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Node* root = newNode(10);
    root->left = newNode(8);
    root->right = newNode(12);
    root->left->left = newNode(6);
    root->right->left= newNode(11);
    root->right->right = newNode(14);
    //Node *temp = inOrderSuccessor(root,root->right);   //This works fine 
    Node *temp = inOrderSuccessor(root,root->left);
    cout<<temp->data;
}