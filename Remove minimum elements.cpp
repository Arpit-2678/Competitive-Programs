// LINK=https://practice.geeksforgeeks.org/problems/remove-minimum-elements4612/1/?category[]=Arrays&category[]=Arrays&company[]=Amazon&company[]=Amazon&problemStatus=unsolved&problemType=functional&difficulty[]=0&page=1&sortBy=submissions&query=category[]Arrayscompany[]AmazonproblemStatusunsolvedproblemTypefunctionaldifficulty[]0page1sortBysubmissionscompany[]Amazoncategory[]Arrays#


#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	int minRemoval(int arr[], int n) {
	    sort(arr,arr+n);
	    int mini=INT_MAX;
	    for(int i=0;i<n;i++)
	    {
	    auto it=upper_bound(arr,arr+n,(2*arr[i]));
	    int dist=n-(it-arr)+i;
	    mini=min(dist,mini);
	    }
	    return mini;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.minRemoval(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
