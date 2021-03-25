#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int k;
	    cin>>k;
	    deque<int>dq;
	    int j=0,i=0;

	    while(j<n)
	    {

	        if(arr[j]<0)
	        {
	            dq.push_back(arr[j]);
	        }
	        if(j-i+1==k)
	        {
	            if(dq.empty())
	            {
	                cout<<"0"<<" ";
	                i++;
	                j++;
	            }
	            else
	            {
	            cout<<dq.front()<<" ";
	            if(arr[i]==dq.front())
	              dq.pop_front();
	            i++;
	            j++;
	            }
	        }
	        else if(j-i+1<k)
	            j++;
	    }
	    cout<<"\n";




	}
	return 0;
}
