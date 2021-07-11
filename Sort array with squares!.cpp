// LINK=https://www.interviewbit.com/problems/sort-array-with-squares/


vector<int> Solution::solve(vector<int> &A) {
    priority_queue<int,vector<int>,greater<int>>pq;
    vector<int>res;
    for(auto it:A)
    {
        pq.push(it*it);
    }
    while(!pq.empty())
    {
        res.push_back(pq.top());
        pq.pop();
    }
    return res;
}
