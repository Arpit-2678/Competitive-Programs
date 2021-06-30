// LINK=https://practice.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1#


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    int longestKSubstr(string s, int k) {
          int i=0,j=0,ans=INT_MIN;
          unordered_map<char,int>ump;
          while(j<s.size())
          {
              ump[s.at(j)]++;
              if(ump.size()<k)
              {
                  j++;
              }
              else if(ump.size()==k)
              {
                  ans=max(ans,(j-i+1));
                   j++;
              }
              else if(ump.size()>k)
              {
                  while(i<s.size() and ump.size()>k)
                  {
                      ump[s.at(i)]--;
                      if(ump[s.at(i)]==0)
                      ump.erase(s.at(i));
                      
                      i++;
                  }
                   j++;
              }
          }
          if(ump.size()<k)
          return -1;
          else
          return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}
  // } Driver Code Ends
