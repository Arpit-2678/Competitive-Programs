// LINK=https://practice.geeksforgeeks.org/problems/relative-sorting4323/1/?category[]=Hash&category[]=Hash&problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&query=category[]HashproblemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscategory[]Hash#




//Initial template for C++

#include <bits/stdc++.h> 
using namespace std;


 // } Driver Code Ends
//User function template in C++


class Solution{
    public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int m) 
    {
        map<int,int>umap;
        for(auto it:A1)
        {
            umap[it]++;
        }
        vector<int>res;
        int cnt=0;
        for(int i=0;i<A2.size();i++)
        {
            if(umap.find(A2[i])!=umap.end())
            {
                for(int k=1;k<=umap[A2[i]];k++)
                {
                    res.push_back(A2[i]);
                }
                umap.erase(A2[i]);
            }
            else
            cnt++;
        }
        if(cnt==m)
        {
            sort(A1.begin(),A1.end());
            return A1;
        }
        else
        {
            for(auto it:umap)
            {
                for(int i=1;i<=it.second;i++)
                {
                    res.push_back(it.first);
                }
                umap.erase(it.first);
            }
            return res;
            
        }
        
    } 
};

// { Driver Code Starts.

int main(int argc, char *argv[]) 
{ 
	
	int t;
	
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    
	    vector<int> a1(n);
	    vector<int> a2(m);
	    
	    for(int i = 0;i<n;i++){
	        cin >> a1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> a2[i];
	    }
	    
	    Solution ob;
	    a1 = ob.sortA1ByA2(a1, n, a2, m); 
	
	   
	    for (int i = 0; i < n; i++) 
		    cout<<a1[i]<<" ";
		
	    cout << endl;
	    
	    
	}
	return 0; 
} 
  // } Driver Code Ends
