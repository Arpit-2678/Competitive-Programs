// LINK=https://practice.geeksforgeeks.org/problems/non-repeating-element3958/1/?category[]=Strings&category[]=Hash&category[]=Strings&category[]=Hash&problemStatus=unsolved&problemType=functional&difficulty[]=0&difficulty[]=1&page=1&sortBy=accuracy&query=category[]Stringscategory[]HashproblemStatusunsolvedproblemTypefunctionaldifficulty[]0difficulty[]1page1sortByaccuracycategory[]Stringscategory[]Hash#


#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends


class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
         //int brr[2*n+1]{0};
         unordered_map<int,int>umap;
         
         for(int i=0;i<n;i++)
         {
             umap[arr[i]]++;
         }
         for(int i=0;i<n;i++)
         {
             if(umap[arr[i]]==1)
             return arr[i];
         }
         return 0;
        
    } 
  
};


// { Driver Code Starts.

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.firstNonRepeating(arr,n)<<endl;
    }
}
  // } Driver Code Ends
