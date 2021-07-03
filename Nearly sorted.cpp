// LINK=https://practice.geeksforgeeks.org/problems/nearly-sorted-1587115620/1/?problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&category[]=Heap&category[]=Map&category[]=set&query=problemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscategory[]Heapcategory[]Mapcategory[]set#


#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to return the sorted array.
    vector <int> nearlySorted(int arr[], int num, int K){
        priority_queue<int, vector<int>,greater<int> > pq;
        vector<int>v;
        for(int i=0;i<num;i++)
        {
            pq.push(arr[i]);
        }
        while(!pq.empty())
        {
            v.push_back(pq.top());
            pq.pop();
        }
        return v;
        
    }
};

// { Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    int num, K;
	    cin>>num>>K;
	    
	    int arr[num];
	    for(int i = 0; i<num; ++i){
	        cin>>arr[i];
	    }
	    Solution ob;
	    vector <int> res = ob.nearlySorted(arr, num, K);
	    for (int i = 0; i < res.size (); i++)
	        cout << res[i] << " ";
	        
	    cout<<endl;
	}
	
	return 0;
}
  // } Driver Code Ends
