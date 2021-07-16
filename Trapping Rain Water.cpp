//  LINK=https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1#


#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends

class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n){
        int la[n]{0};
        int ra[n]{0};
        int i=0,j=n-1;
        int lmax=0,rmax=0;
        for(;i<n and j>=0; i++,j--)
        {
            if(arr[i]>lmax)
            {
                lmax=arr[i];
                la[i]=lmax;
            }
            else
            {
                la[i]=lmax;
            }
            if(arr[j]>rmax)
            {
                rmax=arr[j];
                ra[j]=rmax;
            }
            else
            {
                ra[j]=rmax;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=(min(la[i],ra[i])-arr[i]);
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends
