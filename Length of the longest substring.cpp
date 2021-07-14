//  LINK=https://practice.geeksforgeeks.org/problems/length-of-the-longest-substring3036/1#



#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string s){
       int start = -1;
        vector<int> dict(256, -1); 
        int maxLen = 0;
        for(int i = 0;i<s.size();++i){
            if(dict[s[i]] > start)
                start = dict[s[i]];
            dict[s[i]] = i;
            maxLen = max(maxLen, i-start);
        }         
       return maxLen; 
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}  // } Driver Code Ends
