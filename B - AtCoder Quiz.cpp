//  LINK=https://atcoder.jp/contests/abc217/tasks/abc217_b


#include<bits/stdc++.h>
using namespace std;
int main(){
      set<string>st;
      st.insert("ABC");
       st.insert("ARC");
        st.insert("AGC");
         st.insert("AHC");
         
         
         string a,b,c;
         cin>>a>>b>>c;
         
         st.erase(a);
         st.erase(b);
         st.erase(c);
         
         cout<<*(st.begin())<<endl;
}
