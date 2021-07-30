#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    int arr[n] {0};
    int t_sum=0;
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
      t_sum+=arr[i];
    }
    int sum=0,flag=0;
    for(int i=1;i<n;i++)
    {
      sum+=arr[i-1];
      if(sum==(t_sum-sum-arr[i]))
      {
        cout<<i<<endl;
        flag++;
        break;
      }
    }
    if(flag==0)
    {
      cout<<-1<<endl;
    }
}
