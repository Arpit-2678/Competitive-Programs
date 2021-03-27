/* Given a sorted array A of size N, delete all the duplicates elements from A.


Example 1:

Input:
N = 5
Array = {2, 2, 2, 2, 2}
Output: 2
Explanation: After removing all the duplicates 
only one instance of 2 will remain.  */

#include <bits/stdc++.h>
using namespace std;
 int remove_duplicate(int arr[],int n){
        int x=0;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]!=arr[i+1])
            arr[x++]=arr[i];
        }
        arr[x++]=arr[n-1];
        return x;
    }
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
 int n;
  cin>>n;
  int arr[n]{0};
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
int x=remove_duplicates(arr,n);
for(int i=0;i<x;i++)
  cout<<arr[i]<<" ";
}
