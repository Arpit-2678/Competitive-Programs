#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int arr[n]{0};
  for(int i=0;i<n;i++)
  {
     cin>>arr[i];
     
    }
  
    for(int i=1;i<n;i++)
    {
      arr[i]=arr[i]+arr[i-1];
     
    }
    
  unordered_map<int,int>umap;
  int max_len=0;
  for(int i=0;i<n;i++)
  {
     if(arr[i]==0)
      {
        max_len=max(max_len,i+1);
      }
    if(umap.count(arr[i]))
    {
     
      
        max_len=max(max_len,i-umap[arr[i]]);
      
    }
    else
      umap[arr[i]]=i;
  }
 
  cout<<max_len<<"\n";

}
