//  LINK=https://codeforces.com/contest/1605/problem/A


#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--)
   {
       ll a,b,c;
       cin>>a>>b>>c;
     cout << ((a + c - 2 * b) % 3 == 0 ? 0 : 1) << "\n";
   }
}
