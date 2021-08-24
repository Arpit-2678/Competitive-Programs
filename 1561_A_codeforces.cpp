//  LINK=https://codeforces.com/contest/1561/problem/A

#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int
using namespace std;
const int M=1e9+7;

int main()
{    fastio;
      int t;
      cin>>t;
      while(t--)
      {
            int n;
            cin>>n;
          
            int arr[n]{0};
            for(int i=0;i<n;i++)
            {cin>>arr[i];
            
               
            }
             int cnt=0;
            while(!(is_sorted(arr,arr+n)))
             {
                  for(int i=1;i<n;i++)
                  {
                      if(i&1)
                       {
                            for(int j=0;j<n;j+=2)
                             {
                                 if(j+1<n and arr[j]>arr[j+1])
                                     swap(arr[j],arr[j+1]);
                                 
                             }
                             cnt++;
                       }
                       else
                       {
                            for(int j=1;j<n;j+=2)
                             {
                                 if(j+1<n and arr[j]>arr[j+1])
                                     swap(arr[j],arr[j+1]);
                                 
                             }
                             cnt++;
                       }
                       if(is_sorted(arr,arr+n))
                          break;
                  }
             }
             cout<<cnt<<endl;
           
            
            
      }
 
}
