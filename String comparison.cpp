//  LINK=https://practice.geeksforgeeks.org/problems/string-comparison5858/1/?category[]=Strings&category[]=Strings&company[]=Microsoft&company[]=Microsoft&problemStatus=unsolved&problemType=functional&difficulty[]=0&page=1&sortBy=submissions&query=category[]Stringscompany[]MicrosoftproblemStatusunsolvedproblemTypefunctionaldifficulty[]0page1sortBysubmissionscompany[]Microsoftcategory[]Strings#


#include <bits/stdc++.h>
using namespace std;


int stringComparsion(string s1, string s2);


int main() 
{


   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s1, s2;
   		cin >> s1 >> s2;

   		
   		cout << stringComparsion(s1, s2) << "\n";
   	}

    return 0;
}
// } Driver Code Ends




int stringComparsion(string s1,string s2)
{ 
    
    // if(s1.find("ng")==string::npos and s2.find("ng")==string::npos)
    // {
    //       int x=s1.compare(s2);
    //       return x;
    // }
        int len=min(s1.length(),s2.length());
        int cnt=0;
       
       for(int i=0;i<len;i++)
       {
         
           if(s1.at(i)=='n' and s2.at(i)=='n')
           {
               
                string t1,t2;
               t1.push_back(s1.at(i));
               t2.push_back(s2.at(i));
               if(i+1<s1.size() and s1.at(i+1)=='g')
               t1.push_back(s1.at(i+1));
               if(i+1<s2.size() and s2.at(i+1)=='g')
               t2.push_back(s2.at(i+1));
               
               int x=t1.compare(t2);
               if(x>0)
               {
                   cnt++;
                   return 1;
               }
               else if(x<0)
               {
                   cnt++;
                   return -1;
               }
            }
            if(s1.at(i)>s2.at(i))
            {   
                cnt++;
                return 1;}
            if(s1.at(i)<s2.at(i))
            {   
                cnt++;
                return -1;
            }

           
       }
       if(!cnt)
       {
            if(s1.size()>s2.size())
            return 1;
            else if(s1.size()<s2.size())
            return -1;
            else
            return 0;
       }
       return 0;
}
