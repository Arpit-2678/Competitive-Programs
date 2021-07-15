//  LINK=https://practice.geeksforgeeks.org/problems/smallest-window-in-a-string-containing-all-the-characters-of-another-string-1587115621/1#


#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        
        int sl=s.size();
        int pl=p.size();
        if(pl>sl)
        return "-1";
        int pa[256]{0};
        int sa[256]{0};
        for(auto it:p)
        {
            pa[it]++;
        }
        int cnt=0;
        int start=0;
        int start_ind=-1;
        int min_len=INT_MAX;
        for(int i=0;i<sl;i++)
        {
            char ch=s[i];
            sa[ch]++;
            if(pa[ch]!=0 and sa[ch]<=pa[ch])
            cnt++;
            
            if(cnt==pl)
            {
                char temp=s[start];
                while(pa[temp]==0 or sa[temp]>pa[temp])
                {
                    sa[temp]--;
                    start++;
                    temp=s[start];
                }
                
                int ws=i-start+1;
                if(ws<min_len)
                {
                    min_len=ws;
                    start_ind=start;
                }
            }
            
            
        }
        if(start_ind==-1)
        return "-1";
        return s.substr(start_ind,min_len);
        
        
        
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
