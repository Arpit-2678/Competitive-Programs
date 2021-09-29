//  LINK=https://codeforces.com/problemset/problem/1553/A


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
      cin>>t;
      while(t--)
      {    int n;
      cin>>n;
      
      if(n<9)
      {
           cout<<"0"<<endl;
      }
      
      else
      {     if(n%10==9)
               {
                   cout<<(n/10)+1<<endl;
               }
               else
          cout<<n/10<<endl;
      }
      
            
      

     
}
}
