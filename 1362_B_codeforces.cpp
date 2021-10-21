//  LINK=https://codeforces.com/contest/1362/problem/B


#include<bits/stdc++.h>
#define endl "\n"
#define int  long long int
using namespace std;


signed main()
{  
        int t;
        cin>>t;
        while(t--)
        {
               int n;
               cin>>n;
               int arr[n]{0};
               set<int>st;
               for(int i=0;i<n;i++)
               {
               
                       cin>>arr[i];
                       st.insert(arr[i]);
               }
               bool flag=false;
               set<int>st1;
               for(int i=1;i<=2000;i++)
               {     
                  
                     for(int j=0;j<n;j++)
                     {
                         st1.insert((arr[j]^i));
                              
                     }
                     if(st==st1)
                     {  cout<<i<<endl;
                         flag=true;
                         break;
                     }
               
                     st1.clear();
                     
                }
               
                
                if(flag==false)
                 {
                     cout<<"-1"<<endl;
                 }
                
               
               
             
             
        }
}
