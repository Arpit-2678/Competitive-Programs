// LINK=https://practice.geeksforgeeks.org/problems/-regex-matching1145/1/?category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&problemStatus=unsolved&problemType=functional&page=1&sortBy=newest&query=category[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]HashproblemStatusunsolvedproblemTypefunctionalpage1sortBynewestcategory[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]Hash#


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int isPatternPresent(string S, string P) {
      
        if(P.at(0)=='^')
        {
            for(int i=1;i<P.size();i++)
            {
                if(P.at(i)!=S.at(i-1))
                  return 0;
            }
            return 1;
        }
        else if(P.at(P.size()-1)=='$')
        {
            int k=0;
            for(int i=S.size()-P.size()+1;i<S.size();i++)
            {
                if(P.at(k++)!=S.at(i))
                  return 0;
            }
            return 1;
        }
        else
        {
           if(S.find(P)==string::npos)
           return 0;
           else
           return 1;
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string P,S;

        cin>>P;
        cin>>S;

        Solution ob;
        cout << ob.isPatternPresent(S,P) << endl;
    }
    return 0;
}  // } Driver Code Ends
