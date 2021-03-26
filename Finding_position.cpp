// Some people are standing in a queue. A selection process follows a rule where people standing on even positions are selected. Of the selected people a queue is formed and again out of these only people on even position are selected. This continues until we are left with one person. Find out the position of that person in the original queue.

// Input:
// The first line of input contains an integer T denoting the number of test cases.The first line of each test case is N,number of people standing in a queue.

// Output:
// Print the position(original queue) of that person who is left.

// Constraints:
// 1 <= T <= 103
// 1 <= N <= 108

// Example:
// Input:
// 2
// 5
// 9
// Output:
// 4
// 8

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	    int n,q;
	    cin>>n>>q;
	    cin.ignore();
	    string str;
	    getline(cin,str);
	    while(q--)
	    {
	        int typ;
	        cin>>typ;
	        long long k;
	        cin>>k;
	        if(typ==1)
	        {
	            if(k>n)
	            {
	                k=k%n;
	            }
	            rotate(str.begin(), str.begin()+str.size()-k, str.end());
	        }
	        else
	        cout<<str.at(k)<<"\n";
	        
	    }
	    
	}
}
