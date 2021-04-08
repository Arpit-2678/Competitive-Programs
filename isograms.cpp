// LINK=https://practice.geeksforgeeks.org/problems/check-if-a-string-is-isogram-or-not-1587115620/1/?category[]=Hash&category[]=Hash&problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&query=category[]HashproblemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscategory[]Hash#



#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
  public:
    //Complete this function
    bool isIsogram(string s)
    {
        unordered_set<char>ust;
        char ch;
        for(int  i=0;i<s.size();i++)
        {
            ch=s.at(i);
            if(ust.find(ch)!=ust.end())
            {
                return false;
            }
            else
            ust.insert(ch);
        }
        return true;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.isIsogram(s)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
