// LINK=https://practice.geeksforgeeks.org/problems/find-element-occuring-once-when-all-other-are-present-thrice/1/?problemStatus=unsolved&problemType=functional&page=1&sortBy=newest&query=problemStatusunsolvedproblemTypefunctionalpage1sortBynewest#


//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int singleElement(int arr[] ,int N) {
          int ones = 0, twos = 0;
 
        int common_bit_mask;
        for (int i = 0; i < N; i++) {
         
            twos = twos | (ones & arr[i]);
            ones = ones ^ arr[i];
            common_bit_mask = ~(ones & twos);
            ones &= common_bit_mask;
            twos &= common_bit_mask;
        }
     
        return ones;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.singleElement(arr,N);
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends
