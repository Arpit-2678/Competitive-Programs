#include<bits/stdc++.h>
using namespace std;
void insert_at_bottom(stack<int>&s1,int x)
{
  if(s1.empty())
  {
    s1.push(x);
    return;
  }
  int data=s1.top();
  s1.pop();
  insert_at_bottom(s1,x);
  s1.push(data);
}
void rec_rev(stack<int>&s)
{
  if(s.empty())
  {
    return;
  }
  int y=s.top();
  s.pop();
  rec_rev(s);
  insert_at_bottom(s,y);
}
int main()
{
  int n;
  cin>>n;
  stack<int>s;
  int d;
  for(int i=1;i<=n;i++)
  {
    cin>>d;
    s.push(d);
  }
  rec_rev(s);
  while(!s.empty())
  {
    cout<<s.top()<<" ";
    s.pop();

  }
}
