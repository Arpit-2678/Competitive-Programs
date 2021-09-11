// LINK=https://practice.geeksforgeeks.org/problems/rearrange-characters4649/1/#


#include<bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 26;

 // } Driver Code Ends
class Solution
{
    public:
    string rearrangeString(string str)
    {
        if(str.size()==1)
        return str;
        priority_queue<pair<int,char>>pq;
        int arr[26]{0};
        for(int i=0;i<str.size();i++)
        arr[str.at(i)-'a']++;
        
        for(int i=0;i<26;i++)
        {
            if(arr[i]>0)
            {
                pq.push({arr[i],(char)(i+'a')});
            }
        }
        string ans="";
        pair<int,char>curr,prev;
        prev=pq.top();
         ans.push_back(prev.second);
         pq.pop();
        while(!pq.empty())
        {
            curr=pq.top();
            ans.push_back(curr.second);
            pq.pop();
             prev.first=(prev.first-1);
            if(prev.first>0)
            pq.push(prev);
            prev=curr;
           
        }
        if(ans.size()==str.size())
        return ans;
        else
        return "-1";
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
	    string str1=ob.rearrangeString(str);
	    int flag=1;
	    int c[26] = {0};
	    for(int i=0; i<str.length(); i++)
	        c[str[i]-'a']+=1;
	    int f = 0;
	    int x = (str.length()+1)/2;
	    for(int i=0; i<26; i++)
	    {
	        if(c[i]>x)
	            f = 1;
	    }
	    if(f)
	    {
	        if(str1=="-1")
	            cout<<0<<endl;
	        else
	            cout<<1<<endl;
	    }
	    else
	    {
    	    int a[26] = {0};
    	    int b[26] = {0};
    	    for(int i=0; i<str.length(); i++)
    	        a[str[i]-'a']+=1;
    	    for(int i=0; i<str1.length(); i++)
    	        b[str1[i]-'a']+=1;
    	        
    	    for(int i=0; i<26; i++)
    	        if(a[i]!=b[i])
    	            flag = 0;
    	    
    	    for(int i=0;i<str1.length();i++)
    	    {
    		    if(i>0)
    		        if(str1[i-1]==str1[i])
    			        flag=0;
    	    }
    	    if(flag==1)
    		    cout<<"1\n";
    	    else
    	        cout<<"0\n";
	    }
	}
    return 0;
}  // } Driver Code Ends
