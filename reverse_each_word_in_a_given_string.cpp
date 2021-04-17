// LINK=https://practice.geeksforgeeks.org/problems/reverse-each-word-in-a-given-string1001/1/?category[]=Strings&category[]=Hash&category[]=Strings&category[]=Hash&problemStatus=unsolved&problemType=functional&difficulty[]=0&difficulty[]=1&page=1&sortBy=accuracy&query=category[]Stringscategory[]HashproblemStatusunsolvedproblemTypefunctionaldifficulty[]0difficulty[]1page1sortByaccuracycategory[]Stringscategory[]Hash#



#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
            stack<string>st;
            
            reverse(s.begin(),s.end());
            s.push_back('.');
            string temp="";
            for(int i=0;i<s.size();i++)
            {
                if(s.at(i)=='.')
                {
                    temp.push_back(s.at(i));
                  st.push(temp);
                  temp.clear();
                }
                else
                {
                   temp.push_back(s.at(i));
                }
            }
             string ans="";
            while(!st.empty())
            {
                ans+=st.top();
                st.pop();
            }
            ans.pop_back();
            return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends
