// LINK=https://practice.geeksforgeeks.org/problems/remove-duplicates-in-small-prime-array/1/?category[]=Hash&category[]=Hash&problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&query=category[]HashproblemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscategory[]Hash#



#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
  public:
    vector<int> removeDuplicate(vector<int>& arr, int n)
    {
        unordered_set<int>ust;
        vector<int>v;
        for(auto it:arr)
        {
            if(ust.find(it)==ust.end())
            {
                ust.insert(it);
                v.push_back(it);
            }
        }
        return v;
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        vector<int> A(N);
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        Solution obj;
        vector<int>result = obj.removeDuplicate(A,N);
        for(int i =0;i<result.size();i++)
            cout<<result[i]<<" ";
        cout<<endl;

    }
}
  // } Driver Code Ends
