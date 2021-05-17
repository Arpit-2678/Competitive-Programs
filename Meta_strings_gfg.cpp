// LINK=https://practice.geeksforgeeks.org/problems/meta-strings5713/1/?problemStatus=unsolved&problemType=functional&difficulty[]=0&difficulty[]=1&page=1&sortBy=newest&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=STL&category[]=number-theory&category[]=Modular%20Arithmetic&category[]=sliding-window&query=problemStatusunsolvedproblemTypefunctionaldifficulty[]0difficulty[]1page1sortBynewestcategory[]Arrayscategory[]Stringscategory[]Hashcategory[]STLcategory[]number-theorycategory[]Modular%20Arithmeticcategory[]sliding-window#


#include<bits/stdc++.h>
using namespace std;
bool metaStrings (string s1, string s2);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << metaStrings (s1, s2) << endl;
    }
}
// Contributed By: Pranay Bansal
// } Driver Code Ends



bool metaStrings (string s1, string s2)
{
      if(s1==s2)
      return false;
      else if(s1.size()>s2.size() or s2.size()>s1.size())
       return false;
     else
     {
          int  flag=0,flag1=0,x=0;
          char ch1[2];
         for(int i=0;i<s1.size();i++)
         {
             char ch=s1.at(i);
             if(ch!=s2.at(i))
             {
                flag++;
               
                if(flag>2)
                {
                    flag1++;
                    break;
                }
                 ch1[x++]=ch;
             }
         }
         if(flag1)
         return false;
         else
         {
         if(flag==2)
         {
             int cnt=0;
             for(int i=0;i<2;i++)
             {
                 if(s2.find(ch1[i])!=string::npos)
                 {
                     cnt++;
                 }
             }
             if(cnt==2)
             return true;
             else
             return false;
         }
     }
     }
}
