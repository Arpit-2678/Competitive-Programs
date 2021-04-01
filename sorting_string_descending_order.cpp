// LINK=https://practice.geeksforgeeks.org/problems/sort-the-string-in-descending-order3542/1/?category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&problemStatus=unsolved&problemType=functional&page=1&sortBy=newest&query=category[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]HashproblemStatusunsolvedproblemTypefunctionalpage1sortBynewestcategory[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]Hash#



#include <bits/stdc++.h>
using namespace std;
string ReverseSort(string str);

int main(){
    int t;
    cin >> t;
    while(t--){

        string s;
        cin >> s;
        cout << ReverseSort(s) << endl;
    }
return 0;
}
// } Driver Code Ends



string ReverseSort(string str){
      int arr[26]{0};
      for(int i=0;i<str.size();i++)
      {
          arr[str.at(i)-'a']++;
      }
      str.clear();
      for(int i=25;i>=0;i--)
      {
          if(arr[i]>0)
          {
              while(arr[i]!=0)
              {
                  str.push_back((i+'a'));
                  arr[i]--;
              }
          }
      }
      return str;
}
