//  LINK=https://atcoder.jp/contests/abc214/tasks/abc214_a

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  if(n>=1 and n<=125)
    cout<<4<<"\n";
  else if(n>=126 and n<=211)
    cout<<6<<"\n";
  else
    cout<<8<<"\n";
}
