// LINK=https://practice.geeksforgeeks.org/problems/print-bst-elements-in-given-range/1/?problemStatus=unsolved&problemType=functional&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&page=1&sortBy=submissions&category[]=Tree&query=problemStatusunsolvedproblemTypefunctionaldifficulty[]-2difficulty[]-1difficulty[]0page1sortBysubmissionscategory[]Tree#


struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
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
    Node* root = new Node(stoi(ip[0]));
        
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
            currNode->left = new Node(stoi(currVal));
                
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
            currNode->right = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}

vector<int> printNearNodes(Node*root,int k1 , int k2);

int main()
{

    int t;
	scanf("%d ",&t);
    while(t--)
    {
        int k1 , k2;
        string s;
		getline(cin,s);
		scanf("%d ", &k1);
		scanf("%d " , &k2);
        Node* root = buildTree(s);
        vector <int> res = printNearNodes(root, k1 ,  k2);
        for (int i=0;i<res.size();i++) cout << res[i] << " ";
        cout<<endl;
    }
    return 1;
}// } Driver Code Ends






//Function to return a list of BST elements in a given range.
  void tra(Node* root,int l,int h,vector<int>&v)
  {
      if(root==NULL)
      return;
      if(root->data>l)
      tra(root->left,l,h,v);
      if(root->data>=l and root->data<=h)
      {
          v.push_back(root->data);
      }
       if(root->data<h)
      tra(root->right,l,h,v);
  }
vector<int> printNearNodes(Node *root, int low, int high)
{
  vector<int>v;
  tra(root,low,high,v);
  sort(v.begin(),v.end());
  return v;
}
