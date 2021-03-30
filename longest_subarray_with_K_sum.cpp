// LINK= https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int n, int k) 
    { 
        unordered_map<int, int> um;
	int sum = 0, maxLen = 0;


	for (int i = 0; i < n; i++) {

		
		sum += arr[i];

		
		if (sum == k)
			maxLen = i + 1;

		
		if (um.find(sum) == um.end())
			um[sum] = i;

	
		if (um.find(sum - k) != um.end()) {

		
			if (maxLen < (i - um[sum - k]))
				maxLen = i - um[sum - k];
		}
	}


	return maxLen;
    //     unordered_map<int,int>umap;
    //     int pre=0;
    //     int len=0;
    //     for(int i=0;i<n;i++)
    //     {
    //         pre+=arr[i];
    //         cout<<pre<<" ";
    //         if(pre==k)
    //         {
    //             len=i+1;
    //         }
    //         if(umap.find(pre-k)!=umap.end())
    //         {
    //           if (len < (i - umap[pre - k]))
				// len = i - umap[pre - k];
		
    //         }
    //          if(umap.find(pre-k)==umap.end())
    //         umap[pre]=i;
    //     }
    //     cout<<"\n";
    //     return len;
    } 

};

// { Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
