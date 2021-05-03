#include<bits/stdc++.h>
using namespace std;
class node{
public:
     node *next;
     int data;
     node(int d)
     {
        data=d;
       next=NULL;
     }
};
node *head=NULL;
void insert_at_tail(node *&head,int data)
{
  if(head==NULL)
  head=new node(data);
  else
  {
  node *temp=head;
  while(temp->next!=NULL)
  {
    temp=temp->next;
  }
  temp->next=new node(data);
 }
}
bool isEmpty()
{
  return head==NULL;
}
class Queue{
public:
     void push(int data)
     {
          insert_at_tail(head,data);
     }
     void pop()
     {
       if(!isEmpty())
       {
         node *temp=head;
         head=head->next;
         delete temp;
       }
     }
     void front()
     {
          cout<<head->data<<" ";
     }
};
int main(int argc, char const *argv[]) {
       Queue q;
       cout<<"Enter -1 to stop inputting"<<"\n";
       int n;
       cin>>n;
       if(n==-1)
       return 0;
       else
       {
         q.push(n);
       while(n!=-1)
       {
         cin>>n;
         if(n!=-1)
         q.push(n);
         else
         break;

       }
     }
       while(!isEmpty())
       {
         q.front();
         q.pop();
       }
  return 0;
}
