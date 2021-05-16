#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int cnt3=0;
     int cnt5=0;
     clock_t start=clock();
   for(int i=1;i<=100;i++)
   {
      string str="";
      cnt3++;
      cnt5++;
      if(cnt3==3)
      {
        str+="Fizz";
        cnt3=0;
      }
      if(cnt5==5)
      {
        str+="Buzz";
        cnt5=0;
      }
      if(str=="")
      cout<<i<<"\n";
      else
      cout<<str<<"\n";
   }
   clock_t end=clock();
   cout<<"\n"<<(end-start);
}
