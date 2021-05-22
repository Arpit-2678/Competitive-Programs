#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *next;
    node(int d)
    {
      data=d;
      next=NULL;

    }
};
node *head=NULL;
void insert_h(node *&head,int data)
{
    if(head==NULL)
    {
     head=new node(data);
   }
     node *n=new node(data);
     n->next=head;
     head=n;
}
bool isEmpty()
{
    return (head==NULL);
}
class Stack{
public:
        void push(int d)
        {
          insert_h(head,d);
        }
        void pop() {
           node *temp=head;
           head=head->next;
           //temp->next=NULL;
           delete temp;
        }
        void top()
        {
          if(!isEmpty())
          cout<<head->data<<endl;
        }
};
int main()
{
  Stack s;
  int n;
  cout<<"Enter size"<<"\n";
  cin>>n;
  cout<<"Enter data"<<"\n";
  int d;
  for(int i=1;i<=n;i++)
  {
    cin>>d;
    s.push(d);
  }
  cout<<"Displaying stack "<<"\n";
  for(int i=1;i<=n;i++)
  {
    s.top();
    s.pop();
  }
  // s.push(1);
  // s.push(2);
  // s.push(3);
  // s.top();
  // s.pop();
  // s.top();
  // s.pop();
  // s.top();
  // s.pop();
}
