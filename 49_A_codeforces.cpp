// LINK=https://codeforces.com/contest/49/problem/A


#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
 getline(cin,str);
 int n=str.size();
 unordered_set<char>ust;
 ust.insert('a'); ust.insert('e'); ust.insert('i'); ust.insert('o'); ust.insert('u'); ust.insert('y'); 
 ust.insert('A'); ust.insert('E'); ust.insert('I'); ust.insert('O'); ust.insert('U'); ust.insert('Y');

  for(int i=n-1;i>=0;i--)
  {
      if(str.at(i)!=' ' and str.at(i)!='?')
      {
          if(ust.find(str.at(i))!=ust.end())
          {
              cout<<"YES\n";
              return 0;
          }
          else
          {
              cout<<"NO\n";
              return 0;
          }
      }
  }
  cout<<"NO\n";
  
}
