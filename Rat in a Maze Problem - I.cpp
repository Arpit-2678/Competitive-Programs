//  LINK=https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1#



// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    string dir="DLRU";
    int change_i[4]={1,0,0,-1};
    int change_j[4]={0,-1,1,0};
    void tra(int i,int j,int n,string str,vector<string>&v,vector<vector<int>>&vv,vector<vector<int>>&arr)
    {
        if(i>=n or j>=n or i<0 or j<0 or vv[i][j]==1 or arr[i][j]==0)
        return;
        if(i==n-1 and j==n-1)
        {
            v.push_back(str);
            return;
        }
        vv[i][j]=1;
        for(int k=0;k<4;k++)
        {
            str+=dir[k];
            tra(i+change_i[k],j+change_j[k],n,str,v,vv,arr);
            str.pop_back();
        }
        vv[i][j]=0;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
       vector<string>res;
       vector<vector<int>>vis(n,vector<int>(n,0));
       tra(0,0,n,"",res,vis,m);
       return res;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
