// LINK=https://practice.geeksforgeeks.org/problems/in-first-but-second5423/1/?category[]=Arrays&category[]=Strings&category[]=Hash&category[]=Arrays&category[]=Strings&category[]=Hash&problemStatus=unsolved&difficulty[]=1&page=2&sortBy=newest&query=category[]Arrayscategory[]Stringscategory[]HashproblemStatusunsolveddifficulty[]1page2sortBynewestcategory[]Arrayscategory[]Stringscategory[]Hash#



#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	public:
	vector<long long> findMissing(long long A[], long long B[],  
                 int N, int M) 
	{ 
	    // Your code goes here
	     set<long long>st;
	     for(int i=0;i<M;i++)
	       st.insert(B[i]);
	     vector<long long> v;
	     for(int i=0;i<N;i++)
	     {
	         if(st.find(A[i])==st.end())
	         v.push_back(A[i]);
	     }
	     return v;
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
        cin>>n;
        int m;
        cin>>m;
        long long a[n];
        long long b[m];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<m;i++)
        cin >> b[i];
        vector<long long> ans;
        

        Solution ob;
        ans=ob.findMissing(a,b,n,m);
        for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends
