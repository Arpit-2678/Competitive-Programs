// LINK=  https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1#


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      unordered_set<int>st;
      for(int i=0;i<n;i++)
      {
          st.insert(arr[i]);
      }
      int len=1;
      
      for(int i=0;i<n;i++)
      {
          if(st.find(arr[i]-1)==st.end())
          {
              int next_no=arr[i]+1;
              int cnt=1;
              while(st.find(next_no)!=st.end())
              {
                  next_no++;
                  cnt++;
              }
              len=max(len,cnt);
          }
      }
      return len;
      
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends
