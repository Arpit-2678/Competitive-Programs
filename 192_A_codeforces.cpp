//  LINK=https://codeforces.com/contest/192/problem/A


#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
       unordered_set<int>st;
      for(int i=1;i<=1000000;i++)
      {
          st.insert(((i)*1LL*(i+1))/2);
      }
      int num;
      cin>>num;
      for(auto it:st)
      {
      
          if(st.find(num-it)!=st.end())
            {
                cout<<"YES";
                return 0;
            }
            
      }
      cout<<"NO";
}
