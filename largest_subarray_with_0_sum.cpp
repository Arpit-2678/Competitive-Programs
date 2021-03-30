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
      cout<<arr[i]<<" ";
    }
    cout<<"\n"<<arr[0]<<" ";
    for(int i=1;i<n;i++)
    {
      arr[i]=arr[i]+arr[i-1];
      cout<<arr[i]<<" ";
    }
    cout<<"\n";
  unordered_map<int,int>umap;
  int max_len=-1;
  for(int i=0;i<n;i++)
  {
    if(umap.count(arr[i]))
    {
      if(arr[i]==0)
      {
        max_len=max(max_len,i+1);
      }
      else
      {
        max_len=max(max_len,i-umap[arr[i]]);
      }
    }
    else
      umap[arr[i]]=i;
  }
  for(auto it:umap)
  {
    cout<<it.first<<" "<<it.second<<"\n";
  }
  cout<<max_len<<"\n";

}
