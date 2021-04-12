// LINK=https://practice.geeksforgeeks.org/problems/minimum-number-in-a-sorted-rotated-array-1587115620/1/?category[]=Arrays&category[]=Strings&category[]=Hash&category[]=Arrays&category[]=Strings&category[]=Hash&problemStatus=unsolved&problemType=functional&page=2&sortBy=submissions&query=category[]Arrayscategory[]Stringscategory[]HashproblemStatusunsolvedproblemTypefunctionalpage2sortBysubmissionscategory[]Arrayscategory[]Stringscategory[]Hash#



#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // Function to find the minimum element in sorted and rotated array
    // arr: input array
    // low and high are 0 and n-1, where n is the size of arr
    int minNumber(int arr[], int low, int high)
    {
    //     set<int>st;
    // for(int i=0;i<=high;i++)
    // {
    //     st.insert(arr[i]);
    // }
    // return *st.begin();
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(low==high)
            return arr[low];
            if( arr[mid-1]>arr[mid])
            return arr[mid];
            else if(arr[mid]<arr[high]) 
            high=mid-1;
            else
            low=mid+1;
        }
        //6
//60 10 20 30 40 50
        
    }
};

// { Driver Code Starts.


int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];	
		Solution obj;
		cout << obj.minNumber(a,0,n-1) << endl;
	}
	return 0;
}  // } Driver Code Ends
