#include <bits/stdc++.h>
using namespace std;
// Dynamic Programming.......
int arr[1000];

int fibo(int num)
{
  if(arr[num]==-1)
  {

  if(num==1  or num==0)
    {
      arr[num]=num;
    }
    else
    {
      arr[num]=fibo(num-1)+fibo(num-2);
    }

  }
  return arr[num];
}
int main(int argc, char const *argv[]) {
  memset(arr,-1,sizeof(arr));
    cout<<fibo(10)<<"\n";
  return 0;
}
