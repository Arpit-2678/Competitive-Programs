// All operation will take O(log N) time even in worst case scenario.
#include<bits/stdc++.h>
using namespace std;
class Heap{
  std::vector<int> v;
  bool minheap;
  // private comparator function so that we can create heap according to our need..
  bool cmp(int child , int parent)
  {
    if(minheap)
    {
      return child < parent;
    }
    else
    return child > parent;
  }

  // its a normal function that places elements in its correct positon
  void heapify(int ind)
  {
    int left=2*ind;
    int right=left+1;
    int min_ind=ind;
    int last_ind=v.size()-1;
    if(left<=last_ind and cmp(v[left],v[ind]))
    min_ind=left;
    if(right<=last_ind and cmp(v[right], v[min_ind]))
    min_ind=right;
    if(min_ind!=ind)
    {
      swap(v[ind],v[min_ind]);
      heapify(min_ind);
    }

  }
public:
    Heap(int ds=10, bool type=true)
    {
      v.reserve(ds);
      v.push_back(-1);
      minheap=type;
    }
    void push(int data)
    {
      v.push_back(data);
      int ind=v.size()-1;
      int prnt=ind/2;
      while(ind>1 and cmp(v[ind],v[prnt]))
      {
        swap(v[ind], v[prnt]);
        ind=prnt;
        prnt=prnt/2;
      }
    }
    int top()
    {
      return v[1];
    }
    void pop()
    {
      int last_ind=v.size()-1;
      swap(v[1],v[last_ind]);
      v.pop_back();
      heapify(1);
    }
    bool empty()
    {
      return v.size()==1;
    }
};


int main(int argc, char const *argv[]) {
      Heap h;
      size_t n;
      cin>>n;
      for (size_t i = 0; i < n; i++) {
          int x;
          cin>>x;
           h.push(x);
      }
      while(!h.empty())
      {
        cout<<h.top()<<" ";
        h.pop();
      }
  return 0;
}
