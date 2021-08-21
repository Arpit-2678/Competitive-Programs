//  LINK=https://www.codechef.com/PRACTICE/problems/TSECJ05

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{   
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t;
   cin>>t;
   while(t--)
   {
   ll k,n;
   cin>>k>>n;
   if(k>n)
   {
       for(int i=0;i<n;i++)
       cout<<"-1 ";
       cout<<"\n";
   }
   else
   {
   int arr[n]{0};
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   priority_queue<ll,std::vector<ll>,greater<ll>>pq ;
   for(int i=0;i<(k-1);i++)
   {
       pq.push(arr[i]);
       cout<<"-1 ";
   }
   pq.push(arr[k-1]);
   cout<<pq.top()<<" ";
  for(int i=k;i<n;i++)
   {
        if(arr[i]>pq.top())
        {
            pq.pop();
          pq.push(arr[i]);
        }
       cout<<pq.top()<<" ";
   }
   cout<<"\n";
   }
   }
 }
