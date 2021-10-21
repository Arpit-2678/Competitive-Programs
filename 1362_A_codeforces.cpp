//  LINK=https://codeforces.com/contest/1362/problem/A


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long int x,y;
        cin>>x>>y;
        if(x==y)
        cout<<"0\n";
        // else if(y==1 and (x!=2 or x!=4 or x!=8))
        // cout<<"-1\n";
        else
        {
             unsigned long long int mini,maxi;
                 if(x<y)
                 {
                     mini=x;
                     maxi=y;
                 }
                 else
                 {
                     maxi=x;
                     mini=y;
                 }
                 int cnt=0;
                 while(maxi>mini and maxi%8==0)
                 {
                     maxi/=8;
                     cnt++;
                 }
                 if(maxi<mini)
                 {
                    maxi*=8;
                    cnt--;
                 }
                 
                 while(maxi>mini and maxi%4==0)
                 {
                     maxi/=4;
                     cnt++;
                 }
                 
                 if(maxi<mini)
                 {
                   maxi*=4;
                   cnt--;
                 }
                 
                 while(maxi>mini and maxi%2==0)
                 {
                     maxi/=2;
                     cnt++;
                 }
                 if(maxi==mini)
                 cout<<cnt<<"\n";
                 else
                 cout<<"-1\n";
                 
             
        }
    }
}
