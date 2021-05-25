// LINK=https://practice.geeksforgeeks.org/problems/smaller-on-left20360700/1/?category[]=Arrays&category[]=Strings&category[]=Hash&category[]=Arrays&category[]=Strings&category[]=Hash&problemStatus=unsolved&difficulty[]=1&page=1&sortBy=newest&query=category[]Arrayscategory[]Stringscategory[]HashproblemStatusunsolveddifficulty[]1page1sortBynewestcategory[]Arrayscategory[]Stringscategory[]Hash#



#include <bits/stdc++.h>
using namespace std;


vector<int> Smallestonleft(int arr[], int n);


int main() {
	
	int t;
	
	cin >> t;
	
	while(t--){
	    
	    int n;
	    cin >> n;
	    int arr[n+1];
	    
	    for(int i=0;i<n;i++){
	        cin>> arr[i];
	    }
	    
	    vector<int> b;
	    b = Smallestonleft(arr, n);
	    for(int i=0;i<n;i++)
	        cout << b[i] << " ";
	       
	    cout << endl;
	    
	    
	}
	
	return 0;
}// } Driver Code Ends



vector<int> Smallestonleft(int arr[], int n)
{
    // Complete the function
    set<int>st;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
         st.insert(arr[i]);
         auto it=st.lower_bound(arr[i]);
         if(it==st.begin())
         v.push_back(-1);
         else
         {
             it--;
             v.push_back(*it);
         }
    }
    return v;
}
