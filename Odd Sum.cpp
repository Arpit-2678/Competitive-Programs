// LINK=https://www.codechef.com/COOK134B/problems/ODDSUM



#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<bits/stdc++.h>
#define ll long long int
#define test while(t--)
#define pb push_back
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
      int t;
     cin>>t;
    test{
         
          ll n;
          cin>>n;
          if(n==1 or n==2)
           {
               cout<<1<<"\n";
           }
           else
           {
          int i=2;
          ll sum=1;
          n-=2;
           sum+=(n*1LL*(n+1));
          cout<<sum<<"\n";
           }
           
           
           
           
     }
   
   
	return 0;
}
