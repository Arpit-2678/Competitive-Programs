//  LINK=https://codeforces.com/contest/1534/problem/A


#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--)
  {
      int row,col;
      cin>>row>>col;
      char op1[row][col],op2[row][col];
      char ip[row][col];
      
      for(int i=0;i<row;i++)
      {
          for(int j=0;j<col;j++)
          cin>>ip[i][j];
      }
      string str1,str2;
      char ch1='R',ch2='W';
      for(int i=0;i<col;i++)
      {
          if(i&1)
          {
              str1.push_back(ch1);
              str2.push_back(ch2);
          }
          else
          {
              str1.push_back(ch2);
              str2.push_back(ch1);
          }
      }
      for(int i=0;i<row;i++)
      {
          for(int j=0;j<str1.size();j++)
          {
              if(i&1)
              op1[i][j]=str1.at(j);
              else
               op1[i][j]=str2.at(j);
          }
          
           for(int j=0;j<str1.size();j++)
          {
              if(i&1)
              op2[i][j]=str2.at(j);
              else
               op2[i][j]=str1.at(j);
          }
      }
      bool flag=true;
     for(int i=0;i<row;i++)
      {
          for(int j=0;j<col;j++)
          {
              if(ip[i][j]!='.')
              {
                  if(ip[i][j]!=op1[i][j] )
                  {
                      flag=false;
                      break;
                  }
              }
          }
          if(flag==false)
          break;
      }
      if(flag)
      {
       cout<<"YES\n";
           for(int i=0;i<row;i++)
          {
              for(int j=0;j<col;j++)
              cout<<op1[i][j];
              
              cout<<"\n";
          }
      }
      else
      {
          flag=true;
               for(int i=0;i<row;i++)
          {
              for(int j=0;j<col;j++)
              {
                  if(ip[i][j]!='.')
                  {
                      if(ip[i][j]!=op2[i][j] )
                      {
                          flag=false;
                          cout<<"NO\n";
                          break;
                      }
                  }
              }
              if(flag==false)
              break;
          }
           if(flag)
      {
       cout<<"YES\n";
           for(int i=0;i<row;i++)
          {
              for(int j=0;j<col;j++)
              cout<<op2[i][j];
              
              cout<<"\n";
          }
      }
          
      }
      
  }
}
