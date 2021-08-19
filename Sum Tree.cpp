// LINK=https://practice.geeksforgeeks.org/problems/sum-tree/1/?company[]=Amazon&company[]=Amazon&problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&category[]=Tree&category[]=Binary%20Search%20Tree&category[]=priority-queue&query=company[]AmazonproblemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscompany[]Amazoncategory[]Treecategory[]Binary%20Search%20Treecategory[]priority-queue#


struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
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
/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution
{
    public:
    
      int sum_left=0,sum_right=0, m_sum=0;
      void tra(Node* root)
      {
          if(root==nullptr)
          return ;
      
            tra(root->left);
            
          if(root->left!=nullptr)
          sum_left+=root->left->data;
        
          
          if(root->right!=nullptr)
          sum_right+=root->right->data;
        
          
          tra(root->right);
          m_sum=sum_right+sum_left;
      }
    bool isSumTree(Node* root)
    {
        if(root==nullptr or root->left==nullptr or root->right==nullptr)
        return true;
        
        tra(root);
       
         if(root->data!=m_sum)
          {
            return false;
          }
        return true;
    }
};

// { Driver Code Starts.

int main()
{

    int t;
	scanf("%d ",&t);
    while(t--)
    {
        string s;
		getline(cin,s);
        Node* root = buildTree(s);
        Solution ob;
        cout <<ob.isSumTree(root) << endl;
    }
    return 1;
}  // } Driver Code Ends
