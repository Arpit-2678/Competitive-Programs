// LINK=https://practice.geeksforgeeks.org/problems/count-smaller-elements2214/1#


#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

 // } Driver Code Ends
//User function template for C++
typedef tree<pair<int,int>, null_type, less<pair<int,int>>, rb_tree_tag,
			tree_order_statistics_node_update>
	PBDS;
class Solution{
public:	
	vector<int> constructLowerArray(int *arr, int n) {
	    PBDS st;
	    vector<int>v(n,0);
	    for(int i=n-1;i>=0;i--)
	    {
	        st.insert({arr[i],i});
	        v[i]=st.order_of_key({arr[i],-1});
	    }
	    return v;
	    
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.constructLowerArray(arr, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
