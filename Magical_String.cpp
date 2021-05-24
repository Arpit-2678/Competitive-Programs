// LINK=https://practice.geeksforgeeks.org/problems/magical-string3653/0/?page=1&sortBy=newest&category[]=Arrays&category[]=Strings&category[]=Hash&query=page1sortBynewestcategory[]Arrayscategory[]Stringscategory[]Hash#


#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string magicalString(string S){
          char ch='z';
          char arr[26];
          for(int i=0;i<26;i++)
          {
              arr[i]=ch--;
          }
          for(int i=0;i<S.size();i++)
          {
              S.at(i)=(arr[S.at(i)-'a']);
          }
          return S;
        // code here 
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.magicalString(S) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends
