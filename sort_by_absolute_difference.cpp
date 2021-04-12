// LINK=https://practice.geeksforgeeks.org/problems/sort-by-absolute-difference-1587115621/1/?category[]=Arrays&category[]=Strings&category[]=Hash&category[]=Arrays&category[]=Strings&category[]=Hash&problemStatus=unsolved&problemType=functional&page=3&sortBy=submissions&query=category[]Arrayscategory[]Stringscategory[]HashproblemStatusunsolvedproblemTypefunctionalpage3sortBysubmissionscategory[]Arrayscategory[]Stringscategory[]Hash#


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class compare {
private:
    int num;
  
public:
    compare(int n)
    {
        num = n;
    }
  
    // Overloads () operator to perform
    // the desired comparison
    int operator()(int arr_num1, int arr_num2)
    {
        return abs(num - arr_num1) <
                          abs(num - arr_num2);
    }
};

class Solution{
    public:
   // int a,b;
    // A[]: input array
    // N: size of array
    //Function to sort the array according to difference with given number.
  
   
    void sortABS(int arr[],int n, int k)
    {
    
       stable_sort(arr, arr + n, compare(k));
    }

};


// { Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    
	    int N, diff;
	    cin>>N>>diff;
	    int A[N];
	    
	    for(int i = 0; i<N; i++)
	        cin>>A[i];
	   
	    Solution ob;
	   
	    ob.sortABS(A, N, diff);
	    
	    for(int & val : A)
	        cout<<val<<" ";
	    cout<<endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
