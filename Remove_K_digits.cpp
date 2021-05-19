// LINK=https://practice.geeksforgeeks.org/problems/remove-k-digits/1#

//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    string removeKdigits(string str, int k) {
         if(str.length() <= k)
            return "0";
         if(k == 0)
            return str;
        stack <char> s;
        s.push(str.at(0));
        
        for(int i = 1; i<str.length(); i++){
            while(k>0 && !s.empty() && str.at(i)<s.top()){
                k--;
                s.pop();
            }
            s.push(str.at(i));
            if(s.size() == 1 && str.at(i) == '0')
                s.pop();
        }
        
        while(k && !s.empty()){
            k--;
            s.pop();
        }
        string res="";
        while(!s.empty()){
            res.push_back(s.top());
            s.pop();
        }
        while(res.back()=='0')
        {
            res.pop_back();
        }
        
        reverse(res.begin(), res.end());
        
        if(res.size() == 0)
            return "0";
        else
        return res;
    
}
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout<<obj.removeKdigits(S,K)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
