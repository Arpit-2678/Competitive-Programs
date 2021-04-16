// LINK=https://www.hackerrank.com/contests/pbp-mock-contest/challenges/andrew-and-covid/problem



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
   /* Enter your code here. Read input from STDIN. Print output to STDOUT */  

   // str;
  // getline(cin,str);
  char ch;
   //unordered_map<char,int>umap;
   int cnt_c=0,cnt_o=0,cnt_v=0,cnt_i=0,cnt_d=0;
   
   while(cin>>ch)
   {
       if(ch=='c')
       {
          cnt_c++;
       }
       else if(ch=='o')
       cnt_o++;
       else if(ch=='v')
       cnt_v++;
       else if(ch=='i')
       cnt_i++;
       else if(ch=='d')
       cnt_d++;
   }
   if(cnt_c==0 or cnt_o==0 or cnt_v==0 or cnt_i==0 or cnt_d==0)
    cout<<"0"<<"\n";
    else
    {
        int mini=INT_MAX;
        mini=min(mini,cnt_c);
        mini=min(mini,cnt_o);
        mini=min(mini,cnt_v);
        mini=min(mini,cnt_i);
        mini=min(mini,cnt_d);
        cout<<mini<<"\n";
    }
    return 0;
 
 
}
