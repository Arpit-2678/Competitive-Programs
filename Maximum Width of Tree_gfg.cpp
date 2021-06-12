// LINK=https://practice.geeksforgeeks.org/problems/maximum-width-of-tree/1/?problemStatus=unsolved&problemType=functional&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&page=1&sortBy=submissions&category[]=Tree&query=problemStatusunsolvedproblemTypefunctionaldifficulty[]-2difficulty[]-1difficulty[]0page1sortBysubmissionscategory[]Tree#



#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

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
/*  Structure of a Binary Tree

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
    // Function to get the maximum width of a binary tree.
    int wdt=0;
      void bfs(Node *root,int cnt)
  {
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
      Node* fr=q.front();
      if(fr==NULL)
      {
        
          wdt=max(wdt,cnt);
          cnt=0;
          q.pop();
           if(!q.empty())
           {
            q.push(NULL);
          }
          
      }
      else
      {
        cnt++;
       // cout<<fr->data<<" ";
        
        q.pop();
          if(fr->left)
           q.push(fr->left);
          if(fr->right)
          q.push(fr->right);



      }
  }
        //wdt=max(wdt,cnt);
    
  }
    int getMaxWidth(Node* root) {
       // int wd=INT_MIN;
       bfs(root,0);
       return wdt;
        
    }
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    getchar();
    while (t--) {
        string inp;
        getline(cin, inp);
        Node* root = buildTree(inp);

        Solution ob;
        cout << ob.getMaxWidth(root) << endl;
    }
    return 0;
}
  // } Driver Code Ends
