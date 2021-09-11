//  LINK=https://atcoder.jp/contests/abc218/tasks/abc218_b

#include <bits/stdc++.h>
using namespace std;

int main() {
	

	int arr[26];
      for(int i=0;i<26;i++)
      {
            cin>>arr[i];
      }
      string s;
      for(int i=0;i<26;i++)
      {
          char ch='a'+arr[i]-1;
          s.push_back(ch);
           
      }
      cout<<s;
	return 0;
}

