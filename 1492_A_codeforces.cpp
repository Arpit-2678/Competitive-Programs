//  LINK=https://codeforces.com/contest/1492/problem/A


#include<bits/stdc++.h>
#define lli long long
using namespace std;
int main()
{
    int t ;
      cin>>t;
      while(t--)
      {
            lli p,a,b,c;
            cin>>p>>a>>b>>c;
            lli x=ceil(p/(a*1.0));
            lli y=ceil(p/(b*1.0));
            lli z=ceil(p/(c*1.0));
            
            a=a*1LL*x;
             b=b*1LL*y;
              c=c*1LL*z;
              
              cout<<min(abs(p-a),min(abs(p-b),abs(p-c)))<<endl;
            
      }
}
