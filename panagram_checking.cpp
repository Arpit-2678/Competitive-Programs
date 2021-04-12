// LINK=https://practice.geeksforgeeks.org/problems/pangram-checking-1587115620/1/?category[]=Arrays&category[]=Strings&category[]=Hash&category[]=Arrays&category[]=Strings&category[]=Hash&problemStatus=unsolved&problemType=functional&page=2&sortBy=submissions&query=category[]Arrayscategory[]Stringscategory[]HashproblemStatusunsolvedproblemTypefunctionalpage2sortBysubmissionscategory[]Arrayscategory[]Stringscategory[]Hash



#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
  public:
    // Returns true if the string is pangram else false
    bool checkPangram (string &str)
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        int arr[26]{0};
        for(auto it:str)
        {
            if(it>='a' and it<='z')
            arr[it-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(arr[i]==0)
            return false;
        }
        return true;
    }


};

// { Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string str;
        getline(cin, str);
        Solution obj;
        if (obj.checkPangram(str) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}
  // } Driver Code Ends
