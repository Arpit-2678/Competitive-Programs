// LINK=https://practice.geeksforgeeks.org/problems/heap-sort/1#



// C++ program for implementation of Heap Sort
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// The functions should be written in a way that array become sorted 
// in increasing order when heapSort() is called.

class Solution
{
    public:
    //Heapify function to maintain heap property.
    void heapify(int *arr, int n, int i)  
    {
        int left=2*i;
        int right=left+1;
        int min_ind=i;
        int last=n-1;
        if(left<=last and arr[left]>arr[min_ind])
        min_ind=left;
        if(right<=last and arr[right]>arr[min_ind])
        min_ind=right;
        if(min_ind!=i)
        {
            swap(arr[i],arr[min_ind]);
            heapify(arr,n,min_ind);
        }
        
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
        for(int i=(n-1)/2;i>=0;i--)
        {
            heapify(arr,n,i);
        }
        
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        buildHeap(arr,n);
          while(n>1)
          {
              swap(arr[0],arr[n-1]);
              n--;
              heapify(arr,n,0);
          }
    }
};




// { Driver Code Starts.

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int arr[1000000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    Solution ob;
    ob.heapSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}
  // } Driver Code Ends
