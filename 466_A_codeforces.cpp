// LINK=https://codeforces.com/contest/466/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
       cin>>n>>m>>a>>b;
       int ans1,ans2;
       if(n%m==0)
       {
            ans1=(n/m)*b;
            ans2=n*a;
            cout<<min(ans1,ans2)<<endl;
       }
       else
       {     
            int ans3=ceil(n/(m*1.0));
            ans3*=b;
           
            int rem=n%m;
            ans1=(n/m)*b + (rem)*a;
            ans2=(n*a);
            cout<<min(min(ans1,ans3),ans2)<<endl;
            
            
       }
}
