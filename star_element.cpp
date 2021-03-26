/*  Given an unsorted array. The task is to find all the star and super star elements in the array. Star are those elements which are strictly greater than all the elements on its right side. Super star are those elements which are strictly greater than all the elements on its left and right side.

Note: Assume first element (A[0]) is greater than all the elements on its left side, And last element (A[n-1]) is greater than all the elements on its right side.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains an Integer N denoting size of array and the second line contains N space separated elements.

Output:
For each test case, print the space separated star elements and then in new line print super star elements. If no super star element present in array then print "-1".

Constraints:
1<=T<=200
1<=N<=106
1<=A[i]<=106

Example:
Input:
2
6
4 2 5 7 2 1
3
8 6 5

Output:
7 2 1
7
8 6 5
8    */
#include <bits/stdc++.h>
using namespace std;
 int flag=0;
void reverse_stack(stack<int>&st)
{
    if(st.size()==0)
    return;
    int x=st.top();
    st.pop();
    reverse_stack(st);
    cout<<x<<" ";
    
    
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int x;
	    stack<int>st;
	    map<int,int>mp;
	   
	   
	    for(int i=0;i<n;i++)
	    {
	          cin>>x;
	           mp[x]++;
	     
	         
	       if(st.empty())
	       {
	           st.push(x);
	       }
	       else if (x>st.top())
	       {
	           while(!st.empty() and x>=st.top())
	           {
	               st.pop();
	           }
	           st.push(x);
	       }
	       else
	       {
	           if(x!=st.top())
	           st.push(x);
	       }
	        
	          
	    }
	    
	      reverse_stack(st);
	      if(mp.rbegin()->second>1)
	      cout<<"\n"<<"-1\n";
	      else
	      cout<<"\n"<<mp.rbegin()->first<<"\n";
	}
}
	   
	    
