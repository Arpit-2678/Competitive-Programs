//  LINK=https://codeforces.com/contest/1430/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool flag=false;
          for(int i=0;i<n;i++){
	           for(int j=0;j<n;j++){
	               int ans=3*i+5*j;
	               if(ans<=n && (n-ans)%7==0){
	                     flag=true;
	                     cout<<i<<" "<<j<<" "<<(n-ans)/7<<"\n";
	                      break;
	                        }
	                    }
	                    if(flag) break;
	                }
	    if(flag==false)
	    cout<<"-1\n";
	                
    }

   
}
