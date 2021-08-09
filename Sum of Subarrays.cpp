// LINK=https://practice.geeksforgeeks.org/problems/sum-of-subarrays2229/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&problemType=functional&difficulty[]=1&page=2&sortBy=submissions&query=category[]ArraysproblemStatusunsolvedproblemTypefunctionaldifficulty[]1page2sortBysubmissionscategory[]Arrays#



#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

const long inf=1e9+7;
class Solution{   
public:
    long long subarraySum(long long a[], long long n)
    {
       long long res=0;
       for(long long i =0;i<n;i++)
       {
           res+=((a[i]%inf)*((i+1)%inf)*1LL*((n-i)%inf))%inf;
       }
       return res%inf;
      
    }
};

// { Driver Code Starts.
int main()
 {
     long long t; 
     cin>>t;
     while(t--)
     {
         long long n; cin>>n;
         long long a[n+5];
         for(long long i=0;i<n;i++)
         cin>>a[i];
         Solution ob;
         cout<<ob.subarraySum(a, n)<<endl;
     }
    return 0;
}
  // } Driver Code Ends
