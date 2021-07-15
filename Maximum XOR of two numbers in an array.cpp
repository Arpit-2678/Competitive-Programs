//  LINK=https://practice.geeksforgeeks.org/problems/maximum-xor-of-two-numbers-in-an-array/0/?fbclid=IwAR2r6VyKOpjZBEGG-gCvshMXDqEDuQ9Jq1l0QTQ0Lq85UP5pDV-d77EXIBg#



//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Node{
    public:
      Node* left;
      Node* right;
};
class Trie{
    Node *root=nullptr;
    public:
    Trie()
    {
        root=new Node();
    }
    
    void insert(int n)
    {
        Node * temp=root;
        for(int i=30;i>=0;i--)
        {
            int bit=(n>>i)&1;
            if(bit==0)
            {
                if(temp->left==nullptr)
                    temp->left=new Node();
                temp=temp->left;
            }
            else
            {
                if(temp->right==nullptr)
                    temp->right=new Node();
                temp=temp->right;
            }
        }
    }
    int max_xorr(int val)
    {
        int  current_ans=0;
        Node * temp=root;
        for(int i=30;i>=0;i--)
        {
            int  bit=(val>>i)&1;
            if(bit==0)
            {
                if(temp->right!=nullptr)
                {
                    temp=temp->right;
                    current_ans+=(1<<i);
                }
                else
                    temp=temp->left;
            }
            else
            {
                if(temp->left!=nullptr)
                {
                    temp=temp->left;
                    current_ans+=(1<<i);
                }
                else
                    temp=temp->right;
            }
        }
        return current_ans;
    }
    
};

class Solution
{
    public:
    int max_xor(int arr[] , int n)
    {
        // ios_base::sync_with_stdio(0);
        // cin.tie(0);
        int ans=0;
        Trie t;
        for(int i=0;i<n;i++)
        {
           t.insert(arr[i]);
            int curr_ans=t.max_xorr(arr[i]);
            ans=max(ans,curr_ans);
        }
        return ans;
    }
    
};


// { Driver Code Starts.
int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];

        Solution ob;
		cout << ob.max_xor(a, n) << endl;

	}
}


  // } Driver Code Ends
