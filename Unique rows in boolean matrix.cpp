// LINK=https://practice.geeksforgeeks.org/problems/unique-rows-in-boolean-matrix/1/?problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&category[]=Heap&category[]=Map&category[]=set&query=problemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscategory[]Heapcategory[]Mapcategory[]set#


#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n,m;
    	cin>>n>>m;
    	int a[MAX][MAX];
    	for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++)
    	cin>>a[i][j];
    	vector<vector<int>> vec = uniqueRow(a,n,m);
    	for(int i = 0;i<vec.size();i++){
    	    for(int x : vec[i]){
    	        cout<<x<<" ";
    	    }
    	    cout<<"$";
    	}
    	cout<<endl;
    }
}
// } Driver Code Ends


/*You are required to complete this function*/
vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
{
      vector<vector<int>>v;
      set<vector<int>>st;
      vector<int>vv;
      for(int i=0;i<row;i++)
      {
          for(int j=0;j<col;j++)
          {
              vv.push_back(M[i][j]);
          }
          auto it=st.insert(vv);
          if(it.second!=false)
          v.push_back(vv);
          vv.clear();
      }
      return v;
}
