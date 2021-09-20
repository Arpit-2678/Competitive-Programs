//  LINK=https://practice.geeksforgeeks.org/problems/prime-factors-and-their-powers5243/1#


// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> primeFactors(int n){
        vector<int>v;
        for(int i=2;i*i<=n;i++)
        {
            int cnt=0;
            bool flag=false;
            while(n%i==0)
            {
                cnt++;
                flag=true;
                n/=i;
            }
            if(flag)
            {
              v.push_back(i);
              v.push_back(cnt); 
            }
        }
        if(n>1)
        {
             v.push_back(n);
              v.push_back(1); 
        }
      
        return v;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.primeFactors(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
