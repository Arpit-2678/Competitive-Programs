//  LINK=https://practice.geeksforgeeks.org/problems/nth-fibonacci-number1335/1#



// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
const long inf=1e9+7;
class Solution {
  public:
    long long int nthFibonacci(long long int n){
       long long int a=0;
       long long int b=1;
       long long int c=0;
       for(long long int i=2;i<=n;i++)
       {
           c=(a%inf)+(b%inf);
           a=b;
           b=c;
       }
       return (c%inf);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends
