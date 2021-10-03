//  LINK=https://codeforces.com/contest/462/problem/B



#include<bits/stdc++.h>
#define lli long long
using namespace std;
int main()
{
    int n,m;
      cin>>n>>m;
      string str;
      cin>>str;
      unordered_map<char,int>umap;
      priority_queue<int>pq;
      for(auto it:str)
        umap[it]++;
        
        
        for(auto it:umap)
          {  pq.push(it.second);
          
          }
          
            lli ans=0;
          while(m>0 and !pq.empty())
          {
                 if(pq.top()>m)
                 {
                         ans=ans+(m*1LL*m);
                         pq.pop();
                         m=0;
                 }
                 else
                 {
                       ans=ans+(pq.top()*1LL*pq.top());
                        m-=pq.top();
                       pq.pop();
                      
                 }
          }
          cout<<ans<<endl;
}
