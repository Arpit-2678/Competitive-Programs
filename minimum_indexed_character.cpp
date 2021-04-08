// LINK=https://practice.geeksforgeeks.org/problems/minimum-indexed-character-1587115620/1/?category[]=Hash&category[]=Hash&problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&query=category[]HashproblemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscategory[]Hash#



// C++ implementation to find the character in first 
// string that is present at minimum index in second
// string
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
  public:
    int minIndexChar(string str, string patt)
    {
        unordered_set<char>st;
        for(auto it:patt)
        {
            st.insert(it);
        }
        for(int i=0;i<str.size();i++)
        {
            if(st.find(str.at(i))!=st.end())
             return i;
        }
        return -1;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    string patt;
	    cin>>str;
	    cin>>patt;
	    Solution obj;
	    int ans = obj.minIndexChar(str, patt);
	    if(ans == -1)cout<<"No character present";
	    else cout<<str[ans];
	    cout<<endl;
	}return 0;
}
  // } Driver Code Ends
