//  LINK=https://codeforces.com/contest/143/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r1,r2,c1,c2,d1,d2;
       cin>>r1>>r2>>c1>>c2>>d1>>d2;
       
       int c=((c1-r1)+d2)/2;
       set<pair<int,int>>st;
       
       if(c<=0)
        { cout<<"-1"<<endl;
        }
        else
        {  unordered_set<int>st;
        
        int a=(c1-c);
        int b=(d2-c);
        int d=(r2-c);
        if(a<=0 or b<=0 or c<=0 or d<=0 or a>9 or b>9 or c>9 or d>9 or a+b!=r1 or a+d!=d1 or a+c!=c1 or b+d!=c2 or b+c!=d2 or c+d!=r2 )
          {
              cout<<"-1";
          }
          else
          {
           st.insert({a,b});
           st.insert({b,a});
           st.insert({d,c});
           st.insert({c,d});
                 if(st.size()==4)
                cout<<a<<" "<<b<<endl<<c<<" "<<d;
                else
                cout<<"-1"<<endl;
          }
          
                
        }
}
