// LINK=https://www.spoj.com/problems/PRIME1/


#include<bits/stdc++.h>
#define ll long long int
#define test while(t--)
#define pb push_back
#define ub upper_bound
#define lb lower_bound
#define mp make_pair
#define xxx exit(0)
#define ain(arr) for (auto &it : arr) cin >> it;     
#define fs first
#define sec second
#define op(container) for(auto it: container)  cout<<it<<" ";
#define clr  cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define yes cout<<"Yes\n";
#define no cout<<"No\n";
using namespace std;
const int inf = 1e9+7;

bool is_prime(ll num)
{      if(num==1)
      return false;
      if(num==2 || num==3)
	      return true;
		if(num%2==0 || num%3==0)
		     return false;
	 for(int i=5;i*i<=num;i=i+6)
	   {      if(num%i==0 || num%(i+2)==0)
	              return false;
		   }
		return true;       
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
     
	 ll t;
	 cin>>t;
	 test{
		 ll left,right;
		 cin>>left>>right;
		 for(int i=left;i<=right;i++)
		 {
			 if(is_prime(i))
			 cout<<i<<"\n";
		 }
		 
	 }



	return 0;
}
