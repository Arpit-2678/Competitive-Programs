//  LINK=https://codeforces.com/contest/474/problem/B


#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin>>n;
   int x;
   int arr[n]{0};
   cin>>arr[0];
   for(int i=1;i<n;i++)
   {
       cin>>x;
       arr[i]=arr[i-1]+x;
   }
   int query;
   cin>>query;
   while(query--)
   {
       int ask;
       cin>>ask;
       
       auto it=lower_bound(arr,arr+n,ask);
       int dist=it-arr;
       cout<<dist+1<<"\n";
 
   }
}
