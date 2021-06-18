// LINK=https://practice.geeksforgeeks.org/problems/nodes-at-given-distance-in-binary-tree/1#

#include<bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}


 // } Driver Code Ends
/* A binary Tree node
struct Node
{
    int data;
    struct Node *left, *right;
};
*/

class Solution
{
private:

public:
       
       void f_k_level(Node* root, int k,vector<int>&v)
       {
           if (root == NULL || k < 0)
           return;
           if(k==0)
           {
               v.push_back(root->data);
               return;
           }
           f_k_level(root->left,k-1,v);
           f_k_level(root->right,k-1,v);
       }
       int kDistanceNodes(Node* root, int target , int k, vector<int>&v)
       {
           if(root==NULL)
           return -1;
           if(root->data==target)
           {
               f_k_level(root,k,v);
               return 0;
           }
           int left_dist=kDistanceNodes(root->left,target,k,v);
           if(left_dist!=-1)
           {
               if(left_dist+1==k)
               v.push_back(root->data);
               else
               {
                   f_k_level(root->right,k-2-left_dist,v);
               }
               return left_dist+1;
           }
           int right_dist=kDistanceNodes(root->right,target,k,v);
           if(right_dist!=-1)
           {
               if(right_dist+1==k)
               v.push_back(root->data);
               else
               f_k_level(root->left,k-right_dist-2,v);
               return right_dist+1;
           }
           return -1;
       }
    vector <int> KDistanceNodes(Node* root, int target , int k)
    {
        vector<int>v;
        kDistanceNodes(root,target ,k,v);
        sort(v.begin(),v.end());
        return v;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    getchar();
    
    Solution x = Solution();
    
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* head = buildTree(s);
        
        int target, k;
        cin>> target >> k;
        getchar();
        
        vector <int> res = x.KDistanceNodes(head, target, k);
        
        for( int i=0; i<res.size(); i++ )
            cout<< res[i] << " ";
        cout<<endl;
    }
    return 0;
}
  // } Driver Code Ends
