//  LINK=https://codeforces.com/contest/1358/problem/C


#include<bits/stdc++.h>
using namespace std;
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        cout<<((x2-x1)*1LL*(y2-y1))+1<<"\n";
    }
}
