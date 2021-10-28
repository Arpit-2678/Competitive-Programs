// LINK=https://codeforces.com/contest/27/problem/A


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>>pq;
    int x;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        pq.push(x);
        
    }
    for(int i=1;i<=3005;i++)
    {
        if(i!=pq.top())
        {
             cout<<i<<"\n";
             return 0;
        }
        pq.pop();
       
    }
}
