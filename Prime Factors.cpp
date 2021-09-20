//  LINK=https://practice.geeksforgeeks.org/problems/prime-factors5052/1#



#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
	public:
	vector<int>AllPrimeFactors(int n) {
	      vector<int>res;
	      for(int i=2;i*i<=n;i++)
	      {
	          while(n%i==0)
	          {
	              res.push_back(i);
	              n/=i;
	          }
	      }
	      if(n>1)
	      res.push_back(n);
	      
	     auto it=unique(res.begin(),res.end());
	     res.resize(distance(res.begin(),it));
	     return res;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
}  // } Driver Code Ends
