//  LINK=https://codeforces.com/contest/106/problem/A


#include<bits/stdc++.h>
using namespace std;
int main()
{
    char t;
      cin>>t;
      string a,b;
      cin>>a>>b;
      unordered_map<char,int>umap;
      int i=1;
      umap['6']=i++;
      umap['7']=i++;
      umap['8']=i++;
      umap['9']=i++;
      umap['T']=i++;
      umap['J']=i++;
      umap['Q']=i++;
      umap['K']=i++;
      umap['A']=i++;
      
      if(a.at(1)==t and b.at(1)!=t)
       {
       
              cout<<"YES"<<endl;
       }
       else
       {
               if(a.at(1)==b.at(1))
                {
                      if(umap[a.at(0)]>umap[b.at(0)])
                         {
                             cout<<"YES"<<endl;
                         }
                         else
                         cout<<"NO"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
       }
}
