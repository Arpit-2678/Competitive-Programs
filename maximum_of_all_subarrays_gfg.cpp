// LINK=https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1/?category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Mathematical&category[]=Arrays&category[]=Strings&problemStatus=unsolved&problemType=functional&page=2&sortBy=submissions&query=category[]Mathematicalcategory[]Arrayscategory[]StringsproblemStatusunsolvedproblemTypefunctionalpage2sortBysubmissionscategory[]Mathematicalcategory[]Arrayscategory[]Strings#





 // } Driver Code Ends


class Solution{
    public:
        vector <int> max_of_subarrays(int *arr, int n, int k){
             int i=0,j=0;
             vector<int>v;
             deque<int>dq;
             while(j<n)
             {
                 while(dq.size()>0 and arr[j]>dq.back())
                 {
                    dq.pop_back();
                 }
                 dq.push_back(arr[j]);
                 if(j-i+1==k)
                 {
                     v.push_back(dq.front());
                     if(arr[i]==dq.front())
                     {
                         dq.pop_front();
                     }
                     i++;
                     j++;
                     
                 }
                 else if(j-i+1<k)
                 {
                     j++;
                 }
                 
                 
             }
             return v;
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
