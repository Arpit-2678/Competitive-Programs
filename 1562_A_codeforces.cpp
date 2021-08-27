//  LINK=https://codeforces.com/contest/1562/problem/A


#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int
using namespace std;


int main()
{    fastio;
int t;
cin>>t;
while(t--)
{
      lli l,r;
      cin>>l>>r;
    //  cout<<a<<" "<<b<<" "<<endl;
      if(l==r)
      {
          cout<<"0"<<endl;
      }
     
      else 
       {   if(l>(r/2))
	         {
				 cout<<r%l<<endl;
			 }

              else
			  {
				  cout<<r%((r/2) +1)<<endl;
			  }
       }
       
       
}
   
}
