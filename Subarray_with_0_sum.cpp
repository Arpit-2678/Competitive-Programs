// LINK=https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1#


// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        unordered_set<int>umap;
        umap.insert(arr[0]);
        int pre=arr[0];
        if(pre==0)
        return true;
       for(int i =1;i<n;i++)
       {
           pre+=arr[i];
           if(arr[i]==0 or pre==0)
            return true;
           else
           {
               if(umap.find(pre)!=umap.end())
                  return true;
                  else
                  umap.insert(pre);
           }
       }
       return false;
    }
};

// { Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}  // } Driver Code Ends
