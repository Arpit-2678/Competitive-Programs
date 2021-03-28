/* LINK=   https://www.hackerrank.com/challenges/deque-stl/problem  */


#include <iostream>
#include <deque> 
#include<bits/stdc++.h>
using namespace std;

void printKMax(int arr[], int n, int k){
	   int i=0;int j=0;
      deque<int>dq;
      
      while(j<n)
      {
               while(dq.size()>0 and dq.back()<arr[j])
               {
                   dq.pop_back();
               }
               dq.push_back(arr[j]);
              
               if(j-i+1==k)
               {
                   
                   cout<<dq.front()<<" ";
                   if(dq.front()==arr[i])
                   dq.pop_front();
                  
                   
                   i++;
                   j++;
               }
               else if(j-i+1<k)
               j++;
      }
      cout<<"\n";
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
