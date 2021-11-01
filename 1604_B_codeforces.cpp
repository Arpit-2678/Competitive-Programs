//  LINK=https://codeforces.com/contest/1604/problem/B


#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
    while(t--){
          int n;
          cin>>n;
          int arr[n]{0};
          for(int i=0;i<n;i++)
          {
               cin>>arr[i];
          }
           if(!(n&1))
            {
                cout<<"YES"<<endl;
            }
            else
            {   bool flag=false;
                 for(int i=0;i<n-1;i++)
                 {
                 
                       if(arr[i]>=arr[i+1])
                          {
                             flag=true;
                             break;
                          }
                          
                          
                 }
                 
                 if(flag)
                  cout<<"YES"<<endl;
                  else
                  cout<<"NO"<<endl;
                 
                
            }
         
           
     }
}
