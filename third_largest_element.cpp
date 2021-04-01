// LINK=https://practice.geeksforgeeks.org/problems/third-largest-element/1/?category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&query=category[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]HashproblemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscategory[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]Hash#

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int arr[], int n)
    {
         if(n<3)
         return -1;
         int maxi=INT_MIN;
         int pos=-1;
         for(int i=0;i<n;i++)
         {
             if(arr[i]>maxi)
             {
                 maxi=arr[i];
                 pos=i;
             }
         }
         arr[pos]=-1;
         pos=-1;
         maxi=INT_MIN;
          for(int i=0;i<n;i++)
         {
             if(arr[i]>maxi)
             {
                 maxi=arr[i];
                 pos=i;
             }
         }
          arr[pos]=-1;
         pos=-1;
         maxi=INT_MIN;
          for(int i=0;i<n;i++)
         {
             if(arr[i]>maxi)
             {
                 maxi=arr[i];
                 pos=i;
             }
         }
         return maxi;
         
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
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}     // } Driver Code Ends
