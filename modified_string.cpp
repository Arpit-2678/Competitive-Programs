// LINK=https://practice.geeksforgeeks.org/problems/the-modified-string-1587115621/1/?category[]=Arrays&category[]=Strings&category[]=Hash&category[]=Arrays&category[]=Strings&category[]=Hash&problemStatus=unsolved&problemType=functional&page=3&sortBy=submissions&query=category[]Arrayscategory[]Stringscategory[]HashproblemStatusunsolvedproblemTypefunctionalpage3sortBysubmissionscategory[]Arrayscategory[]Stringscategory[]Hash#



#include<bits/stdc++.h>
#define br char xx; cin>>xx; cout<<xx<<endl;
#define lli long long int
using namespace std;


 // } Driver Code Ends


class Solution{
  public:
    int modified (string str){
        int cnt=0,tcnt=0;
        string temp="#";
        char ch=str.at(0);
        for(int i=1;i<str.size();i++)
        {
            if(str.at(i)==ch)
            {
                tcnt++;
                
            }
            else
            tcnt=0;
            if(tcnt==2)
            {
                cnt++;
                str.insert(i,temp);
                tcnt=0;
            }
            ch=str.at(i);
        }
        return cnt;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    string a;
    while(t--){
        cin>>a;
        Solution obj;
        cout<<obj.modified(a)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
