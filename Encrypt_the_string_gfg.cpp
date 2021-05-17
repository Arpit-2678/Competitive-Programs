// LINK=https://practice.geeksforgeeks.org/problems/encrypt-the-string-21117/1/?problemStatus=unsolved&problemType=functional&difficulty[]=0&difficulty[]=1&page=1&sortBy=newest&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=STL&category[]=number-theory&category[]=Modular%20Arithmetic&category[]=sliding-window&query=problemStatusunsolvedproblemTypefunctionaldifficulty[]0difficulty[]1page1sortBynewestcategory[]Arrayscategory[]Stringscategory[]Hashcategory[]STLcategory[]number-theorycategory[]Modular%20Arithmeticcategory[]sliding-window#



#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    string encryptString(string s) {
           
           s.push_back('@');
           int x=1;
           char ch=s.at(0);
            string str;
            //cout<<s<<"\n";
            
          for(int i=1;i<s.size();i++)
          {
               if(ch==s.at(i))
               {
                   x++;
               }
               else if(s.at(i)=='@')
               {
                   str.push_back(ch);
                    if(x==10)
              {
                  str.push_back('a');
              }
              else if(x==11)
              {
                  str.push_back('b');
              }
              else if(x==12)
              {
                  str.push_back('c');
              }
              else if(x==13)
              {
                  str.push_back('d');
              }
              else if(x==14)
              {
                  str.push_back('e');
              }
              else if(x==15)
              {
                  str.push_back('f');
              }
              else if(x>15)
              {
                  std::stringstream ss;
                ss<< std::hex <<x; // int decimal_value
                 std::string res ( ss.str() );
                 for(int i=res.size()-1;i>=0;i--)
                 {
                     str.push_back(res.at(i));
                 }
              }
              else
              str.push_back((char)x+'0');
                
                
                   break;
               }
              else {
                   str.push_back(ch);
                    if(x==10)
              {
                  str.push_back('a');
              }
              else if(x==11)
              {
                  str.push_back('b');
              }
              else if(x==12)
              {
                  str.push_back('c');
              }
              else if(x==13)
              {
                  str.push_back('d');
              }
              else if(x==14)
              {
                  str.push_back('e');
              }
              else if(x==15)
              {
                  str.push_back('f');
              }
               else if(x>15)
              {
                  std::stringstream ss;
                ss<< std::hex <<x; // int decimal_value
                 std::string res ( ss.str() );
                 for(int i=res.size()-1;i>=0;i--)
                 {
                     str.push_back(res.at(i));
                 }
              }
              else
              str.push_back((char)x+'0');
                
                 x=1;
                 ch=s.at(i);
               }
          }
         // cout<<x<<"\n";
        //   auto it=unique(s.begin(),s.end());
        //   s.resize(distance(s.begin(),it));
         
        //   for(int i=0;i<s.size();i++)
        //   {
        //       str.push_back(s.at(i));
        //       int x=arr[s.at(i)-'a'];
             
        //   }
         
          reverse(str.begin(),str.end());
          return str;
    }
};

// { Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;

        Solution ob;
        cout<<ob.encryptString(S)<<endl;
    }
    return 0;
}  // } Driver Code Ends
