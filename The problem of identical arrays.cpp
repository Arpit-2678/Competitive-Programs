// LINK=https://practice.geeksforgeeks.org/problems/the-problem-of-identical-arrays3229/1/?problemStatus=unsolved&problemType=functional&difficulty[]=-1&page=1&sortBy=submissions&category[]=Binary%20Search&category[]=Searching&query=problemStatusunsolvedproblemTypefunctionaldifficulty[]-1page1sortBysubmissionscategory[]Binary%20Searchcategory[]Searching#

#include <bits/stdc++.h>
using namespace std;

int check(int *a, int *b, int n);


int main() {
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], b[n];
        int i;
        for(i = 0; i < n; i++){
            cin>> a[i];
        }
        for(i = 0; i < n; i++){
            cin>> b[i];
        }
        cout << check(a, b, n) << endl;
        
    }
	return 0;
}// } Driver Code Ends


int check(int *a, int *b, int n){
    if(is_permutation(a,a+n,b))
    return 1;
    else
    return 0;
}

