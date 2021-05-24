// LINK=https://practice.geeksforgeeks.org/problems/find-the-most-frequent-digit4432/0/?page=1&sortBy=newest&category[]=Arrays&category[]=Strings&category[]=Hash&query=page1sortBynewestcategory[]Arrayscategory[]Stringscategory[]Hash#



#include <bits/stdc++.h>
using namespace std;

int solve(string s);
int main()
{
    int testcases;
    cin>>testcases;
    
    while(testcases--)
    {
        string s;
        cin>>s;
        cout<<solve(s)<<endl;
        
    }
}// } Driver Code Ends



int solve(string n)
{
  int arr[10] {0};
  for(auto it:n)
  {
      arr[it-'0']++;
  }
  int pos,maxi=INT_MIN;
  for(int i=0;i<10;i++)
  {
      if(arr[i]>=maxi)
      {
        maxi=arr[i];
        pos=i;
      }
  }
   return pos;
    
    
}
