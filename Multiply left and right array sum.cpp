// LINK=https://practice.geeksforgeeks.org/problems/multiply-left-and-right-array-sum1555/1/?category[]=Arrays&category[]=Arrays&page=1&query=category[]Arrayspage1category[]Arrays#



#include <bits/stdc++.h>
using namespace std;

int multiply(int arr[], int n);


int main() {
	//code
	int t;
	cin>>t;
	while (t--)
	{
	    int n,sum1=0,sum2=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
	    cout << multiply(a, n) << endl;
	    
	}
	return 0;
}// } Driver Code Ends


//User function Template for C++

int multiply(int arr[], int n)
{
    int sum_left=0,sum_right=0;
    for(int i=0;i<n;i++)
    {
        i<n/2?sum_left+=(arr[i]):sum_right+=(arr[i]);
    }
    return sum_left*sum_right;
}
