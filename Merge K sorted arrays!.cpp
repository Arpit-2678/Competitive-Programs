// LINK=https://www.interviewbit.com/problems/merge-k-sorted-arrays/


typedef pair<int,pair<int,int>>node;
priority_queue<node,vector<node>,greater<node>>pq;
vector<int> Solution::solve(vector<vector<int> > &A) {
    vector<int>res;
    for(int i=0;i<A.size();i++)
    {
        pq.push({A[i][0],{i,0}});
    }
    while(!pq.empty())
    {
        node curr=pq.top();
        pq.pop();
        int ele=curr.first;
        int x=curr.second.first;
        int y=curr.second.second;
        res.push_back(ele);
        if(y+1<A[x].size())
        {
            pq.push({A[x][y+1],{x,y+1}});
        }

    }
    return res;
}
