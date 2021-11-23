// LINK=https://codeforces.com/problemset/problem/1612/B


#include<bits/stdc++.h>
using namespace std;
 int main()
 {
  int t;
     cin>>t;
    while(t--){
         
           int n,min,max;
             cin>>n>>min>>max;
             
             set<int>st;
             for(int i=1;i<=n;i++)
               {    if(i!=min and i!=max)
                   st.insert(i);
                   
               }
               vector<int>v;
               bool flag=true;
               
               v.push_back(min);
               for(int i=1;i<n/2;i++)
               {
               
                      if(*st.rbegin()<min)
                      {
                          flag=false;
                          break;
                          
                      }
                      else
                      v.push_back(*st.rbegin());
                      st.erase(*st.rbegin());
                      
               }
               
               if(flag)
               {
                   v.push_back(max);
                   for(int i=1;i<n/2;i++)
                   {
                      
                      if(*st.begin()>max)
                      {
                          flag=false;
                          break;
                          
                      }
                      else
                      v.push_back(*st.begin());
                      st.erase(*st.begin());
                   }
                   
                   if(flag==false)
                   {
                       cout<<"-1"<<endl;
                   }
                   else
                   {
                       for(auto it:v)
                         cout<<it<<" ";
                         cout<<endl;
                   }
               }
               else
               cout<<"-1"<<endl;
               
       
           
            }
    }
