#include <bits/stdc++.h>
using namespace std;

int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0);cout.tie(0);
      int t;
      cin>>t;
      cin.ignore();
      while(t--)
      {
           string str;
          getline(cin,str);
          map<long long,string>st;
          string ss;
          int flag=0;
          for(int i=0;i<str.size();i++)
          {
              if((str.at(i)>='0' and str.at(i)<='9')  )
              {

                 ss.push_back(str.at(i));
              }
              else
              {

                  if(ss.size()>0)
                  {
                      if(ss.find('9')==string::npos)
                      {

                          stringstream obj(ss);
                          int x=0;
                          obj>>x;
                          st[(long long )x]=ss;
                          ss.clear();
                      }
                  }
                   ss.clear();
              }
          }
          ss.clear();
          for(int i=str.size()-1;;i--)
          {
              if(str.at(i)>='0' and str.at(i)<='9')
                ss.push_back(str.at(i));
               else
               {
                  break;
               }
          }
          if(ss.size()>0)
          {
          if(ss.find('9')==string::npos)
          {
              reverse(ss.begin(),ss.end());
              stringstream obj(ss);
                          int x=0;
                          obj>>x;
                          st[(long long )x]=ss;
          }
          }

        if(st.size()>0) 
      cout<<st.rbegin()->second<<"\n";
      else
      cout<<"-1"<<"\n";

      }
	return 0;
}
