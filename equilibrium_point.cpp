// LINk=https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1/?category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=logical-thinking&category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=logical-thinking&problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&query=category[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]Hashcategory[]logical-thinkingproblemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscategory[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]Hashcategory[]logical-thinking#   */




#include <iostream>
using namespace std;


 // } Driver Code Ends

#include<bits/stdc++.h>
class Solution{
    
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    
    int equilibriumPoint(long long a[], int n) {
    
       if(n==1)
       return n;
        long long sum=accumulate(a,a+n,0);
        //cout<<sum<<" ";
        long long rsum=0;
        long long lsum=0;
        for(long long i=0;i<n;i++)
        {
          rsum=sum-a[i]-lsum; 
          if(rsum==lsum)
           return i+1;
           lsum+=a[i];
        }
        return -1;
        
    }

};

// { Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends
