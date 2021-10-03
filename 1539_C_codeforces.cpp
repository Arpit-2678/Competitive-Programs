//  LINK=https://codeforces.com/contest/1539/problem/C


#include<bits/stdc++.h>
#define lli long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    lli n,k,x;
        cin>>n>>k>>x;
        lli arr[n]{0};
        
        for(lli i=0;i<n;i++)
        {
             cin>>arr[i];
        }
        sort(arr,arr+n);
        set<pair<lli,lli>>st;
        
        lli ini=0;
        for(lli i=1;i<n;i++)
        {
               if(arr[i]-arr[i-1]>x)
                   { ini++;
                   
                      lli y=ceil((arr[i]-arr[i-1])/(x*1.0));
                        y-=1;
                        st.insert({y,i});
                   
                   }
        }
       for(auto it:st)
       {
             if(k>=it.first)
              {
                  k-=it.first;
                  ini--;
                 
              }
             
       }
       cout<<ini+1<<endl;
}
