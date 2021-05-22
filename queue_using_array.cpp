#include<bits/stdc++.h>
using namespace std;
class Queue
{
  int *arr;
  int f,r,cs,ms;
public:
  Queue(int size=5)
  {
     arr=new int[size];
     f=0;
     r=(size-1);
     ms=size;
     cs=0;
  }
  bool full()
  {
    return cs==ms;
  }
  bool empty()
  {
    return cs==0;
  }
  void push(int data)
  {
     if(!full())
     {
       r=(r+1)%ms;
       arr[r]=data;
       cs++;
     }
  }
  void pop()
  {
      if(!empty())
      {
        f=(f+1)%ms;
        cs--;
      }
  }
  int  front()
  {
    return arr[f];
  }
  ~Queue()
  {
    if(arr!=NULL)
    {
      delete [] arr;
      arr=NULL;
    }
  }
};
int main()
{
  cout<<"Enter the size of queue"<<"\n";
  int n;
  cin>>n;
  Queue q(n);
  for(int i=1;i<=n;i++)
      q.push(i);
  while(!q.empty())
  {
    cout<<q.front()<<" ";
    q.pop();
  }
}
