// LINK=https://www.hackerearth.com/practice/algorithms/string-algorithm/string-searching/practice-problems/algorithm/make-them-equal-ac0bab4a/

#include <bits/stdc++.h>
using namespace std;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t;
   cin>>t;
   while(t--)
   {
      int n;
      cin>>n;
      string str1,str2;
      cin>>str1>>str2;
      unordered_map<char,int>ump1,ump2;
      for(int i=0;i<n;i++)
      {
        char ch2=str2.at(i);
        if(ch2!='?')
        ump2[ch2]++;
      }
      
      int cnt1=0,cnt2=0;
      for(auto it:str1)
      {
         if(it!='?')
         {
            if(ump2.find(it)!=ump2.end())
            {
               ump2[it]=ump2[it]-1;
               if(ump2[it]==0)          
               ump2.erase(it);
            }
            else
            cnt1++;
         }
      }
      if(cnt1>1)
      cout<<"NO\n";
      else{
         for(auto it:ump2)
         cnt2+=it.second;

         if(cnt2<=1)
         cout<<"YES\n";
         else
         cout<<"NO\n";


      }

      
   }
}
