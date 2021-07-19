//  LINK=https://practice.geeksforgeeks.org/problems/largest-subarray-of-0s-and-1s/1/?problemStatus=unsolved&problemType=functional&page=2&sortBy=submissions&query=problemStatusunsolvedproblemTypefunctionalpage2sortBysubmissions#



#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this method*/

// arr[] : the input array containing 0s and 1s
// N : size of the input array

// return the maximum length of the subarray
// with equal 0s and 1s
class Solution{
  public:
    int maxLen(int arr[], int N)
    {
        int pre=0;
        int len=0;
        int sum=0;
        unordered_map<int,int>ump;
        for(int i=0;i<N;i++)
        {
            if(arr[i]==0)
            sum+=-1;
            else
            sum+=arr[i];
            if(sum==0)
            len=max(len,i+1);
            if(ump.find(sum)!=ump.end())
            {
                len=max(len,i-ump[sum]);
            }
            else
            ump[sum]=i;
            
            
        }
        return len;
    }
};


// { Driver Code Starts.

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.maxLen(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends
