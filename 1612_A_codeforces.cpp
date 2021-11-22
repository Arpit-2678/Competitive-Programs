//  LINK=https://codeforces.com/contest/1612/problem/A


#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
    	cin >> a >> b;
    	if((a+b)%2==1) {
    		cout << "-1 -1\n";
    	
    	}
    	else
    	{
        	int d=(a+b)/2;
        	if(d>a) {
        		cout << a << " " << d-a << '\n';
        	} else {
        		cout << d << " " << 0 << '\n';
        	}
    	}
    }
}
