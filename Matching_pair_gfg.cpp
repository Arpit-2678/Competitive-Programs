// LINK=https://practice.geeksforgeeks.org/problems/matching-pair5320/1/?problemStatus=unsolved&problemType=functional&page=1&sortBy=accuracy&query=problemStatusunsolvedproblemTypefunctionalpage1sortByaccuracy#


#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int find(int N){ 
        return N+1;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.find(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends
