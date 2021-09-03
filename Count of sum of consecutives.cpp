//  LINK=https://practice.geeksforgeeks.org/problems/count-of-sum-of-consecutives3741/1#


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int getCount(int n) {
        if(n==1)
        return 0;
        int sum=0,len=0;
        for(int i=1;i<=n;i++)
        {
             if(sum>=n)
               break;
               
           sum+=i;
           len++;
        }
        int cnt=0;
        
        for(double i=1;i<=len;i++)
        {
           double x=(n-i*(i+1)/2)/(i+1);
           int wp=(int)x;
            double fp=x-wp;
            if(fp==0.0f and wp!=0)
            cnt++;
        }
        return cnt;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.getCount(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
