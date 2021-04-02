// LINK=https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1/?category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&query=category[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]HashproblemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscategory[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]Hash#


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
       vector<int>v;
       int i=0,j=0;
       if(arr1[0]==arr2[0])
       {
           v.push_back(arr1[0]);
           i=1;
           j=1;
       }
       else if(arr1[0]<arr2[0])
       {
            v.push_back(arr1[0]);
              i=1;
          
       }
       else
           {
               v.push_back(arr2[0]);
               j=1;
           }
     
      while(i<n and j<m)
      {
          if(arr1[i]==arr2[j])
          {
              if(arr1[i]!=v.back())
                v.push_back(arr1[i]);
              i++;
              j++;
              
              
          }
          else if(arr1[i]<arr2[j])
          {
               if(arr1[i]!=v.back())
                v.push_back(arr1[i]);
                i++;
          }
          else
          {
              if(arr2[j]!=v.back())
                v.push_back(arr2[j]);
                j++;
          }
      }
       //cout<<i<<" "<<j<<"\n";
      if(i==n and j<m)
      {
         
          for(int k=j;k<m;k++)
          {
               if(arr2[k]!=v.back())
                v.push_back(arr2[k]);
          }
      }
      if(j==m and i<n)
      {
          for(int k=i;k<n;k++)
          {
            if(arr1[k]!=v.back()) 
           v.push_back(arr1[k]);
          }
      }
      return v;
    }
};

// { Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
