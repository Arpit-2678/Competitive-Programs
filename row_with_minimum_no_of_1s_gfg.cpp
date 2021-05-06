// LINK=https://practice.geeksforgeeks.org/problems/row-with-minimum-number-of-1s5430/1/?problemStatus=unsolved&problemType=functional&page=1&sortBy=newest&query=problemStatusunsolvedproblemTypefunctionalpage1sortBynewest#



#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minRow(int N, int M, vector<vector<int>> A) {
         int cnt=0,pos=0;
        int mini=INT_MAX, posi=INT_MAX;
         
         int sum=0;
         for(auto it:A)
         {
             
                  sum=accumulate(it.begin(),it.end(),0);
             
             if(sum<mini)
             {
                 
                 mini=sum;
                 posi=pos;
             }
             pos++;
             sum=0;
             
         }
         return posi+1;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> A(N, vector<int>(M));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> A[i][j];
            }
        }
        Solution ob;
        cout << ob.minRow(N, M, A) << "\n";
    }
}  // } Driver Code Ends
