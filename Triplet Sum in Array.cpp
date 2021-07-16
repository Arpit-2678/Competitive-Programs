// LINK=https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1#


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int arr[], int n, int X)
    {
        sort(arr,arr+n);
    for(int i=0;i<=n-3;i++)
    {
        int start=i+1;
        int end=n-1;
        while(start<end)
        {
            int cs=arr[i]+arr[start]+arr[end];
            if(cs==X)
                return true;
            else if(cs>X)
            {
                end--;
            }
            else
            start++;
            
        }
    }
    return false;
    }

};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends
