/* LINK=https://practice.geeksforgeeks.org/problems/index-of-an-extra-element/1/?category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&query=category[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]HashproblemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscategory[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]Hash#  */



#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
  public:
    int findExtra(int a[], int b[], int n) {
           int start=0;
           int end=n-2;
           int idx=n-1;
           while(start<=end)
           {
               int mid=(start+end)/2;
               if(a[mid]==b[mid])
               {
                   start=mid+1;
               }
               else
               {
                    idx=mid;
                    end=mid-1;
               }
                
           }
        //   if(idx==0)
        //   return n-1;
        //   else
           return idx;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n - 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }
        Solution obj;
        cout << obj.findExtra(a, b, n) << endl;
    }
}  // } Driver Code Ends
