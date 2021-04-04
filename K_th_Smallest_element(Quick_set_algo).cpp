// LINK=https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1/?category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Mathematical&category[]=Arrays&category[]=Strings&problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&query=category[]Mathematicalcategory[]Arrayscategory[]StringsproblemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscategory[]Mathematicalcategory[]Arrayscategory[]Strings#




//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int partition(int *a,int s,int e)
{
    int i=s-1;
    int j=s;
    int pivot =a[e];
    for(;j<=e-1;)
    {
        if(a[j]<=pivot)
        {
            i=i+1;// smaller region expansion
            swap(a[j],a[i]);
        }
        j=j+1;// move forward
    }
        swap(a[i+1],a[e]);
        return i+1;
}
int randomPartition(int arr[], int l, int r)
{
    int n = r-l+1;
    int pivot = rand() % n;
    swap(arr[l + pivot], arr[r]);
    return partition(arr, l, r);
}
    int kthSmallest(int arr[], int l, int r, int k) {
        //int pivot=arr[r];
        int res=randomPartition(arr,l,r);
        //cout<<res<<" ";
        if(k-1>res)
        {
            return kthSmallest(arr,res+1,r,k);
        }
        else if(k-1<res)
        {
            return kthSmallest(arr,l,res-1,k);
        }
        else
        {
            
        return arr[res];
        }
    }
};

// { Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends
