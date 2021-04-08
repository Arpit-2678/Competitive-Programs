// LINK=https://practice.geeksforgeeks.org/problems/intersection-of-two-arrays2404/1/?category[]=Hash&category[]=Hash&problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&query=category[]HashproblemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscategory[]Hash#



//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    //Function to return the count of the number of elements in
    //the intersection of two arrays.
    int NumberofElementsInIntersection (int a[], int b[], int n, int m )
    {
        unordered_map<int,int>umap;
        for(int i=0;i<n;i++)
        {
            umap[a[i]]++;
        }
        int cnt=0;
        for(int j=0;j<m;j++)
        {
            if(umap.find(b[j])!=umap.end())
            {
                cnt++;
                //umap[b[j]]--;
                //if(umap[b[j]]==0)
                umap.erase(b[j]);
            }
        }
        return cnt;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n], b[m];
		for(int i=0; i<n; i++)
			cin>>a[i];

		for(int i=0; i<m; i++)
			cin>>b[i];
		Solution ob;
		cout << ob.NumberofElementsInIntersection(a,b,n,m) << endl;
	}
	return 0;
}  // } Driver Code Ends
