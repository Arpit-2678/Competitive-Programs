/*  Given an array a[] of size N which contains elements from 0 to N-1, you need to find all the elements occurring more than once in the given array.

Example 1:

Input:
N = 4
a[] = {0,3,1,2}
Output: -1
Explanation: N=4 and all elements from 0
to (N-1 = 3) are present in the given
array. Therefore output is -1.
Example 2:

Input:
N = 5
a[] = {2,3,1,2,3}
Output: 2 3 
Explanation: 2 and 3 occur more than once
in the given array.   */

#include<bits/stdc++.h>
using namespace std;
vector<int> duplicates(int arr[], int n) {
          vector<int>v;
        for(int i=0;i<n;i++)
        {
            arr[arr[i]%n]+=n;
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]/n>1)
            v.push_back(i);
        }
        if(v.size()>=1)
        return v;
        else
        {
            v.push_back(-1);
            return v;
        }
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
  vector<int> v1=duplicates(arr,n);
  for(auto it: v1)
    cout<<it<<" ";
}
